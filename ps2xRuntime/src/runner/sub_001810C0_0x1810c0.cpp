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

// Function: sub_001810C0
// Address: 0x1810c0 - 0x181170
void sub_001810C0_0x1810c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001810C0_0x1810c0");
#endif

    switch (ctx->pc) {
        case 0x1810c0u: goto label_1810c0;
        case 0x1810c4u: goto label_1810c4;
        case 0x1810c8u: goto label_1810c8;
        case 0x1810ccu: goto label_1810cc;
        case 0x1810d0u: goto label_1810d0;
        case 0x1810d4u: goto label_1810d4;
        case 0x1810d8u: goto label_1810d8;
        case 0x1810dcu: goto label_1810dc;
        case 0x1810e0u: goto label_1810e0;
        case 0x1810e4u: goto label_1810e4;
        case 0x1810e8u: goto label_1810e8;
        case 0x1810ecu: goto label_1810ec;
        case 0x1810f0u: goto label_1810f0;
        case 0x1810f4u: goto label_1810f4;
        case 0x1810f8u: goto label_1810f8;
        case 0x1810fcu: goto label_1810fc;
        case 0x181100u: goto label_181100;
        case 0x181104u: goto label_181104;
        case 0x181108u: goto label_181108;
        case 0x18110cu: goto label_18110c;
        case 0x181110u: goto label_181110;
        case 0x181114u: goto label_181114;
        case 0x181118u: goto label_181118;
        case 0x18111cu: goto label_18111c;
        case 0x181120u: goto label_181120;
        case 0x181124u: goto label_181124;
        case 0x181128u: goto label_181128;
        case 0x18112cu: goto label_18112c;
        case 0x181130u: goto label_181130;
        case 0x181134u: goto label_181134;
        case 0x181138u: goto label_181138;
        case 0x18113cu: goto label_18113c;
        case 0x181140u: goto label_181140;
        case 0x181144u: goto label_181144;
        case 0x181148u: goto label_181148;
        case 0x18114cu: goto label_18114c;
        case 0x181150u: goto label_181150;
        case 0x181154u: goto label_181154;
        case 0x181158u: goto label_181158;
        case 0x18115cu: goto label_18115c;
        case 0x181160u: goto label_181160;
        case 0x181164u: goto label_181164;
        case 0x181168u: goto label_181168;
        case 0x18116cu: goto label_18116c;
        default: break;
    }

    ctx->pc = 0x1810c0u;

label_1810c0:
    // 0x1810c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1810c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1810c4:
    // 0x1810c4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1810c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1810c8:
    // 0x1810c8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1810c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1810cc:
    // 0x1810cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1810ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1810d0:
    // 0x1810d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1810d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1810d4:
    // 0x1810d4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1810d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1810d8:
    // 0x1810d8: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x1810d8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_1810dc:
    // 0x1810dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1810dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1810e0:
    // 0x1810e0: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1810e0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1810e4:
    // 0x1810e4: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x1810e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_1810e8:
    // 0x1810e8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1810e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1810ec:
    // 0x1810ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1810ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1810f0:
    // 0x1810f0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1810f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1810f4:
    // 0x1810f4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1810f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1810f8:
    // 0x1810f8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1810f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1810fc:
    // 0x1810fc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1810fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_181100:
    // 0x181100: 0x40f809  jalr        $v0
label_181104:
    if (ctx->pc == 0x181104u) {
        ctx->pc = 0x181104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181100u;
        // 0x181104: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181108u;
        goto label_181108;
    }
    ctx->pc = 0x181100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x181108u);
        ctx->pc = 0x181104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181100u;
        // 0x181104: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181100u, 0x181108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x181108u;
label_181108:
    // 0x181108: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x181108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_18110c:
    // 0x18110c: 0x8e4627e4  lw          $a2, 0x27E4($s2)
    ctx->pc = 0x18110cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_181110:
    // 0x181110: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x181110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_181114:
    // 0x181114: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x181114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_181118:
    // 0x181118: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x181118u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_18111c:
    // 0x18111c: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x18111cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_181120:
    // 0x181120: 0x60f809  jalr        $v1
label_181124:
    if (ctx->pc == 0x181124u) {
        ctx->pc = 0x181124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181120u;
        // 0x181124: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181128u;
        goto label_181128;
    }
    ctx->pc = 0x181120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x181128u);
        ctx->pc = 0x181124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181120u;
        // 0x181124: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181120u, 0x181128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x181128u;
label_181128:
    // 0x181128: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x181128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_18112c:
    // 0x18112c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18112cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181130:
    // 0x181130: 0x2406051f  addiu       $a2, $zero, 0x51F
    ctx->pc = 0x181130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1311));
label_181134:
    // 0x181134: 0xc137c8a  jal         func_4DF228
label_181138:
    if (ctx->pc == 0x181138u) {
        ctx->pc = 0x181138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181134u;
        // 0x181138: 0x24a524e8  addiu       $a1, $a1, 0x24E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18113Cu;
        goto label_18113c;
    }
    ctx->pc = 0x181134u;
    SET_GPR_U32(ctx, 31, 0x18113Cu);
    ctx->pc = 0x181138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181134u;
    // 0x181138: 0x24a524e8  addiu       $a1, $a1, 0x24E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF228u, 0x181134u, 0x18113Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18113Cu;
label_18113c:
    // 0x18113c: 0x8e4627e4  lw          $a2, 0x27E4($s2)
    ctx->pc = 0x18113cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_181140:
    // 0x181140: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x181140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_181144:
    // 0x181144: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x181144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_181148:
    // 0x181148: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x181148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_18114c:
    // 0x18114c: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x18114cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_181150:
    // 0x181150: 0x60f809  jalr        $v1
label_181154:
    if (ctx->pc == 0x181154u) {
        ctx->pc = 0x181154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181150u;
        // 0x181154: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181158u;
        goto label_181158;
    }
    ctx->pc = 0x181150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x181158u);
        ctx->pc = 0x181154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181150u;
        // 0x181154: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181150u, 0x181158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x181158u;
label_181158:
    // 0x181158: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x181158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18115c:
    // 0x18115c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18115cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_181160:
    // 0x181160: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x181160u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_181164:
    // 0x181164: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_181168:
    // 0x181168: 0x3e00008  jr          $ra
label_18116c:
    if (ctx->pc == 0x18116Cu) {
        ctx->pc = 0x18116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181168u;
        // 0x18116c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181170u;
        goto label_fallthrough_0x181168;
    }
    ctx->pc = 0x181168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181168u;
        // 0x18116c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x181168:
    ctx->pc = 0x181170u;
}
