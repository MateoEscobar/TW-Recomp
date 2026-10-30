#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00487210
// Address: 0x487210 - 0x487298
void sub_00487210_0x487210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00487210_0x487210");
#endif

    switch (ctx->pc) {
        case 0x487210u: goto label_487210;
        case 0x487214u: goto label_487214;
        case 0x487218u: goto label_487218;
        case 0x48721cu: goto label_48721c;
        case 0x487220u: goto label_487220;
        case 0x487224u: goto label_487224;
        case 0x487228u: goto label_487228;
        case 0x48722cu: goto label_48722c;
        case 0x487230u: goto label_487230;
        case 0x487234u: goto label_487234;
        case 0x487238u: goto label_487238;
        case 0x48723cu: goto label_48723c;
        case 0x487240u: goto label_487240;
        case 0x487244u: goto label_487244;
        case 0x487248u: goto label_487248;
        case 0x48724cu: goto label_48724c;
        case 0x487250u: goto label_487250;
        case 0x487254u: goto label_487254;
        case 0x487258u: goto label_487258;
        case 0x48725cu: goto label_48725c;
        case 0x487260u: goto label_487260;
        case 0x487264u: goto label_487264;
        case 0x487268u: goto label_487268;
        case 0x48726cu: goto label_48726c;
        case 0x487270u: goto label_487270;
        case 0x487274u: goto label_487274;
        case 0x487278u: goto label_487278;
        case 0x48727cu: goto label_48727c;
        case 0x487280u: goto label_487280;
        case 0x487284u: goto label_487284;
        case 0x487288u: goto label_487288;
        case 0x48728cu: goto label_48728c;
        case 0x487290u: goto label_487290;
        case 0x487294u: goto label_487294;
        default: break;
    }

    ctx->pc = 0x487210u;

label_487210:
    // 0x487210: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x487210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_487214:
    // 0x487214: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x487214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_487218:
    // 0x487218: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x487218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_48721c:
    // 0x48721c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x48721cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_487220:
    // 0x487220: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x487220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_487224:
    // 0x487224: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
label_487228:
    if (ctx->pc == 0x487228u) {
        ctx->pc = 0x487228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487224u;
        // 0x487228: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48722Cu;
        goto label_48722c;
    }
    ctx->pc = 0x487224u;
    {
        const bool branch_taken_0x487224 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x487228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487224u;
        // 0x487228: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487224) {
            ctx->pc = 0x487280u;
            goto label_487280;
        }
    }
    ctx->pc = 0x48722Cu;
label_48722c:
    // 0x48722c: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x48722cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_487230:
    // 0x487230: 0x26320090  addiu       $s2, $s1, 0x90
    ctx->pc = 0x487230u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_487234:
    // 0x487234: 0x5092000b  beql        $a0, $s2, . + 4 + (0xB << 2)
label_487238:
    if (ctx->pc == 0x487238u) {
        ctx->pc = 0x487238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487234u;
        // 0x487238: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48723Cu;
        goto label_48723c;
    }
    ctx->pc = 0x487234u;
    {
        const bool branch_taken_0x487234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        if (branch_taken_0x487234) {
            ctx->pc = 0x487238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x487234u;
            // 0x487238: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x487264u;
            goto label_487264;
        }
    }
    ctx->pc = 0x48723Cu;
label_48723c:
    // 0x48723c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x48723cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_487240:
    // 0x487240: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x487240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_487244:
    // 0x487244: 0x0  nop
    ctx->pc = 0x487244u;
    // NOP
label_487248:
    // 0x487248: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x487248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_48724c:
    // 0x48724c: 0x40f809  jalr        $v0
label_487250:
    if (ctx->pc == 0x487250u) {
        ctx->pc = 0x487254u;
        goto label_487254;
    }
    ctx->pc = 0x48724Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x487254u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48724Cu, 0x487254u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x487254u;
label_487254:
    // 0x487254: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x487254u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_487258:
    // 0x487258: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
label_48725c:
    if (ctx->pc == 0x48725Cu) {
        ctx->pc = 0x48725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487258u;
        // 0x48725c: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487260u;
        goto label_487260;
    }
    ctx->pc = 0x487258u;
    {
        const bool branch_taken_0x487258 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x48725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487258u;
        // 0x48725c: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487258) {
            ctx->pc = 0x487248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_487248;
        }
    }
    ctx->pc = 0x487260u;
label_487260:
    // 0x487260: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x487260u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_487264:
    // 0x487264: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x487264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_487268:
    // 0x487268: 0x304200f7  andi        $v0, $v0, 0xF7
    ctx->pc = 0x487268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)247);
label_48726c:
    // 0x48726c: 0xc121c84  jal         func_487210
label_487270:
    if (ctx->pc == 0x487270u) {
        ctx->pc = 0x487270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48726Cu;
        // 0x487270: 0xa2220003  sb          $v0, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487274u;
        goto label_487274;
    }
    ctx->pc = 0x48726Cu;
    SET_GPR_U32(ctx, 31, 0x487274u);
    ctx->pc = 0x487270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48726Cu;
    // 0x487270: 0xa2220003  sb          $v0, 0x3($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x487210u;
    goto label_487210;
    ctx->pc = 0x487274u;
label_487274:
    // 0x487274: 0x8e31009c  lw          $s1, 0x9C($s1)
    ctx->pc = 0x487274u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_487278:
    // 0x487278: 0x5620ffed  bnel        $s1, $zero, . + 4 + (-0x13 << 2)
label_48727c:
    if (ctx->pc == 0x48727Cu) {
        ctx->pc = 0x48727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487278u;
        // 0x48727c: 0x8e240090  lw          $a0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487280u;
        goto label_487280;
    }
    ctx->pc = 0x487278u;
    {
        const bool branch_taken_0x487278 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x487278) {
            ctx->pc = 0x48727Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x487278u;
            // 0x48727c: 0x8e240090  lw          $a0, 0x90($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x487230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_487230;
        }
    }
    ctx->pc = 0x487280u;
label_487280:
    // 0x487280: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x487280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_487284:
    // 0x487284: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x487284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_487288:
    // 0x487288: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x487288u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48728c:
    // 0x48728c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48728cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_487290:
    // 0x487290: 0x3e00008  jr          $ra
label_487294:
    if (ctx->pc == 0x487294u) {
        ctx->pc = 0x487294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487290u;
        // 0x487294: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487298u;
        goto label_fallthrough_0x487290;
    }
    ctx->pc = 0x487290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x487294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487290u;
        // 0x487294: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x487290:
    ctx->pc = 0x487298u;
}
