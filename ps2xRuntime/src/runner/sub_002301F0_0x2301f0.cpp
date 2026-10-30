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

// Function: sub_002301F0
// Address: 0x2301f0 - 0x2302a8
void sub_002301F0_0x2301f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002301F0_0x2301f0");
#endif

    switch (ctx->pc) {
        case 0x230218u: goto label_230218;
        case 0x230228u: goto label_230228;
        case 0x23023cu: goto label_23023c;
        case 0x230278u: goto label_230278;
        case 0x230284u: goto label_230284;
        case 0x230294u: goto label_230294;
        default: break;
    }

    ctx->pc = 0x2301f0u;

    // 0x2301f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2301f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2301f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2301f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2301f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2301f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2301fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2301fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230200: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x230200u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x230204: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x230204u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x230208: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x230208u;
    {
        const bool branch_taken_0x230208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x230208) {
            ctx->pc = 0x23020Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230208u;
            // 0x23020c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230298u;
            goto label_230298;
        }
    }
    ctx->pc = 0x230210u;
    // 0x230210: 0xc08a05a  jal         func_228168
    ctx->pc = 0x230210u;
    SET_GPR_U32(ctx, 31, 0x230218u);
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x230210u, 0x230218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230218u;
label_230218:
    // 0x230218: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x230218u;
    {
        const bool branch_taken_0x230218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230218) {
            ctx->pc = 0x230234u;
            goto label_230234;
        }
    }
    ctx->pc = 0x230220u;
    // 0x230220: 0xc087502  jal         func_21D408
    ctx->pc = 0x230220u;
    SET_GPR_U32(ctx, 31, 0x230228u);
    ctx->pc = 0x230224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230220u;
    // 0x230224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x230220u, 0x230228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230228u;
label_230228:
    // 0x230228: 0x904302d4  lbu         $v1, 0x2D4($v0)
    ctx->pc = 0x230228u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x23022c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x23022Cu;
    {
        const bool branch_taken_0x23022c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23022c) {
            ctx->pc = 0x23028Cu;
            goto label_23028c;
        }
    }
    ctx->pc = 0x230234u;
label_230234:
    // 0x230234: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x230234u;
    SET_GPR_U32(ctx, 31, 0x23023Cu);
    ctx->pc = 0x230238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230234u;
    // 0x230238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x230234u, 0x23023Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23023Cu;
label_23023c:
    // 0x23023c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x23023cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x230240: 0x2449fffe  addiu       $t1, $v0, -0x2
    ctx->pc = 0x230240u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x230244: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x230244u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x230248: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x230248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x23024c: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x23024cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x230250: 0x24050057  addiu       $a1, $zero, 0x57
    ctx->pc = 0x230250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x230254: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x230254u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x230258: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x230258u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23025c: 0x109402b  sltu        $t0, $t0, $t1
    ctx->pc = 0x23025cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x230260: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x230260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x230264: 0x248401e0  addiu       $a0, $a0, 0x1E0
    ctx->pc = 0x230264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    // 0x230268: 0x48280a  movz        $a1, $v0, $t0
    ctx->pc = 0x230268u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x23026c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x23026cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x230270: 0xc045200  jal         func_114800
    ctx->pc = 0x230270u;
    SET_GPR_U32(ctx, 31, 0x230278u);
    ctx->pc = 0x230274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230270u;
    // 0x230274: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114800u, 0x230270u, 0x230278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230278u;
label_230278:
    // 0x230278: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x230278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23027c: 0xc087c28  jal         func_21F0A0
    ctx->pc = 0x23027Cu;
    SET_GPR_U32(ctx, 31, 0x230284u);
    ctx->pc = 0x230280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23027Cu;
    // 0x230280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F0A0u, 0x23027Cu, 0x230284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230284u;
label_230284:
    // 0x230284: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x230284u;
    {
        const bool branch_taken_0x230284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230284u;
        // 0x230288: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230284) {
            ctx->pc = 0x230298u;
            goto label_230298;
        }
    }
    ctx->pc = 0x23028Cu;
label_23028c:
    // 0x23028c: 0xc087c74  jal         func_21F1D0
    ctx->pc = 0x23028Cu;
    SET_GPR_U32(ctx, 31, 0x230294u);
    ctx->pc = 0x230290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23028Cu;
    // 0x230290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F1D0u, 0x23028Cu, 0x230294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230294u;
label_230294:
    // 0x230294: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x230294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_230298:
    // 0x230298: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x230298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23029c: 0x3e00008  jr          $ra
    ctx->pc = 0x23029Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2302A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23029Cu;
        // 0x2302a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23029Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2302A4u;
    // 0x2302a4: 0x0  nop
    ctx->pc = 0x2302a4u;
    // NOP
    ctx->pc = 0x2302a8u;
}
