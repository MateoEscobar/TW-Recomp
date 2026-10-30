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

// Function: sub_0040B0C8
// Address: 0x40b0c8 - 0x40b168
void sub_0040B0C8_0x40b0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040B0C8_0x40b0c8");
#endif

    switch (ctx->pc) {
        case 0x40b0e4u: goto label_40b0e4;
        case 0x40b0f4u: goto label_40b0f4;
        case 0x40b104u: goto label_40b104;
        case 0x40b110u: goto label_40b110;
        case 0x40b11cu: goto label_40b11c;
        case 0x40b130u: goto label_40b130;
        case 0x40b138u: goto label_40b138;
        case 0x40b14cu: goto label_40b14c;
        default: break;
    }

    ctx->pc = 0x40b0c8u;

    // 0x40b0c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40b0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40b0cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x40b0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40b0d0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x40b0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x40b0d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40b0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x40b0d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40b0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40b0dc: 0xc1029dc  jal         func_40A770
    ctx->pc = 0x40B0DCu;
    SET_GPR_U32(ctx, 31, 0x40B0E4u);
    ctx->pc = 0x40B0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B0DCu;
    // 0x40b0e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A770u, 0x40B0DCu, 0x40B0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B0E4u;
label_40b0e4:
    // 0x40b0e4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x40b0e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40b0e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b0ec: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x40B0ECu;
    SET_GPR_U32(ctx, 31, 0x40B0F4u);
    ctx->pc = 0x40B0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B0ECu;
    // 0x40b0f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x40B0ECu, 0x40B0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B0F4u;
label_40b0f4:
    // 0x40b0f4: 0x1051000b  beq         $v0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x40B0F4u;
    {
        const bool branch_taken_0x40b0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x40B0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B0F4u;
        // 0x40b0f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b0f4) {
            ctx->pc = 0x40B124u;
            goto label_40b124;
        }
    }
    ctx->pc = 0x40B0FCu;
    // 0x40b0fc: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40B0FCu;
    SET_GPR_U32(ctx, 31, 0x40B104u);
    ctx->pc = 0x40B100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B0FCu;
    // 0x40b100: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40B0FCu, 0x40B104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B104u;
label_40b104:
    // 0x40b104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b108: 0xc0c8ef2  jal         func_323BC8
    ctx->pc = 0x40B108u;
    SET_GPR_U32(ctx, 31, 0x40B110u);
    ctx->pc = 0x40B10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B108u;
    // 0x40b10c: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323BC8u, 0x40B108u, 0x40B110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B110u;
label_40b110:
    // 0x40b110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b114: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x40B114u;
    SET_GPR_U32(ctx, 31, 0x40B11Cu);
    ctx->pc = 0x40B118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B114u;
    // 0x40b118: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x40B114u, 0x40B11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B11Cu;
label_40b11c:
    // 0x40b11c: 0x1451000c  bne         $v0, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x40B11Cu;
    {
        const bool branch_taken_0x40b11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x40B120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B11Cu;
        // 0x40b120: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b11c) {
            ctx->pc = 0x40B150u;
            goto label_40b150;
        }
    }
    ctx->pc = 0x40B124u;
label_40b124:
    // 0x40b124: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x40b124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40b128: 0xc1029f6  jal         func_40A7D8
    ctx->pc = 0x40B128u;
    SET_GPR_U32(ctx, 31, 0x40B130u);
    ctx->pc = 0x40B12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B128u;
    // 0x40b12c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A7D8u, 0x40B128u, 0x40B130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B130u;
label_40b130:
    // 0x40b130: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x40B130u;
    SET_GPR_U32(ctx, 31, 0x40B138u);
    ctx->pc = 0x40B134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B130u;
    // 0x40b134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x40B130u, 0x40B138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B138u;
label_40b138:
    // 0x40b138: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x40b138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b13c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b140: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x40b140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40b144: 0xc102b56  jal         func_40AD58
    ctx->pc = 0x40B144u;
    SET_GPR_U32(ctx, 31, 0x40B14Cu);
    ctx->pc = 0x40B148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B144u;
    // 0x40b148: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40AD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40AD58u, 0x40B144u, 0x40B14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B14Cu;
label_40b14c:
    // 0x40b14c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40b150:
    // 0x40b150: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x40b150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40b154: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40b154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40b158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40b158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40b15c: 0x3e00008  jr          $ra
    ctx->pc = 0x40B15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B15Cu;
        // 0x40b160: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40B15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40B164u;
    // 0x40b164: 0x0  nop
    ctx->pc = 0x40b164u;
    // NOP
    ctx->pc = 0x40b168u;
}
