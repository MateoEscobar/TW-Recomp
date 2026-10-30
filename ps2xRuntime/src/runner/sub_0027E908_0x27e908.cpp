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

// Function: sub_0027E908
// Address: 0x27e908 - 0x27ec20
void sub_0027E908_0x27e908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E908_0x27e908");
#endif

    switch (ctx->pc) {
        case 0x27e954u: goto label_27e954;
        case 0x27e968u: goto label_27e968;
        case 0x27e9a8u: goto label_27e9a8;
        case 0x27e9d4u: goto label_27e9d4;
        case 0x27e9ecu: goto label_27e9ec;
        case 0x27e9f8u: goto label_27e9f8;
        case 0x27ea7cu: goto label_27ea7c;
        case 0x27ea98u: goto label_27ea98;
        case 0x27eab0u: goto label_27eab0;
        case 0x27eb84u: goto label_27eb84;
        case 0x27ebc4u: goto label_27ebc4;
        case 0x27ebd4u: goto label_27ebd4;
        default: break;
    }

    ctx->pc = 0x27e908u;

    // 0x27e908: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x27e908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x27e90c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x27e90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x27e910: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27e910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e914: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x27e914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x27e918: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x27e918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x27e91c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x27e91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x27e920: 0xe7b90088  swc1        $f25, 0x88($sp)
    ctx->pc = 0x27e920u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x27e924: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27e924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x27e928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27e928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27e92c: 0xe7bd00a8  swc1        $f29, 0xA8($sp)
    ctx->pc = 0x27e92cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x27e930: 0xe7bc00a0  swc1        $f28, 0xA0($sp)
    ctx->pc = 0x27e930u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x27e934: 0xe7bb0098  swc1        $f27, 0x98($sp)
    ctx->pc = 0x27e934u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x27e938: 0xe7ba0090  swc1        $f26, 0x90($sp)
    ctx->pc = 0x27e938u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x27e93c: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x27e93cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x27e940: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x27e940u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x27e944: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x27e944u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x27e948: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x27e948u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x27e94c: 0xc088ac6  jal         func_222B18
    ctx->pc = 0x27E94Cu;
    SET_GPR_U32(ctx, 31, 0x27E954u);
    ctx->pc = 0x27E950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E94Cu;
    // 0x27e950: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x27E94Cu, 0x27E954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E954u;
label_27e954:
    // 0x27e954: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27e954u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e958: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27e958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e95c: 0x9293004c  lbu         $s3, 0x4C($s4)
    ctx->pc = 0x27e95cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x27e960: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x27E960u;
    SET_GPR_U32(ctx, 31, 0x27E968u);
    ctx->pc = 0x27E964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E960u;
    // 0x27e964: 0xc6990048  lwc1        $f25, 0x48($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x27E960u, 0x27E968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E968u;
label_27e968:
    // 0x27e968: 0x8e2600d4  lw          $a2, 0xD4($s1)
    ctx->pc = 0x27e968u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x27e96c: 0x8cc50110  lw          $a1, 0x110($a2)
    ctx->pc = 0x27e96cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 272)));
    // 0x27e970: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x27E970u;
    {
        const bool branch_taken_0x27e970 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E970u;
        // 0x27e974: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e970) {
            ctx->pc = 0x27EA00u;
            goto label_27ea00;
        }
    }
    ctx->pc = 0x27E978u;
    // 0x27e978: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27e978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x27e97c: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x27e97cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x27e980: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x27e980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x27e984: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x27e984u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x27e988: 0x2c6300fa  sltiu       $v1, $v1, 0xFA
    ctx->pc = 0x27e988u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)250) ? 1 : 0);
    // 0x27e98c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x27E98Cu;
    {
        const bool branch_taken_0x27e98c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E98Cu;
        // 0x27e990: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e98c) {
            ctx->pc = 0x27E9B0u;
            goto label_27e9b0;
        }
    }
    ctx->pc = 0x27E994u;
    // 0x27e994: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x27e994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x27e998: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x27e998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x27e99c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x27e99cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e9a0: 0xc06ca54  jal         func_1B2950
    ctx->pc = 0x27E9A0u;
    SET_GPR_U32(ctx, 31, 0x27E9A8u);
    ctx->pc = 0x27E9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E9A0u;
    // 0x27e9a4: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2950u, 0x27E9A0u, 0x27E9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E9A8u;
label_27e9a8:
    // 0x27e9a8: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x27E9A8u;
    {
        const bool branch_taken_0x27e9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E9A8u;
        // 0x27e9ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e9a8) {
            ctx->pc = 0x27EBD8u;
            goto label_27ebd8;
        }
    }
    ctx->pc = 0x27E9B0u;
label_27e9b0:
    // 0x27e9b0: 0xacc00110  sw          $zero, 0x110($a2)
    ctx->pc = 0x27e9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 272), GPR_U32(ctx, 0));
    // 0x27e9b4: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x27e9b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x27e9b8: 0xa200001c  sb          $zero, 0x1C($s0)
    ctx->pc = 0x27e9b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x27e9bc: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x27e9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x27e9c0: 0xa200001d  sb          $zero, 0x1D($s0)
    ctx->pc = 0x27e9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x27e9c4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x27e9c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x27e9c8: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x27e9c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x27e9cc: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x27E9CCu;
    SET_GPR_U32(ctx, 31, 0x27E9D4u);
    ctx->pc = 0x27E9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E9CCu;
    // 0x27e9d0: 0x8e44aa84  lw          $a0, -0x557C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x27E9CCu, 0x27E9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E9D4u;
label_27e9d4:
    // 0x27e9d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x27e9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27e9d8: 0x5663000a  bnel        $s3, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x27E9D8u;
    {
        const bool branch_taken_0x27e9d8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x27e9d8) {
            ctx->pc = 0x27E9DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E9D8u;
            // 0x27e9dc: 0x92030018  lbu         $v1, 0x18($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27EA04u;
            goto label_27ea04;
        }
    }
    ctx->pc = 0x27E9E0u;
    // 0x27e9e0: 0x8e44aa84  lw          $a0, -0x557C($s2)
    ctx->pc = 0x27e9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
    // 0x27e9e4: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x27E9E4u;
    SET_GPR_U32(ctx, 31, 0x27E9ECu);
    ctx->pc = 0x27E9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E9E4u;
    // 0x27e9e8: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x27E9E4u, 0x27E9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E9ECu;
label_27e9ec:
    // 0x27e9ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27e9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e9f0: 0xc09e18a  jal         func_278628
    ctx->pc = 0x27E9F0u;
    SET_GPR_U32(ctx, 31, 0x27E9F8u);
    ctx->pc = 0x27E9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E9F0u;
    // 0x27e9f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278628u, 0x27E9F0u, 0x27E9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E9F8u;
label_27e9f8:
    // 0x27e9f8: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x27E9F8u;
    {
        const bool branch_taken_0x27e9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E9F8u;
        // 0x27e9fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e9f8) {
            ctx->pc = 0x27EBD8u;
            goto label_27ebd8;
        }
    }
    ctx->pc = 0x27EA00u;
label_27ea00:
    // 0x27ea00: 0x92030018  lbu         $v1, 0x18($s0)
    ctx->pc = 0x27ea00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
label_27ea04:
    // 0x27ea04: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x27ea04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x27ea08: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x27ea08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x27ea0c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x27ea0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x27ea10: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x27ea10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x27ea14: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x27ea14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x27ea18: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x27ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x27ea1c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x27ea1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x27ea20: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x27ea20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x27ea24: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x27ea24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x27ea28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27ea2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27ea2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27ea30: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x27ea30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x27ea34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27ea38: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27ea38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27ea3c: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x27ea3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x27ea40: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x27ea40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x27ea44: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x27ea44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x27ea48: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27ea4c: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x27ea4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x27ea50: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x27ea50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x27ea54: 0xc4cc0000  lwc1        $f12, 0x0($a2)
    ctx->pc = 0x27ea54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27ea58: 0xc4b40000  lwc1        $f20, 0x0($a1)
    ctx->pc = 0x27ea58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27ea5c: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x27ea5cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x27ea60: 0xc49b0000  lwc1        $f27, 0x0($a0)
    ctx->pc = 0x27ea60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x27ea64: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x27ea64u;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    // 0x27ea68: 0xc45c0000  lwc1        $f28, 0x0($v0)
    ctx->pc = 0x27ea68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x27ea6c: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x27ea6cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x27ea70: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x27ea70u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x27ea74: 0xc0cdd5a  jal         func_337568
    ctx->pc = 0x27EA74u;
    SET_GPR_U32(ctx, 31, 0x27EA7Cu);
    ctx->pc = 0x27EA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EA74u;
    // 0x27ea78: 0x4600cf46  mov.s       $f29, $f25 (Delay Slot)
    ctx->f[29] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337568u, 0x27EA74u, 0x27EA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA7Cu;
label_27ea7c:
    // 0x27ea7c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27ea7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27ea80: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x27ea80u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x27ea84: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x27ea84u;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    // 0x27ea88: 0x46000686  mov.s       $f26, $f0
    ctx->pc = 0x27ea88u;
    ctx->f[26] = FPU_MOV_S(ctx->f[0]);
    // 0x27ea8c: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x27ea8cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x27ea90: 0xc0cdd5a  jal         func_337568
    ctx->pc = 0x27EA90u;
    SET_GPR_U32(ctx, 31, 0x27EA98u);
    ctx->pc = 0x27EA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EA90u;
    // 0x27ea94: 0x4600bbc6  mov.s       $f15, $f23 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337568u, 0x27EA90u, 0x27EA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA98u;
label_27ea98:
    // 0x27ea98: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x27ea98u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x27ea9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27ea9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eaa0: 0x461ab001  sub.s       $f0, $f22, $f26
    ctx->pc = 0x27eaa0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[26]);
    // 0x27eaa4: 0x46000505  abs.s       $f20, $f0
    ctx->pc = 0x27eaa4u;
    ctx->f[20] = FPU_ABS_S(ctx->f[0]);
    // 0x27eaa8: 0xc08b742  jal         func_22DD08
    ctx->pc = 0x27EAA8u;
    SET_GPR_U32(ctx, 31, 0x27EAB0u);
    ctx->pc = 0x22DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DD08u, 0x27EAA8u, 0x27EAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EAB0u;
label_27eab0:
    // 0x27eab0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x27eab0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x27eab4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x27eab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x27eab8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x27eab8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x27eabc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27eabcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27eac0: 0x0  nop
    ctx->pc = 0x27eac0u;
    // NOP
    // 0x27eac4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x27eac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27eac8: 0x0  nop
    ctx->pc = 0x27eac8u;
    // NOP
    // 0x27eacc: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
    ctx->pc = 0x27EACCu;
    {
        const bool branch_taken_0x27eacc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27eacc) {
            ctx->pc = 0x27EAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27EACCu;
            // 0x27ead0: 0x461dc801  sub.s       $f0, $f25, $f29 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[25], ctx->f[29]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27EB38u;
            goto label_27eb38;
        }
    }
    ctx->pc = 0x27EAD4u;
    // 0x27ead4: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x27ead4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x27ead8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27ead8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x27eadc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27eadcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27eae0: 0x0  nop
    ctx->pc = 0x27eae0u;
    // NOP
    // 0x27eae4: 0x461b0034  c.lt.s      $f0, $f27
    ctx->pc = 0x27eae4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27eae8: 0x0  nop
    ctx->pc = 0x27eae8u;
    // NOP
    // 0x27eaec: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x27EAECu;
    {
        const bool branch_taken_0x27eaec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27eaec) {
            ctx->pc = 0x27EAF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27EAECu;
            // 0x27eaf0: 0x461dc801  sub.s       $f0, $f25, $f29 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[25], ctx->f[29]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27EB38u;
            goto label_27eb38;
        }
    }
    ctx->pc = 0x27EAF4u;
    // 0x27eaf4: 0x461c0034  c.lt.s      $f0, $f28
    ctx->pc = 0x27eaf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[28])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27eaf8: 0x0  nop
    ctx->pc = 0x27eaf8u;
    // NOP
    // 0x27eafc: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x27EAFCu;
    {
        const bool branch_taken_0x27eafc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27eafc) {
            ctx->pc = 0x27EB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27EAFCu;
            // 0x27eb00: 0x461dc801  sub.s       $f0, $f25, $f29 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[25], ctx->f[29]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27EB38u;
            goto label_27eb38;
        }
    }
    ctx->pc = 0x27EB04u;
    // 0x27eb04: 0x4616d034  c.lt.s      $f26, $f22
    ctx->pc = 0x27eb04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[26], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27eb08: 0x0  nop
    ctx->pc = 0x27eb08u;
    // NOP
    // 0x27eb0c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x27EB0Cu;
    {
        const bool branch_taken_0x27eb0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27eb0c) {
            ctx->pc = 0x27EB10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27EB0Cu;
            // 0x27eb10: 0x4614ce40  add.s       $f25, $f25, $f20 (Delay Slot)
            ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27EB18u;
            goto label_27eb18;
        }
    }
    ctx->pc = 0x27EB14u;
    // 0x27eb14: 0x4614ce41  sub.s       $f25, $f25, $f20
    ctx->pc = 0x27eb14u;
    ctx->f[25] = FPU_SUB_S(ctx->f[25], ctx->f[20]);
label_27eb18:
    // 0x27eb18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27eb18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27eb1c: 0x0  nop
    ctx->pc = 0x27eb1cu;
    // NOP
    // 0x27eb20: 0x46190036  c.le.s      $f0, $f25
    ctx->pc = 0x27eb20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27eb24: 0x0  nop
    ctx->pc = 0x27eb24u;
    // NOP
    // 0x27eb28: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x27EB28u;
    {
        const bool branch_taken_0x27eb28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27eb28) {
            ctx->pc = 0x27EB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27EB28u;
            // 0x27eb2c: 0x4615c829  min.s       $f0, $f25, $f21 (Delay Slot)
            ctx->f[0] = std::min(ctx->f[25], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27EB30u;
            goto label_27eb30;
        }
    }
    ctx->pc = 0x27EB30u;
label_27eb30:
    // 0x27eb30: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x27eb30u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    // 0x27eb34: 0x461dc801  sub.s       $f0, $f25, $f29
    ctx->pc = 0x27eb34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[25], ctx->f[29]);
label_27eb38:
    // 0x27eb38: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x27eb38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x27eb3c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x27eb3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x27eb40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27eb40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27eb44: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x27eb44u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x27eb48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27eb48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27eb4c: 0x0  nop
    ctx->pc = 0x27eb4cu;
    // NOP
    // 0x27eb50: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x27EB50u;
    {
        const bool branch_taken_0x27eb50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB50u;
        // 0x27eb54: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb50) {
            ctx->pc = 0x27EB64u;
            goto label_27eb64;
        }
    }
    ctx->pc = 0x27EB58u;
    // 0x27eb58: 0xa200001d  sb          $zero, 0x1D($s0)
    ctx->pc = 0x27eb58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x27eb5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27EB5Cu;
    {
        const bool branch_taken_0x27eb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB5Cu;
        // 0x27eb60: 0xa202001c  sb          $v0, 0x1C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb5c) {
            ctx->pc = 0x27EB6Cu;
            goto label_27eb6c;
        }
    }
    ctx->pc = 0x27EB64u;
label_27eb64:
    // 0x27eb64: 0xa200001c  sb          $zero, 0x1C($s0)
    ctx->pc = 0x27eb64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x27eb68: 0xa200001d  sb          $zero, 0x1D($s0)
    ctx->pc = 0x27eb68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 0));
label_27eb6c:
    // 0x27eb6c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x27eb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x27eb70: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x27eb70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x27eb74: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x27eb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x27eb78: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x27eb78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eb7c: 0xc06ca54  jal         func_1B2950
    ctx->pc = 0x27EB7Cu;
    SET_GPR_U32(ctx, 31, 0x27EB84u);
    ctx->pc = 0x27EB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EB7Cu;
    // 0x27eb80: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2950u, 0x27EB7Cu, 0x27EB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EB84u;
label_27eb84:
    // 0x27eb84: 0x4619a836  c.le.s      $f21, $f25
    ctx->pc = 0x27eb84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27eb88: 0x0  nop
    ctx->pc = 0x27eb88u;
    // NOP
    // 0x27eb8c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x27EB8Cu;
    {
        const bool branch_taken_0x27eb8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB8Cu;
        // 0x27eb90: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb8c) {
            ctx->pc = 0x27EBB4u;
            goto label_27ebb4;
        }
    }
    ctx->pc = 0x27EB94u;
    // 0x27eb94: 0x8e2600d4  lw          $a2, 0xD4($s1)
    ctx->pc = 0x27eb94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x27eb98: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x27eb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x27eb9c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27eb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27eba0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27eba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27eba4: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x27eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x27eba8: 0xacc20110  sw          $v0, 0x110($a2)
    ctx->pc = 0x27eba8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 272), GPR_U32(ctx, 2));
    // 0x27ebac: 0xa204001c  sb          $a0, 0x1C($s0)
    ctx->pc = 0x27ebacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 4));
    // 0x27ebb0: 0xa205001d  sb          $a1, 0x1D($s0)
    ctx->pc = 0x27ebb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 5));
label_27ebb4:
    // 0x27ebb4: 0xe6990048  swc1        $f25, 0x48($s4)
    ctx->pc = 0x27ebb4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 72), bits); }
    // 0x27ebb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ebb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ebbc: 0xc09ee9a  jal         func_27BA68
    ctx->pc = 0x27EBBCu;
    SET_GPR_U32(ctx, 31, 0x27EBC4u);
    ctx->pc = 0x27EBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EBBCu;
    // 0x27ebc0: 0xa293004c  sb          $s3, 0x4C($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 76), (uint8_t)GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BA68u, 0x27EBBCu, 0x27EBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EBC4u;
label_27ebc4:
    // 0x27ebc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27EBC4u;
    {
        const bool branch_taken_0x27ebc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EBC4u;
        // 0x27ebc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ebc4) {
            ctx->pc = 0x27EBD4u;
            goto label_27ebd4;
        }
    }
    ctx->pc = 0x27EBCCu;
    // 0x27ebcc: 0xc09e18a  jal         func_278628
    ctx->pc = 0x27EBCCu;
    SET_GPR_U32(ctx, 31, 0x27EBD4u);
    ctx->pc = 0x27EBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EBCCu;
    // 0x27ebd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278628u, 0x27EBCCu, 0x27EBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EBD4u;
label_27ebd4:
    // 0x27ebd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27ebd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27ebd8:
    // 0x27ebd8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x27ebd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27ebdc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x27ebdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27ebe0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27ebe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27ebe4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x27ebe4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ebe8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x27ebe8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ebec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27ebecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ebf0: 0xc7bd00a8  lwc1        $f29, 0xA8($sp)
    ctx->pc = 0x27ebf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x27ebf4: 0xc7bc00a0  lwc1        $f28, 0xA0($sp)
    ctx->pc = 0x27ebf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x27ebf8: 0xc7bb0098  lwc1        $f27, 0x98($sp)
    ctx->pc = 0x27ebf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x27ebfc: 0xc7ba0090  lwc1        $f26, 0x90($sp)
    ctx->pc = 0x27ebfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x27ec00: 0xc7b90088  lwc1        $f25, 0x88($sp)
    ctx->pc = 0x27ec00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x27ec04: 0xc7b80080  lwc1        $f24, 0x80($sp)
    ctx->pc = 0x27ec04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x27ec08: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x27ec08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x27ec0c: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x27ec0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27ec10: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x27ec10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27ec14: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x27ec14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27ec18: 0x3e00008  jr          $ra
    ctx->pc = 0x27EC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC18u;
        // 0x27ec1c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EC20u;
}
