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

// Function: sub_0035B110
// Address: 0x35b110 - 0x35b188
void sub_0035B110_0x35b110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B110_0x35b110");
#endif

    switch (ctx->pc) {
        case 0x35b130u: goto label_35b130;
        case 0x35b138u: goto label_35b138;
        case 0x35b140u: goto label_35b140;
        case 0x35b14cu: goto label_35b14c;
        case 0x35b164u: goto label_35b164;
        case 0x35b170u: goto label_35b170;
        default: break;
    }

    ctx->pc = 0x35b110u;

    // 0x35b110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35b110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35b114: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35b114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35b118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35b11c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35b11cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b120: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35b120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35b124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b128: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35B128u;
    SET_GPR_U32(ctx, 31, 0x35B130u);
    ctx->pc = 0x35B12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B128u;
    // 0x35b12c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35B128u, 0x35B130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B130u;
label_35b130:
    // 0x35b130: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35B130u;
    SET_GPR_U32(ctx, 31, 0x35B138u);
    ctx->pc = 0x35B134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B130u;
    // 0x35b134: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35B130u, 0x35B138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B138u;
label_35b138:
    // 0x35b138: 0xc08d3da  jal         func_234F68
    ctx->pc = 0x35B138u;
    SET_GPR_U32(ctx, 31, 0x35B140u);
    ctx->pc = 0x35B13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B138u;
    // 0x35b13c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234F68u, 0x35B138u, 0x35B140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B140u;
label_35b140:
    // 0x35b140: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35b140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b144: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x35B144u;
    SET_GPR_U32(ctx, 31, 0x35B14Cu);
    ctx->pc = 0x35B148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B144u;
    // 0x35b148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x35B144u, 0x35B14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B14Cu;
label_35b14c:
    // 0x35b14c: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35B14Cu;
    {
        const bool branch_taken_0x35b14c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x35B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B14Cu;
        // 0x35b150: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b14c) {
            ctx->pc = 0x35B168u;
            goto label_35b168;
        }
    }
    ctx->pc = 0x35B154u;
    // 0x35b154: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x35b154u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x35b158: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x35b158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x35b15c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x35B15Cu;
    SET_GPR_U32(ctx, 31, 0x35B164u);
    ctx->pc = 0x35B160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B15Cu;
    // 0x35b160: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x35B15Cu, 0x35B164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B164u;
label_35b164:
    // 0x35b164: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35b164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35b168:
    // 0x35b168: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x35B168u;
    SET_GPR_U32(ctx, 31, 0x35B170u);
    ctx->pc = 0x35B16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B168u;
    // 0x35b16c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x35B168u, 0x35B170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B170u;
label_35b170:
    // 0x35b170: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35b170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35b174: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35b174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b178: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35b178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b17c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b180: 0x3e00008  jr          $ra
    ctx->pc = 0x35B180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B180u;
        // 0x35b184: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B188u;
}
