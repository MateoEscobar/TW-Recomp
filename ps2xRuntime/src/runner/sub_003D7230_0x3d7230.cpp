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

// Function: sub_003D7230
// Address: 0x3d7230 - 0x3d72c0
void sub_003D7230_0x3d7230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7230_0x3d7230");
#endif

    switch (ctx->pc) {
        case 0x3d7230u: goto label_3d7230;
        case 0x3d7234u: goto label_3d7234;
        case 0x3d7238u: goto label_3d7238;
        case 0x3d723cu: goto label_3d723c;
        case 0x3d7240u: goto label_3d7240;
        case 0x3d7244u: goto label_3d7244;
        case 0x3d7248u: goto label_3d7248;
        case 0x3d724cu: goto label_3d724c;
        case 0x3d7250u: goto label_3d7250;
        case 0x3d7254u: goto label_3d7254;
        case 0x3d7258u: goto label_3d7258;
        case 0x3d725cu: goto label_3d725c;
        case 0x3d7260u: goto label_3d7260;
        case 0x3d7264u: goto label_3d7264;
        case 0x3d7268u: goto label_3d7268;
        case 0x3d726cu: goto label_3d726c;
        case 0x3d7270u: goto label_3d7270;
        case 0x3d7274u: goto label_3d7274;
        case 0x3d7278u: goto label_3d7278;
        case 0x3d727cu: goto label_3d727c;
        case 0x3d7280u: goto label_3d7280;
        case 0x3d7284u: goto label_3d7284;
        case 0x3d7288u: goto label_3d7288;
        case 0x3d728cu: goto label_3d728c;
        case 0x3d7290u: goto label_3d7290;
        case 0x3d7294u: goto label_3d7294;
        case 0x3d7298u: goto label_3d7298;
        case 0x3d729cu: goto label_3d729c;
        case 0x3d72a0u: goto label_3d72a0;
        case 0x3d72a4u: goto label_3d72a4;
        case 0x3d72a8u: goto label_3d72a8;
        case 0x3d72acu: goto label_3d72ac;
        case 0x3d72b0u: goto label_3d72b0;
        case 0x3d72b4u: goto label_3d72b4;
        case 0x3d72b8u: goto label_3d72b8;
        case 0x3d72bcu: goto label_3d72bc;
        default: break;
    }

    ctx->pc = 0x3d7230u;

label_3d7230:
    // 0x3d7230: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d7230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3d7234:
    // 0x3d7234: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3d7234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3d7238:
    // 0x3d7238: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3d7238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3d723c:
    // 0x3d723c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d723cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d7240:
    // 0x3d7240: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d7240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3d7244:
    // 0x3d7244: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d7244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d7248:
    // 0x3d7248: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d7248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d724c:
    // 0x3d724c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d724cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d7250:
    // 0x3d7250: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d7250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d7254:
    // 0x3d7254: 0x40f809  jalr        $v0
label_3d7258:
    if (ctx->pc == 0x3D7258u) {
        ctx->pc = 0x3D7258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7254u;
        // 0x3d7258: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D725Cu;
        goto label_3d725c;
    }
    ctx->pc = 0x3D7254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D725Cu);
        ctx->pc = 0x3D7258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7254u;
        // 0x3d7258: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7254u, 0x3D725Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D725Cu;
label_3d725c:
    // 0x3d725c: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x3d725cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_3d7260:
    // 0x3d7260: 0xc0e858c  jal         func_3A1630
label_3d7264:
    if (ctx->pc == 0x3D7264u) {
        ctx->pc = 0x3D7264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7260u;
        // 0x3d7264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7268u;
        goto label_3d7268;
    }
    ctx->pc = 0x3D7260u;
    SET_GPR_U32(ctx, 31, 0x3D7268u);
    ctx->pc = 0x3D7264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7260u;
    // 0x3d7264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D7260u, 0x3D7268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7268u;
label_3d7268:
    // 0x3d7268: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3d7268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d726c:
    // 0x3d726c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d726cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d7270:
    // 0x3d7270: 0xc0ea14c  jal         func_3A8530
label_3d7274:
    if (ctx->pc == 0x3D7274u) {
        ctx->pc = 0x3D7274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7270u;
        // 0x3d7274: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7278u;
        goto label_3d7278;
    }
    ctx->pc = 0x3D7270u;
    SET_GPR_U32(ctx, 31, 0x3D7278u);
    ctx->pc = 0x3D7274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7270u;
    // 0x3d7274: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D7270u, 0x3D7278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7278u;
label_3d7278:
    // 0x3d7278: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d7278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d727c:
    // 0x3d727c: 0xc0ea12a  jal         func_3A84A8
label_3d7280:
    if (ctx->pc == 0x3D7280u) {
        ctx->pc = 0x3D7280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D727Cu;
        // 0x3d7280: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7284u;
        goto label_3d7284;
    }
    ctx->pc = 0x3D727Cu;
    SET_GPR_U32(ctx, 31, 0x3D7284u);
    ctx->pc = 0x3D7280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D727Cu;
    // 0x3d7280: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D727Cu, 0x3D7284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7284u;
label_3d7284:
    // 0x3d7284: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d7284u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d7288:
    // 0x3d7288: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d7288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d728c:
    // 0x3d728c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d728cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d7290:
    // 0x3d7290: 0xc0ea12a  jal         func_3A84A8
label_3d7294:
    if (ctx->pc == 0x3D7294u) {
        ctx->pc = 0x3D7294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7290u;
        // 0x3d7294: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7298u;
        goto label_3d7298;
    }
    ctx->pc = 0x3D7290u;
    SET_GPR_U32(ctx, 31, 0x3D7298u);
    ctx->pc = 0x3D7294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7290u;
    // 0x3d7294: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D7290u, 0x3D7298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7298u;
label_3d7298:
    // 0x3d7298: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3d7298u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d729c:
    // 0x3d729c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3d729cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d72a0:
    // 0x3d72a0: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3d72a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3d72a4:
    // 0x3d72a4: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x3d72a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_3d72a8:
    // 0x3d72a8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3d72a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d72ac:
    // 0x3d72ac: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3d72acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d72b0:
    // 0x3d72b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d72b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d72b4:
    // 0x3d72b4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3d72b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3d72b8:
    // 0x3d72b8: 0x3e00008  jr          $ra
label_3d72bc:
    if (ctx->pc == 0x3D72BCu) {
        ctx->pc = 0x3D72BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D72B8u;
        // 0x3d72bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D72C0u;
        goto label_fallthrough_0x3d72b8;
    }
    ctx->pc = 0x3D72B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D72BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D72B8u;
        // 0x3d72bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D72B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d72b8:
    ctx->pc = 0x3D72C0u;
}
