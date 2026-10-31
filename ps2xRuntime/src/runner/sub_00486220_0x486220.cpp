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

// Function: sub_00486220
// Address: 0x486220 - 0x486290
void sub_00486220_0x486220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00486220_0x486220");
#endif

    switch (ctx->pc) {
        case 0x486220u: goto label_486220;
        case 0x486224u: goto label_486224;
        case 0x486228u: goto label_486228;
        case 0x48622cu: goto label_48622c;
        case 0x486230u: goto label_486230;
        case 0x486234u: goto label_486234;
        case 0x486238u: goto label_486238;
        case 0x48623cu: goto label_48623c;
        case 0x486240u: goto label_486240;
        case 0x486244u: goto label_486244;
        case 0x486248u: goto label_486248;
        case 0x48624cu: goto label_48624c;
        case 0x486250u: goto label_486250;
        case 0x486254u: goto label_486254;
        case 0x486258u: goto label_486258;
        case 0x48625cu: goto label_48625c;
        case 0x486260u: goto label_486260;
        case 0x486264u: goto label_486264;
        case 0x486268u: goto label_486268;
        case 0x48626cu: goto label_48626c;
        case 0x486270u: goto label_486270;
        case 0x486274u: goto label_486274;
        case 0x486278u: goto label_486278;
        case 0x48627cu: goto label_48627c;
        case 0x486280u: goto label_486280;
        case 0x486284u: goto label_486284;
        case 0x486288u: goto label_486288;
        case 0x48628cu: goto label_48628c;
        default: break;
    }

    ctx->pc = 0x486220u;

label_486220:
    // 0x486220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x486220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_486224:
    // 0x486224: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x486224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_486228:
    // 0x486228: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x486228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48622c:
    // 0x48622c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x48622cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_486230:
    // 0x486230: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x486230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_486234:
    // 0x486234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x486234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_486238:
    // 0x486238: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x486238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48623c:
    // 0x48623c: 0xc11ffb4  jal         func_47FED0
label_486240:
    if (ctx->pc == 0x486240u) {
        ctx->pc = 0x486240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48623Cu;
        // 0x486240: 0x2484ebf0  addiu       $a0, $a0, -0x1410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486244u;
        goto label_486244;
    }
    ctx->pc = 0x48623Cu;
    SET_GPR_U32(ctx, 31, 0x486244u);
    ctx->pc = 0x486240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48623Cu;
    // 0x486240: 0x2484ebf0  addiu       $a0, $a0, -0x1410 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x48623Cu, 0x486244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486244u;
label_486244:
    // 0x486244: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x486244u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_486248:
    // 0x486248: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x486248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48624c:
    // 0x48624c: 0x2610ad18  addiu       $s0, $s0, -0x52E8
    ctx->pc = 0x48624cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946072));
label_486250:
    // 0x486250: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x486250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_486254:
    // 0x486254: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x486254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_486258:
    // 0x486258: 0x40f809  jalr        $v0
label_48625c:
    if (ctx->pc == 0x48625Cu) {
        ctx->pc = 0x48625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486258u;
        // 0x48625c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486260u;
        goto label_486260;
    }
    ctx->pc = 0x486258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x486260u);
        ctx->pc = 0x48625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486258u;
        // 0x48625c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486258u, 0x486260u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x486260u;
label_486260:
    // 0x486260: 0x8f838970  lw          $v1, -0x7690($gp)
    ctx->pc = 0x486260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936944)));
label_486264:
    // 0x486264: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x486264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_486268:
    // 0x486268: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x486268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_48626c:
    // 0x48626c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x48626cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_486270:
    // 0x486270: 0x40f809  jalr        $v0
label_486274:
    if (ctx->pc == 0x486274u) {
        ctx->pc = 0x486274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486270u;
        // 0x486274: 0x8c640060  lw          $a0, 0x60($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486278u;
        goto label_486278;
    }
    ctx->pc = 0x486270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x486278u);
        ctx->pc = 0x486274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486270u;
        // 0x486274: 0x8c640060  lw          $a0, 0x60($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486270u, 0x486278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x486278u;
label_486278:
    // 0x486278: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x486278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48627c:
    // 0x48627c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48627cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_486280:
    // 0x486280: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x486280u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_486284:
    // 0x486284: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x486284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_486288:
    // 0x486288: 0x3e00008  jr          $ra
label_48628c:
    if (ctx->pc == 0x48628Cu) {
        ctx->pc = 0x48628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486288u;
        // 0x48628c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486290u;
        goto label_fallthrough_0x486288;
    }
    ctx->pc = 0x486288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486288u;
        // 0x48628c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x486288:
    ctx->pc = 0x486290u;
}
