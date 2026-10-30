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

// Function: sub_004E71F8
// Address: 0x4e71f8 - 0x4e72c8
void sub_004E71F8_0x4e71f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E71F8_0x4e71f8");
#endif

    switch (ctx->pc) {
        case 0x4e71f8u: goto label_4e71f8;
        case 0x4e71fcu: goto label_4e71fc;
        case 0x4e7200u: goto label_4e7200;
        case 0x4e7204u: goto label_4e7204;
        case 0x4e7208u: goto label_4e7208;
        case 0x4e720cu: goto label_4e720c;
        case 0x4e7210u: goto label_4e7210;
        case 0x4e7214u: goto label_4e7214;
        case 0x4e7218u: goto label_4e7218;
        case 0x4e721cu: goto label_4e721c;
        case 0x4e7220u: goto label_4e7220;
        case 0x4e7224u: goto label_4e7224;
        case 0x4e7228u: goto label_4e7228;
        case 0x4e722cu: goto label_4e722c;
        case 0x4e7230u: goto label_4e7230;
        case 0x4e7234u: goto label_4e7234;
        case 0x4e7238u: goto label_4e7238;
        case 0x4e723cu: goto label_4e723c;
        case 0x4e7240u: goto label_4e7240;
        case 0x4e7244u: goto label_4e7244;
        case 0x4e7248u: goto label_4e7248;
        case 0x4e724cu: goto label_4e724c;
        case 0x4e7250u: goto label_4e7250;
        case 0x4e7254u: goto label_4e7254;
        case 0x4e7258u: goto label_4e7258;
        case 0x4e725cu: goto label_4e725c;
        case 0x4e7260u: goto label_4e7260;
        case 0x4e7264u: goto label_4e7264;
        case 0x4e7268u: goto label_4e7268;
        case 0x4e726cu: goto label_4e726c;
        case 0x4e7270u: goto label_4e7270;
        case 0x4e7274u: goto label_4e7274;
        case 0x4e7278u: goto label_4e7278;
        case 0x4e727cu: goto label_4e727c;
        case 0x4e7280u: goto label_4e7280;
        case 0x4e7284u: goto label_4e7284;
        case 0x4e7288u: goto label_4e7288;
        case 0x4e728cu: goto label_4e728c;
        case 0x4e7290u: goto label_4e7290;
        case 0x4e7294u: goto label_4e7294;
        case 0x4e7298u: goto label_4e7298;
        case 0x4e729cu: goto label_4e729c;
        case 0x4e72a0u: goto label_4e72a0;
        case 0x4e72a4u: goto label_4e72a4;
        case 0x4e72a8u: goto label_4e72a8;
        case 0x4e72acu: goto label_4e72ac;
        case 0x4e72b0u: goto label_4e72b0;
        case 0x4e72b4u: goto label_4e72b4;
        case 0x4e72b8u: goto label_4e72b8;
        case 0x4e72bcu: goto label_4e72bc;
        case 0x4e72c0u: goto label_4e72c0;
        case 0x4e72c4u: goto label_4e72c4;
        default: break;
    }

    ctx->pc = 0x4e71f8u;

label_4e71f8:
    // 0x4e71f8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4e71f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_4e71fc:
    // 0x4e71fc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x4e71fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_4e7200:
    // 0x4e7200: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x4e7200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_4e7204:
    // 0x4e7204: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4e7204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e7208:
    // 0x4e7208: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4e7208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_4e720c:
    // 0x4e720c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x4e720cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4e7210:
    // 0x4e7210: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x4e7210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_4e7214:
    // 0x4e7214: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4e7214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4e7218:
    // 0x4e7218: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x4e7218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_4e721c:
    // 0x4e721c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4e721cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4e7220:
    // 0x4e7220: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4e7220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4e7224:
    // 0x4e7224: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4e7224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4e7228:
    // 0x4e7228: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
label_4e722c:
    if (ctx->pc == 0x4E722Cu) {
        ctx->pc = 0x4E722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7228u;
        // 0x4e722c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7230u;
        goto label_4e7230;
    }
    ctx->pc = 0x4E7228u;
    {
        const bool branch_taken_0x4e7228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7228u;
        // 0x4e722c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7228) {
            ctx->pc = 0x4E7294u;
            goto label_4e7294;
        }
    }
    ctx->pc = 0x4E7230u;
label_4e7230:
    // 0x4e7230: 0x3c15006f  lui         $s5, 0x6F
    ctx->pc = 0x4e7230u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)111 << 16));
label_4e7234:
    // 0x4e7234: 0x3c140055  lui         $s4, 0x55
    ctx->pc = 0x4e7234u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)85 << 16));
label_4e7238:
    // 0x4e7238: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4e7238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4e723c:
    // 0x4e723c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x4e723cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_4e7240:
    // 0x4e7240: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4e7240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e7244:
    // 0x4e7244: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x4e7244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_4e7248:
    // 0x4e7248: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e7248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4e724c:
    // 0x4e724c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x4e724cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e7250:
    // 0x4e7250: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4e7250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4e7254:
    // 0x4e7254: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x4e7254u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_4e7258:
    // 0x4e7258: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x4e7258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_4e725c:
    // 0x4e725c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x4e725cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4e7260:
    // 0x4e7260: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4e7264:
    if (ctx->pc == 0x4E7264u) {
        ctx->pc = 0x4E7264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7260u;
        // 0x4e7264: 0x8ea8b9c0  lw          $t0, -0x4640($s5) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7268u;
        goto label_4e7268;
    }
    ctx->pc = 0x4E7260u;
    {
        const bool branch_taken_0x4e7260 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7260u;
        // 0x4e7264: 0x8ea8b9c0  lw          $t0, -0x4640($s5) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7260) {
            ctx->pc = 0x4E7284u;
            goto label_4e7284;
        }
    }
    ctx->pc = 0x4E7268u;
label_4e7268:
    // 0x4e7268: 0x268653e8  addiu       $a2, $s4, 0x53E8
    ctx->pc = 0x4e7268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 21480));
label_4e726c:
    // 0x4e726c: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e726cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e7270:
    // 0x4e7270: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e7270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e7274:
    // 0x4e7274: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e7274u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e7278:
    // 0x4e7278: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e7278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e727c:
    // 0x4e727c: 0x60f809  jalr        $v1
label_4e7280:
    if (ctx->pc == 0x4E7280u) {
        ctx->pc = 0x4E7280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E727Cu;
        // 0x4e7280: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7284u;
        goto label_4e7284;
    }
    ctx->pc = 0x4E727Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E7284u);
        ctx->pc = 0x4E7280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E727Cu;
        // 0x4e7280: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E727Cu, 0x4E7284u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E7284u;
label_4e7284:
    // 0x4e7284: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4e7284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4e7288:
    // 0x4e7288: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4e7288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4e728c:
    // 0x4e728c: 0x1462ffea  bne         $v1, $v0, . + 4 + (-0x16 << 2)
label_4e7290:
    if (ctx->pc == 0x4E7290u) {
        ctx->pc = 0x4E7290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E728Cu;
        // 0x4e7290: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7294u;
        goto label_4e7294;
    }
    ctx->pc = 0x4E728Cu;
    {
        const bool branch_taken_0x4e728c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E7290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E728Cu;
        // 0x4e7290: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e728c) {
            ctx->pc = 0x4E7238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e7238;
        }
    }
    ctx->pc = 0x4E7294u;
label_4e7294:
    // 0x4e7294: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4e7294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4e7298:
    // 0x4e7298: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4e7298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e729c:
    // 0x4e729c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x4e729cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4e72a0:
    // 0x4e72a0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4e72a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4e72a4:
    // 0x4e72a4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x4e72a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4e72a8:
    // 0x4e72a8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x4e72a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4e72ac:
    // 0x4e72ac: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x4e72acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4e72b0:
    // 0x4e72b0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4e72b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4e72b4:
    // 0x4e72b4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x4e72b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e72b8:
    // 0x4e72b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4e72b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4e72bc:
    // 0x4e72bc: 0x3e00008  jr          $ra
label_4e72c0:
    if (ctx->pc == 0x4E72C0u) {
        ctx->pc = 0x4E72C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E72BCu;
        // 0x4e72c0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E72C4u;
        goto label_4e72c4;
    }
    ctx->pc = 0x4E72BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E72C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E72BCu;
        // 0x4e72c0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E72BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E72C4u;
label_4e72c4:
    // 0x4e72c4: 0x0  nop
    ctx->pc = 0x4e72c4u;
    // NOP
    ctx->pc = 0x4e72c8u;
}
