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

// Function: sub_0048F0F8
// Address: 0x48f0f8 - 0x48f2f0
void sub_0048F0F8_0x48f0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048F0F8_0x48f0f8");
#endif

    switch (ctx->pc) {
        case 0x48f13cu: goto label_48f13c;
        case 0x48f150u: goto label_48f150;
        case 0x48f1f4u: goto label_48f1f4;
        case 0x48f254u: goto label_48f254;
        default: break;
    }

    ctx->pc = 0x48f0f8u;

    // 0x48f0f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48f0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48f0fc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x48f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x48f100: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x48f100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x48f104: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x48f104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x48f108: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48f108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48f10c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x48F10Cu;
    {
        const bool branch_taken_0x48f10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F10Cu;
        // 0x48f110: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f10c) {
            ctx->pc = 0x48F13Cu;
            goto label_48f13c;
        }
    }
    ctx->pc = 0x48F114u;
    // 0x48f114: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x48f114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x48f118: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48f118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x48f11c: 0x2442f260  addiu       $v0, $v0, -0xDA0
    ctx->pc = 0x48f11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963808));
    // 0x48f120: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48f120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48f124: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x48f124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48f128: 0x800008  jr          $a0
    ctx->pc = 0x48F128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x48F130u: goto label_48f130;
            case 0x48F1E8u: goto label_48f1e8;
            case 0x48F248u: goto label_48f248;
            case 0x48F2B0u: goto label_48f2b0;
            case 0x48F2C0u: goto label_48f2c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48F128u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x48F130u;
label_48f130:
    // 0x48f130: 0x8f828a48  lw          $v0, -0x75B8($gp)
    ctx->pc = 0x48f130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937160)));
    // 0x48f134: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48F134u;
    {
        const bool branch_taken_0x48f134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48f134) {
            ctx->pc = 0x48F144u;
            goto label_48f144;
        }
    }
    ctx->pc = 0x48F13Cu;
label_48f13c:
    // 0x48f13c: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x48F13Cu;
    {
        const bool branch_taken_0x48f13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F13Cu;
        // 0x48f140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f13c) {
            ctx->pc = 0x48F2DCu;
            goto label_48f2dc;
        }
    }
    ctx->pc = 0x48F144u;
label_48f144:
    // 0x48f144: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x48f144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x48f148: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x48F148u;
    SET_GPR_U32(ctx, 31, 0x48F150u);
    ctx->pc = 0x48F14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F148u;
    // 0x48f14c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x48F148u, 0x48F150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F150u;
label_48f150:
    // 0x48f150: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x48F150u;
    {
        const bool branch_taken_0x48f150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F150u;
        // 0x48f154: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f150) {
            ctx->pc = 0x48F13Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48f13c;
        }
    }
    ctx->pc = 0x48F158u;
    // 0x48f158: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x48f158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x48f15c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x48f15cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x48f160: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x48f160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
    // 0x48f164: 0x70443389  pcpyld      $a2, $v0, $a0
    ctx->pc = 0x48f164u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x48f168: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x48f168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48f16c: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x48f16cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x48f170: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x48f170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48f174: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48F174u;
    {
        const bool branch_taken_0x48f174 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x48F178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F174u;
        // 0x48f178: 0xaf82898c  sw          $v0, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f174) {
            ctx->pc = 0x48F188u;
            goto label_48f188;
        }
    }
    ctx->pc = 0x48F17Cu;
    // 0x48f17c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x48f17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f180: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x48F180u;
    {
        const bool branch_taken_0x48f180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F180u;
        // 0x48f184: 0xaf808a4c  sw          $zero, -0x75B4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f180) {
            ctx->pc = 0x48F1D4u;
            goto label_48f1d4;
        }
    }
    ctx->pc = 0x48F188u;
label_48f188:
    // 0x48f188: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x48f188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x48f18c: 0x34425555  ori         $v0, $v0, 0x5555
    ctx->pc = 0x48f18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21845);
    // 0x48f190: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x48F190u;
    {
        const bool branch_taken_0x48f190 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x48F194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F190u;
        // 0x48f194: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f190) {
            ctx->pc = 0x48F1B8u;
            goto label_48f1b8;
        }
    }
    ctx->pc = 0x48F198u;
    // 0x48f198: 0x3c041212  lui         $a0, 0x1212
    ctx->pc = 0x48f198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4626 << 16));
    // 0x48f19c: 0x34843030  ori         $a0, $a0, 0x3030
    ctx->pc = 0x48f19cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12336);
    // 0x48f1a0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x48f1a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x48f1a4: 0x34841212  ori         $a0, $a0, 0x1212
    ctx->pc = 0x48f1a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4626);
    // 0x48f1a8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x48f1a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x48f1ac: 0x34843030  ori         $a0, $a0, 0x3030
    ctx->pc = 0x48f1acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12336);
    // 0x48f1b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x48F1B0u;
    {
        const bool branch_taken_0x48f1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F1B0u;
        // 0x48f1b4: 0xaf908a4c  sw          $s0, -0x75B4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937164), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f1b0) {
            ctx->pc = 0x48F1D4u;
            goto label_48f1d4;
        }
    }
    ctx->pc = 0x48F1B8u;
label_48f1b8:
    // 0x48f1b8: 0x3c046071  lui         $a0, 0x6071
    ctx->pc = 0x48f1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24689 << 16));
    // 0x48f1bc: 0x34842435  ori         $a0, $a0, 0x2435
    ctx->pc = 0x48f1bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9269);
    // 0x48f1c0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x48f1c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x48f1c4: 0x34847160  ori         $a0, $a0, 0x7160
    ctx->pc = 0x48f1c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)29024);
    // 0x48f1c8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x48f1c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x48f1cc: 0x34843524  ori         $a0, $a0, 0x3524
    ctx->pc = 0x48f1ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13604);
    // 0x48f1d0: 0xaf828a4c  sw          $v0, -0x75B4($gp)
    ctx->pc = 0x48f1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937164), GPR_U32(ctx, 2));
label_48f1d4:
    // 0x48f1d4: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x48f1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x48f1d8: 0x70643389  pcpyld      $a2, $v1, $a0
    ctx->pc = 0x48f1d8u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x48f1dc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x48F1DCu;
    {
        const bool branch_taken_0x48f1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F1DCu;
        // 0x48f1e0: 0x8f82898c  lw          $v0, -0x7674($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f1dc) {
            ctx->pc = 0x48F2A0u;
            goto label_48f2a0;
        }
    }
    ctx->pc = 0x48F1E4u;
    // 0x48f1e4: 0x0  nop
    ctx->pc = 0x48f1e4u;
    // NOP
label_48f1e8:
    // 0x48f1e8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x48f1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x48f1ec: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x48F1ECu;
    SET_GPR_U32(ctx, 31, 0x48F1F4u);
    ctx->pc = 0x48F1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F1ECu;
    // 0x48f1f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x48F1ECu, 0x48F1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F1F4u;
label_48f1f4:
    // 0x48f1f4: 0x1040ffd1  beqz        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x48F1F4u;
    {
        const bool branch_taken_0x48f1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F1F4u;
        // 0x48f1f8: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f1f4) {
            ctx->pc = 0x48F13Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48f13c;
        }
    }
    ctx->pc = 0x48F1FCu;
    // 0x48f1fc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x48f1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x48f200: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x48f200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x48f204: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x48f204u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
    // 0x48f208: 0x70443389  pcpyld      $a2, $v0, $a0
    ctx->pc = 0x48f208u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x48f20c: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x48f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48f210: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x48f210u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x48f214: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x48f214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48f218: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48f218u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48f21c: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x48f21cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x48f220: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x48f220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x48f224: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x48f224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x48f228: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x48f228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x48f22c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x48f22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x48f230: 0x31e3a  dsrl        $v1, $v1, 24
    ctx->pc = 0x48f230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 24);
    // 0x48f234: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x48f234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x48f238: 0x70a43389  pcpyld      $a2, $a1, $a0
    ctx->pc = 0x48f238u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x48f23c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x48F23Cu;
    {
        const bool branch_taken_0x48f23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F23Cu;
        // 0x48f240: 0xff848720  sd          $a0, -0x78E0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294936352), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f23c) {
            ctx->pc = 0x48F2A0u;
            goto label_48f2a0;
        }
    }
    ctx->pc = 0x48F244u;
    // 0x48f244: 0x0  nop
    ctx->pc = 0x48f244u;
    // NOP
label_48f248:
    // 0x48f248: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x48f248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x48f24c: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x48F24Cu;
    SET_GPR_U32(ctx, 31, 0x48F254u);
    ctx->pc = 0x48F250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F24Cu;
    // 0x48f250: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x48F24Cu, 0x48F254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F254u;
label_48f254:
    // 0x48f254: 0x1040ffb9  beqz        $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x48F254u;
    {
        const bool branch_taken_0x48f254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F254u;
        // 0x48f258: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f254) {
            ctx->pc = 0x48F13Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48f13c;
        }
    }
    ctx->pc = 0x48F25Cu;
    // 0x48f25c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x48f25cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x48f260: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x48f260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x48f264: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x48f264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
    // 0x48f268: 0x70443389  pcpyld      $a2, $v0, $a0
    ctx->pc = 0x48f268u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x48f26c: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x48f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48f270: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x48f270u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x48f274: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x48f274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48f278: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48f278u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48f27c: 0xdf8386f8  ld          $v1, -0x7908($gp)
    ctx->pc = 0x48f27cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
    // 0x48f280: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x48f280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x48f284: 0x24060047  addiu       $a2, $zero, 0x47
    ctx->pc = 0x48f284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x48f288: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x48f288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x48f28c: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x48f28cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x48f290: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x48f290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x48f294: 0x70c33389  pcpyld      $a2, $a2, $v1
    ctx->pc = 0x48f294u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 3)));
    // 0x48f298: 0xff8386f8  sd          $v1, -0x7908($gp)
    ctx->pc = 0x48f298u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936312), GPR_U64(ctx, 3));
    // 0x48f29c: 0x0  nop
    ctx->pc = 0x48f29cu;
    // NOP
label_48f2a0:
    // 0x48f2a0: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x48f2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x48f2a4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x48f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48f2a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x48F2A8u;
    {
        const bool branch_taken_0x48f2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F2A8u;
        // 0x48f2ac: 0xaf82898c  sw          $v0, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f2a8) {
            ctx->pc = 0x48F2D8u;
            goto label_48f2d8;
        }
    }
    ctx->pc = 0x48F2B0u;
label_48f2b0:
    // 0x48f2b0: 0xaf808a78  sw          $zero, -0x7588($gp)
    ctx->pc = 0x48f2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937208), GPR_U32(ctx, 0));
    // 0x48f2b4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x48f2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48f2b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x48F2B8u;
    {
        const bool branch_taken_0x48f2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F2B8u;
        // 0x48f2bc: 0xe7808a7c  swc1        $f0, -0x7584($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f2b8) {
            ctx->pc = 0x48F2D8u;
            goto label_48f2d8;
        }
    }
    ctx->pc = 0x48F2C0u;
label_48f2c0:
    // 0x48f2c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x48f2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48f2c4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x48f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x48f2c8: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x48f2c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x48f2cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48F2CCu;
    {
        const bool branch_taken_0x48f2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F2CCu;
        // 0x48f2d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f2cc) {
            ctx->pc = 0x48F2DCu;
            goto label_48f2dc;
        }
    }
    ctx->pc = 0x48F2D4u;
    // 0x48f2d4: 0xaf838740  sw          $v1, -0x78C0($gp)
    ctx->pc = 0x48f2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936384), GPR_U32(ctx, 3));
label_48f2d8:
    // 0x48f2d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48f2dc:
    // 0x48f2dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x48f2dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48f2e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48f2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48f2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x48F2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F2E4u;
        // 0x48f2e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48F2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48F2ECu;
    // 0x48f2ec: 0x0  nop
    ctx->pc = 0x48f2ecu;
    // NOP
    ctx->pc = 0x48f2f0u;
}
