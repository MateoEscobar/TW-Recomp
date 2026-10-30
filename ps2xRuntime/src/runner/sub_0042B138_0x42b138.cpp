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

// Function: sub_0042B138
// Address: 0x42b138 - 0x42b1d0
void sub_0042B138_0x42b138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042B138_0x42b138");
#endif

    switch (ctx->pc) {
        case 0x42b160u: goto label_42b160;
        case 0x42b16cu: goto label_42b16c;
        case 0x42b178u: goto label_42b178;
        case 0x42b198u: goto label_42b198;
        case 0x42b1b0u: goto label_42b1b0;
        case 0x42b1bcu: goto label_42b1bc;
        default: break;
    }

    ctx->pc = 0x42b138u;

    // 0x42b138: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42b138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x42b13c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x42b13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x42b140: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x42b140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42b144: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x42b144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x42b148: 0x341181e0  ori         $s1, $zero, 0x81E0
    ctx->pc = 0x42b148u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x42b14c: 0x118bfc  dsll32      $s1, $s1, 15
    ctx->pc = 0x42b14cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 15));
    // 0x42b150: 0x10203f  dsra32      $a0, $s0, 0
    ctx->pc = 0x42b150u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x42b154: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x42b154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x42b158: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x42B158u;
    SET_GPR_U32(ctx, 31, 0x42B160u);
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x42B158u, 0x42B160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B160u;
label_42b160:
    // 0x42b160: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x42b160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42b164: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x42B164u;
    SET_GPR_U32(ctx, 31, 0x42B16Cu);
    ctx->pc = 0x42B168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B164u;
    // 0x42b168: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x42B164u, 0x42B16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B16Cu;
label_42b16c:
    // 0x42b16c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x42b16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42b170: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x42B170u;
    SET_GPR_U32(ctx, 31, 0x42B178u);
    ctx->pc = 0x42B174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B170u;
    // 0x42b174: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x42B170u, 0x42B178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B178u;
label_42b178:
    // 0x42b178: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x42b178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42b17c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x42b17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x42b180: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x42b180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x42b184: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x42b184u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x42b188: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x42b188u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x42b18c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x42b18cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x42b190: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x42B190u;
    SET_GPR_U32(ctx, 31, 0x42B198u);
    ctx->pc = 0x42B194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B190u;
    // 0x42b194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x42B190u, 0x42B198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B198u;
label_42b198:
    // 0x42b198: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x42B198u;
    {
        const bool branch_taken_0x42b198 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x42B19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B198u;
        // 0x42b19c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b198) {
            ctx->pc = 0x42B1B4u;
            goto label_42b1b4;
        }
    }
    ctx->pc = 0x42B1A0u;
    // 0x42b1a0: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x42b1a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x42b1a4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x42b1a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x42b1a8: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x42B1A8u;
    SET_GPR_U32(ctx, 31, 0x42B1B0u);
    ctx->pc = 0x42B1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B1A8u;
    // 0x42b1ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x42B1A8u, 0x42B1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B1B0u;
label_42b1b0:
    // 0x42b1b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x42b1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42b1b4:
    // 0x42b1b4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x42B1B4u;
    SET_GPR_U32(ctx, 31, 0x42B1BCu);
    ctx->pc = 0x42B1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B1B4u;
    // 0x42b1b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x42B1B4u, 0x42B1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B1BCu;
label_42b1bc:
    // 0x42b1bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42b1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42b1c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x42b1c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42b1c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42b1c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42b1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x42B1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42B1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B1C8u;
        // 0x42b1cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42B1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42B1D0u;
}
