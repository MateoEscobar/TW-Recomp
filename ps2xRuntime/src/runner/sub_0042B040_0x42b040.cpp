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

// Function: sub_0042B040
// Address: 0x42b040 - 0x42b138
void sub_0042B040_0x42b040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042B040_0x42b040");
#endif

    switch (ctx->pc) {
        case 0x42b058u: goto label_42b058;
        case 0x42b068u: goto label_42b068;
        case 0x42b080u: goto label_42b080;
        case 0x42b088u: goto label_42b088;
        case 0x42b09cu: goto label_42b09c;
        case 0x42b0b0u: goto label_42b0b0;
        case 0x42b0bcu: goto label_42b0bc;
        case 0x42b0c8u: goto label_42b0c8;
        case 0x42b0dcu: goto label_42b0dc;
        case 0x42b0ecu: goto label_42b0ec;
        case 0x42b0f4u: goto label_42b0f4;
        case 0x42b10cu: goto label_42b10c;
        default: break;
    }

    ctx->pc = 0x42b040u;

    // 0x42b040: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x42b040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x42b044: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x42b044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x42b048: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x42b048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x42b04c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x42b04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x42b050: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x42B050u;
    SET_GPR_U32(ctx, 31, 0x42B058u);
    ctx->pc = 0x42B054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B050u;
    // 0x42b054: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x42B050u, 0x42B058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B058u;
label_42b058:
    // 0x42b058: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x42b058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42b05c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42b05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42b060: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x42B060u;
    SET_GPR_U32(ctx, 31, 0x42B068u);
    ctx->pc = 0x42B064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B060u;
    // 0x42b064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x42B060u, 0x42B068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B068u;
label_42b068:
    // 0x42b068: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x42B068u;
    {
        const bool branch_taken_0x42b068 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x42B06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B068u;
        // 0x42b06c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b068) {
            ctx->pc = 0x42B11Cu;
            goto label_42b11c;
        }
    }
    ctx->pc = 0x42B070u;
    // 0x42b070: 0x3405f7c0  ori         $a1, $zero, 0xF7C0
    ctx->pc = 0x42b070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63424);
    // 0x42b074: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x42b074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x42b078: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x42B078u;
    SET_GPR_U32(ctx, 31, 0x42B080u);
    ctx->pc = 0x42B07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B078u;
    // 0x42b07c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x42B078u, 0x42B080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B080u;
label_42b080:
    // 0x42b080: 0xc10b108  jal         func_42C420
    ctx->pc = 0x42B080u;
    SET_GPR_U32(ctx, 31, 0x42B088u);
    ctx->pc = 0x42B084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B080u;
    // 0x42b084: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x42B080u, 0x42B088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B088u;
label_42b088:
    // 0x42b088: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x42b088u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x42b08c: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42B08Cu;
    {
        const bool branch_taken_0x42b08c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x42B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B08Cu;
        // 0x42b090: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b08c) {
            ctx->pc = 0x42B0A4u;
            goto label_42b0a4;
        }
    }
    ctx->pc = 0x42B094u;
    // 0x42b094: 0xc10ac4e  jal         func_42B138
    ctx->pc = 0x42B094u;
    SET_GPR_U32(ctx, 31, 0x42B09Cu);
    ctx->pc = 0x42B098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B094u;
    // 0x42b098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B138u, 0x42B094u, 0x42B09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B09Cu;
label_42b09c:
    // 0x42b09c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x42B09Cu;
    {
        const bool branch_taken_0x42b09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B09Cu;
        // 0x42b0a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b09c) {
            ctx->pc = 0x42B0C0u;
            goto label_42b0c0;
        }
    }
    ctx->pc = 0x42B0A4u;
label_42b0a4:
    // 0x42b0a4: 0x10207a  dsrl        $a0, $s0, 1
    ctx->pc = 0x42b0a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> 1);
    // 0x42b0a8: 0xc10ac4e  jal         func_42B138
    ctx->pc = 0x42B0A8u;
    SET_GPR_U32(ctx, 31, 0x42B0B0u);
    ctx->pc = 0x42B0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B0A8u;
    // 0x42b0ac: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B138u, 0x42B0A8u, 0x42B0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B0B0u;
label_42b0b0:
    // 0x42b0b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42b0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42b0b4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x42B0B4u;
    SET_GPR_U32(ctx, 31, 0x42B0BCu);
    ctx->pc = 0x42B0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B0B4u;
    // 0x42b0b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x42B0B4u, 0x42B0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B0BCu;
label_42b0bc:
    // 0x42b0bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x42b0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42b0c0:
    // 0x42b0c0: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x42B0C0u;
    SET_GPR_U32(ctx, 31, 0x42B0C8u);
    ctx->pc = 0x42B0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B0C0u;
    // 0x42b0c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x42B0C0u, 0x42B0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B0C8u;
label_42b0c8:
    // 0x42b0c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x42b0c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42b0cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x42b0ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42b0d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x42b0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42b0d4: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x42B0D4u;
    SET_GPR_U32(ctx, 31, 0x42B0DCu);
    ctx->pc = 0x42B0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B0D4u;
    // 0x42b0d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x42B0D4u, 0x42B0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B0DCu;
label_42b0dc:
    // 0x42b0dc: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x42B0DCu;
    {
        const bool branch_taken_0x42b0dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x42B0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B0DCu;
        // 0x42b0e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b0dc) {
            ctx->pc = 0x42B104u;
            goto label_42b104;
        }
    }
    ctx->pc = 0x42B0E4u;
    // 0x42b0e4: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x42B0E4u;
    SET_GPR_U32(ctx, 31, 0x42B0ECu);
    ctx->pc = 0x42B0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B0E4u;
    // 0x42b0e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x42B0E4u, 0x42B0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B0ECu;
label_42b0ec:
    // 0x42b0ec: 0xc10b108  jal         func_42C420
    ctx->pc = 0x42B0ECu;
    SET_GPR_U32(ctx, 31, 0x42B0F4u);
    ctx->pc = 0x42B0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B0ECu;
    // 0x42b0f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x42B0ECu, 0x42B0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B0F4u;
label_42b0f4:
    // 0x42b0f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x42b0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x42b0f8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x42b0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x42b0fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x42B0FCu;
    {
        const bool branch_taken_0x42b0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B0FCu;
        // 0x42b100: 0x202802f  dsubu       $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b0fc) {
            ctx->pc = 0x42B118u;
            goto label_42b118;
        }
    }
    ctx->pc = 0x42B104u;
label_42b104:
    // 0x42b104: 0xc10b108  jal         func_42C420
    ctx->pc = 0x42B104u;
    SET_GPR_U32(ctx, 31, 0x42B10Cu);
    ctx->pc = 0x42B108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B104u;
    // 0x42b108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x42B104u, 0x42B10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B10Cu;
label_42b10c:
    // 0x42b10c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x42b10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x42b110: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x42b110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x42b114: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x42b114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_42b118:
    // 0x42b118: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42b118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42b11c:
    // 0x42b11c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x42b11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x42b120: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x42b120u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42b124: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x42b124u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42b128: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42b128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42b12c: 0x3e00008  jr          $ra
    ctx->pc = 0x42B12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B12Cu;
        // 0x42b130: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42B12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42B134u;
    // 0x42b134: 0x0  nop
    ctx->pc = 0x42b134u;
    // NOP
    ctx->pc = 0x42b138u;
}
