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

// Function: sub_002E4038
// Address: 0x2e4038 - 0x2e4188
void sub_002E4038_0x2e4038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4038_0x2e4038");
#endif

    switch (ctx->pc) {
        case 0x2e40acu: goto label_2e40ac;
        case 0x2e40b8u: goto label_2e40b8;
        case 0x2e40ccu: goto label_2e40cc;
        case 0x2e40ecu: goto label_2e40ec;
        case 0x2e4108u: goto label_2e4108;
        case 0x2e4120u: goto label_2e4120;
        case 0x2e4130u: goto label_2e4130;
        case 0x2e4148u: goto label_2e4148;
        default: break;
    }

    ctx->pc = 0x2e4038u;

    // 0x2e4038: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2e4038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2e403c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2e403cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2e4040: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2e4040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2e4044: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2e4044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2e4048: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e4048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e404c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2e404cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2e4050: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2e4050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e4054: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2e4054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2e4058: 0x24564b00  addiu       $s6, $v0, 0x4B00
    ctx->pc = 0x2e4058u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2e405c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2e405cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2e4060: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e4060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e4064: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2e4064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2e4068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e4068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e406c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2e406cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2e4070: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e4070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e4074: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x2e4074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2e4078: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x2e4078u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e407c: 0x8c72020c  lw          $s2, 0x20C($v1)
    ctx->pc = 0x2e407cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x2e4080: 0x26750090  addiu       $s5, $s3, 0x90
    ctx->pc = 0x2e4080u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x2e4084: 0x86a20002  lh          $v0, 0x2($s5)
    ctx->pc = 0x2e4084u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x2e4088: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e4088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2e408c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x2e408cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2e4090: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2e4090u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4094: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x2e4094u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
    // 0x2e4098: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2e4098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e409c: 0x10a4002e  beq         $a1, $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2E409Cu;
    {
        const bool branch_taken_0x2e409c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2E40A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E409Cu;
        // 0x2e40a0: 0xe6200028  swc1        $f0, 0x28($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e409c) {
            ctx->pc = 0x2E4158u;
            goto label_2e4158;
        }
    }
    ctx->pc = 0x2E40A4u;
    // 0x2e40a4: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x2E40A4u;
    SET_GPR_U32(ctx, 31, 0x2E40ACu);
    ctx->pc = 0x2E40A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E40A4u;
    // 0x2e40a8: 0x86240020  lh          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x2E40A4u, 0x2E40ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E40ACu;
label_2e40ac:
    // 0x2e40ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e40acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e40b0: 0xc05959e  jal         func_165678
    ctx->pc = 0x2E40B0u;
    SET_GPR_U32(ctx, 31, 0x2E40B8u);
    ctx->pc = 0x2E40B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E40B0u;
    // 0x2e40b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2E40B0u, 0x2E40B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E40B8u;
label_2e40b8:
    // 0x2e40b8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2e40b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e40bc: 0x52800027  beql        $s4, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x2E40BCu;
    {
        const bool branch_taken_0x2e40bc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e40bc) {
            ctx->pc = 0x2E40C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E40BCu;
            // 0x2e40c0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E415Cu;
            goto label_2e415c;
        }
    }
    ctx->pc = 0x2E40C4u;
    // 0x2e40c4: 0xc05959e  jal         func_165678
    ctx->pc = 0x2E40C4u;
    SET_GPR_U32(ctx, 31, 0x2E40CCu);
    ctx->pc = 0x2E40C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E40C4u;
    // 0x2e40c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2E40C4u, 0x2E40CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E40CCu;
label_2e40cc:
    // 0x2e40cc: 0x12620016  beq         $s3, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E40CCu;
    {
        const bool branch_taken_0x2e40cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E40D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E40CCu;
        // 0x2e40d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e40cc) {
            ctx->pc = 0x2E4128u;
            goto label_2e4128;
        }
    }
    ctx->pc = 0x2E40D4u;
    // 0x2e40d4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e40d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e40d8: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2e40d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x2e40dc: 0x5c40001f  bgtzl       $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2E40DCu;
    {
        const bool branch_taken_0x2e40dc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2e40dc) {
            ctx->pc = 0x2E40E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E40DCu;
            // 0x2e40e0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E415Cu;
            goto label_2e415c;
        }
    }
    ctx->pc = 0x2E40E4u;
    // 0x2e40e4: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2E40E4u;
    SET_GPR_U32(ctx, 31, 0x2E40ECu);
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E40E4u, 0x2E40ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E40ECu;
label_2e40ec:
    // 0x2e40ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e40ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e40f0: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E40F0u;
    {
        const bool branch_taken_0x2e40f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E40F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E40F0u;
        // 0x2e40f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e40f0) {
            ctx->pc = 0x2E4158u;
            goto label_2e4158;
        }
    }
    ctx->pc = 0x2E40F8u;
    // 0x2e40f8: 0x86900092  lh          $s0, 0x92($s4)
    ctx->pc = 0x2e40f8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
    // 0x2e40fc: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2e40fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2e4100: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x2E4100u;
    SET_GPR_U32(ctx, 31, 0x2E4108u);
    ctx->pc = 0x2E4104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4100u;
    // 0x2e4104: 0x2168021  addu        $s0, $s0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2E4100u, 0x2E4108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4108u;
label_2e4108:
    // 0x2e4108: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e4108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e410c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e410cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4110: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e4110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4114: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e4114u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2e4118: 0xc0bf800  jal         func_2FE000
    ctx->pc = 0x2E4118u;
    SET_GPR_U32(ctx, 31, 0x2E4120u);
    ctx->pc = 0x2E411Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4118u;
    // 0x2e411c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2E4118u, 0x2E4120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4120u;
label_2e4120:
    // 0x2e4120: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E4120u;
    {
        const bool branch_taken_0x2e4120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4120u;
        // 0x2e4124: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4120) {
            ctx->pc = 0x2E415Cu;
            goto label_2e415c;
        }
    }
    ctx->pc = 0x2E4128u;
label_2e4128:
    // 0x2e4128: 0xc0cdb62  jal         func_336D88
    ctx->pc = 0x2E4128u;
    SET_GPR_U32(ctx, 31, 0x2E4130u);
    ctx->pc = 0x2E412Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4128u;
    // 0x2e412c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x2E4128u, 0x2E4130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4130u;
label_2e4130:
    // 0x2e4130: 0x86a50002  lh          $a1, 0x2($s5)
    ctx->pc = 0x2e4130u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x2e4134: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e4134u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2e4138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e4138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e413c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2e413cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2e4140: 0xc0cdb62  jal         func_336D88
    ctx->pc = 0x2E4140u;
    SET_GPR_U32(ctx, 31, 0x2E4148u);
    ctx->pc = 0x2E4144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4140u;
    // 0x2e4144: 0xb62821  addu        $a1, $a1, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x2E4140u, 0x2E4148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4148u;
label_2e4148:
    // 0x2e4148: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x2e4148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e414c: 0x4601a501  sub.s       $f20, $f20, $f1
    ctx->pc = 0x2e414cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x2e4150: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2e4150u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2e4154: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x2e4154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_2e4158:
    // 0x2e4158: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2e4158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2e415c:
    // 0x2e415c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2e415cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e4160: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2e4160u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e4164: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e4164u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e4168: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2e4168u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e416c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2e416cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4170: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2e4170u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e4174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4178: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2e4178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e417c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E417Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E417Cu;
        // 0x2e4180: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E417Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4184u;
    // 0x2e4184: 0x0  nop
    ctx->pc = 0x2e4184u;
    // NOP
    ctx->pc = 0x2e4188u;
}
