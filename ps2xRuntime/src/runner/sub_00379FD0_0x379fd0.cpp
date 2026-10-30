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

// Function: sub_00379FD0
// Address: 0x379fd0 - 0x37a150
void sub_00379FD0_0x379fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379FD0_0x379fd0");
#endif

    switch (ctx->pc) {
        case 0x37a008u: goto label_37a008;
        case 0x37a01cu: goto label_37a01c;
        case 0x37a024u: goto label_37a024;
        case 0x37a038u: goto label_37a038;
        case 0x37a040u: goto label_37a040;
        case 0x37a058u: goto label_37a058;
        case 0x37a060u: goto label_37a060;
        case 0x37a070u: goto label_37a070;
        case 0x37a088u: goto label_37a088;
        case 0x37a090u: goto label_37a090;
        case 0x37a0b8u: goto label_37a0b8;
        case 0x37a0c4u: goto label_37a0c4;
        case 0x37a0dcu: goto label_37a0dc;
        case 0x37a0e8u: goto label_37a0e8;
        case 0x37a0f0u: goto label_37a0f0;
        case 0x37a100u: goto label_37a100;
        case 0x37a114u: goto label_37a114;
        default: break;
    }

    ctx->pc = 0x379fd0u;

    // 0x379fd0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x379fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x379fd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x379fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379fd8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x379fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x379fdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x379fdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379fe0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x379fe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379fe4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x379fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x379fe8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x379fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x379fec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x379fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x379ff0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x379ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x379ff4: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x379ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x379ff8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x379ff8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x379ffc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x379ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37a000: 0xc102488  jal         func_409220
    ctx->pc = 0x37A000u;
    SET_GPR_U32(ctx, 31, 0x37A008u);
    ctx->pc = 0x37A004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A000u;
    // 0x37a004: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x37A000u, 0x37A008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A008u;
label_37a008:
    // 0x37a008: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37a008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a00c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37a00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37a010: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37a010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a014: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37A014u;
    SET_GPR_U32(ctx, 31, 0x37A01Cu);
    ctx->pc = 0x37A018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A014u;
    // 0x37a018: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37A014u, 0x37A01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A01Cu;
label_37a01c:
    // 0x37a01c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37A01Cu;
    SET_GPR_U32(ctx, 31, 0x37A024u);
    ctx->pc = 0x37A020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A01Cu;
    // 0x37a020: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37A01Cu, 0x37A024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A024u;
label_37a024:
    // 0x37a024: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x37a024u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x37a028: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37a028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a02c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37a02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37a030: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37A030u;
    SET_GPR_U32(ctx, 31, 0x37A038u);
    ctx->pc = 0x37A034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A030u;
    // 0x37a034: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37A030u, 0x37A038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A038u;
label_37a038:
    // 0x37a038: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37A038u;
    SET_GPR_U32(ctx, 31, 0x37A040u);
    ctx->pc = 0x37A03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A038u;
    // 0x37a03c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37A038u, 0x37A040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A040u;
label_37a040:
    // 0x37a040: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37a040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37a044: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37a044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a048: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37a048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a04c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x37a04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37a050: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37A050u;
    SET_GPR_U32(ctx, 31, 0x37A058u);
    ctx->pc = 0x37A054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A050u;
    // 0x37a054: 0x2a403  sra         $s4, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37A050u, 0x37A058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A058u;
label_37a058:
    // 0x37a058: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37A058u;
    SET_GPR_U32(ctx, 31, 0x37A060u);
    ctx->pc = 0x37A05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A058u;
    // 0x37a05c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37A058u, 0x37A060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A060u;
label_37a060:
    // 0x37a060: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37a060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37a064: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37a064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a068: 0x29c03  sra         $s3, $v0, 16
    ctx->pc = 0x37a068u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 16));
    // 0x37a06c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x37a06cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_37a070:
    // 0x37a070: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37a070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37a074: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37a074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a078: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37a078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a07c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37a07cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a080: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x37A080u;
    SET_GPR_U32(ctx, 31, 0x37A088u);
    ctx->pc = 0x37A084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A080u;
    // 0x37a084: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x37A080u, 0x37A088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A088u;
label_37a088:
    // 0x37a088: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37A088u;
    SET_GPR_U32(ctx, 31, 0x37A090u);
    ctx->pc = 0x37A08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A088u;
    // 0x37a08c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37A088u, 0x37A090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A090u;
label_37a090:
    // 0x37a090: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x37a090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x37a094: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37a094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37a098: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37A098u;
    {
        const bool branch_taken_0x37a098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37A09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A098u;
        // 0x37a09c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a098) {
            ctx->pc = 0x37A070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37a070;
        }
    }
    ctx->pc = 0x37A0A0u;
    // 0x37a0a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x37a0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a0a4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x37a0a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x37a0a8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x37a0a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a0ac: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x37a0acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a0b0: 0xc105706  jal         func_415C18
    ctx->pc = 0x37A0B0u;
    SET_GPR_U32(ctx, 31, 0x37A0B8u);
    ctx->pc = 0x37A0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A0B0u;
    // 0x37a0b4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C18u, 0x37A0B0u, 0x37A0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A0B8u;
label_37a0b8:
    // 0x37a0b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37a0b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a0bc: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x37A0BCu;
    SET_GPR_U32(ctx, 31, 0x37A0C4u);
    ctx->pc = 0x37A0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A0BCu;
    // 0x37a0c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x37A0BCu, 0x37A0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A0C4u;
label_37a0c4:
    // 0x37a0c4: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37A0C4u;
    {
        const bool branch_taken_0x37a0c4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x37A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A0C4u;
        // 0x37a0c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a0c4) {
            ctx->pc = 0x37A0E0u;
            goto label_37a0e0;
        }
    }
    ctx->pc = 0x37A0CCu;
    // 0x37a0cc: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x37a0ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x37a0d0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x37a0d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x37a0d4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x37A0D4u;
    SET_GPR_U32(ctx, 31, 0x37A0DCu);
    ctx->pc = 0x37A0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A0D4u;
    // 0x37a0d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x37A0D4u, 0x37A0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A0DCu;
label_37a0dc:
    // 0x37a0dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37a0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37a0e0:
    // 0x37a0e0: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x37A0E0u;
    SET_GPR_U32(ctx, 31, 0x37A0E8u);
    ctx->pc = 0x37A0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A0E0u;
    // 0x37a0e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x37A0E0u, 0x37A0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A0E8u;
label_37a0e8:
    // 0x37a0e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37a0e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a0ec: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x37a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_37a0f0:
    // 0x37a0f0: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x37a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x37a0f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37a0f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37a0f8: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x37A0F8u;
    SET_GPR_U32(ctx, 31, 0x37A100u);
    ctx->pc = 0x37A0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A0F8u;
    // 0x37a0fc: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x37A0F8u, 0x37A100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A100u;
label_37a100:
    // 0x37a100: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x37a100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a104: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37a104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a108: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37a108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a10c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x37A10Cu;
    SET_GPR_U32(ctx, 31, 0x37A114u);
    ctx->pc = 0x37A110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A10Cu;
    // 0x37a110: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x37A10Cu, 0x37A114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A114u;
label_37a114:
    // 0x37a114: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37a114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37a118: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37A118u;
    {
        const bool branch_taken_0x37a118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A118u;
        // 0x37a11c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a118) {
            ctx->pc = 0x37A0F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37a0f0;
        }
    }
    ctx->pc = 0x37A120u;
    // 0x37a120: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x37a120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37a124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37a124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a128: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x37a128u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37a12c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x37a12cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37a130: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x37a130u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37a134: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x37a134u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37a138: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x37a138u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37a13c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37a13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37a140: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x37a140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37a144: 0x3e00008  jr          $ra
    ctx->pc = 0x37A144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A144u;
        // 0x37a148: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A14Cu;
    // 0x37a14c: 0x0  nop
    ctx->pc = 0x37a14cu;
    // NOP
    ctx->pc = 0x37a150u;
}
