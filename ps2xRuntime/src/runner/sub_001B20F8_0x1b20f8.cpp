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

// Function: sub_001B20F8
// Address: 0x1b20f8 - 0x1b21a8
void sub_001B20F8_0x1b20f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B20F8_0x1b20f8");
#endif

    switch (ctx->pc) {
        case 0x1b2120u: goto label_1b2120;
        case 0x1b212cu: goto label_1b212c;
        case 0x1b2140u: goto label_1b2140;
        case 0x1b2148u: goto label_1b2148;
        case 0x1b2150u: goto label_1b2150;
        case 0x1b215cu: goto label_1b215c;
        case 0x1b216cu: goto label_1b216c;
        case 0x1b217cu: goto label_1b217c;
        default: break;
    }

    ctx->pc = 0x1b20f8u;

    // 0x1b20f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b20f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b20fc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1b20fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1b2100: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b2100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b2104: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b2104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2108: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b2108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b210c: 0x26500008  addiu       $s0, $s2, 0x8
    ctx->pc = 0x1b210cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1b2110: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2114: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b2114u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2118: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b2118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b211c: 0x0  nop
    ctx->pc = 0x1b211cu;
    // NOP
label_1b2120:
    // 0x1b2120: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1b2120u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1b2124: 0xc083802  jal         func_20E008
    ctx->pc = 0x1B2124u;
    SET_GPR_U32(ctx, 31, 0x1B212Cu);
    ctx->pc = 0x1B2128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2124u;
    // 0x1b2128: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E008u, 0x1B2124u, 0x1B212Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B212Cu;
label_1b212c:
    // 0x1b212c: 0x0  nop
    ctx->pc = 0x1b212cu;
    // NOP
    // 0x1b2130: 0x623fffb  bgezl       $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B2130u;
    {
        const bool branch_taken_0x1b2130 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1b2130) {
            ctx->pc = 0x1B2134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2130u;
            // 0x1b2134: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2120;
        }
    }
    ctx->pc = 0x1B2138u;
    // 0x1b2138: 0xc06a3d2  jal         func_1A8F48
    ctx->pc = 0x1B2138u;
    SET_GPR_U32(ctx, 31, 0x1B2140u);
    ctx->pc = 0x1B213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2138u;
    // 0x1b213c: 0x264415b0  addiu       $a0, $s2, 0x15B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F48u, 0x1B2138u, 0x1B2140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2140u;
label_1b2140:
    // 0x1b2140: 0xc0710e2  jal         func_1C4388
    ctx->pc = 0x1B2140u;
    SET_GPR_U32(ctx, 31, 0x1B2148u);
    ctx->pc = 0x1B2144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2140u;
    // 0x1b2144: 0x264415d0  addiu       $a0, $s2, 0x15D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4388u, 0x1B2140u, 0x1B2148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2148u;
label_1b2148:
    // 0x1b2148: 0xc0710e2  jal         func_1C4388
    ctx->pc = 0x1B2148u;
    SET_GPR_U32(ctx, 31, 0x1B2150u);
    ctx->pc = 0x1B214Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2148u;
    // 0x1b214c: 0x26443f10  addiu       $a0, $s2, 0x3F10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4388u, 0x1B2148u, 0x1B2150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2150u;
label_1b2150:
    // 0x1b2150: 0x34048960  ori         $a0, $zero, 0x8960
    ctx->pc = 0x1b2150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35168);
    // 0x1b2154: 0xc070a0e  jal         func_1C2838
    ctx->pc = 0x1B2154u;
    SET_GPR_U32(ctx, 31, 0x1B215Cu);
    ctx->pc = 0x1B2158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2154u;
    // 0x1b2158: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2838u, 0x1B2154u, 0x1B215Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B215Cu;
label_1b215c:
    // 0x1b215c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1b215cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1b2160: 0x348477d0  ori         $a0, $a0, 0x77D0
    ctx->pc = 0x1b2160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30672);
    // 0x1b2164: 0xc06a9bc  jal         func_1AA6F0
    ctx->pc = 0x1B2164u;
    SET_GPR_U32(ctx, 31, 0x1B216Cu);
    ctx->pc = 0x1B2168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2164u;
    // 0x1b2168: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA6F0u, 0x1B2164u, 0x1B216Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B216Cu;
label_1b216c:
    // 0x1b216c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1b216cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1b2170: 0x34848280  ori         $a0, $a0, 0x8280
    ctx->pc = 0x1b2170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)33408);
    // 0x1b2174: 0xc06a9bc  jal         func_1AA6F0
    ctx->pc = 0x1B2174u;
    SET_GPR_U32(ctx, 31, 0x1B217Cu);
    ctx->pc = 0x1B2178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2174u;
    // 0x1b2178: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA6F0u, 0x1B2174u, 0x1B217Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B217Cu;
label_1b217c:
    // 0x1b217c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b217cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1b2180: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b2180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2184: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b2184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1b2188: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b2188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b218c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b218cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2190: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1b2190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2198: 0xac4377a0  sw          $v1, 0x77A0($v0)
    ctx->pc = 0x1b2198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30624), GPR_U32(ctx, 3));
    // 0x1b219c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B219Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B21A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B219Cu;
        // 0x1b21a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B219Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B21A4u;
    // 0x1b21a4: 0x0  nop
    ctx->pc = 0x1b21a4u;
    // NOP
    ctx->pc = 0x1b21a8u;
}
