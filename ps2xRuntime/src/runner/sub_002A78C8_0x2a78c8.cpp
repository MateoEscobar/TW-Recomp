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

// Function: sub_002A78C8
// Address: 0x2a78c8 - 0x2a7a40
void sub_002A78C8_0x2a78c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A78C8_0x2a78c8");
#endif

    switch (ctx->pc) {
        case 0x2a7908u: goto label_2a7908;
        case 0x2a7910u: goto label_2a7910;
        case 0x2a7998u: goto label_2a7998;
        case 0x2a79b0u: goto label_2a79b0;
        case 0x2a79d8u: goto label_2a79d8;
        case 0x2a79e4u: goto label_2a79e4;
        case 0x2a79f4u: goto label_2a79f4;
        case 0x2a7a0cu: goto label_2a7a0c;
        case 0x2a7a18u: goto label_2a7a18;
        default: break;
    }

    ctx->pc = 0x2a78c8u;

    // 0x2a78c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a78c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a78cc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2a78ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2a78d0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2a78d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2a78d4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2a78d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2a78d8: 0x58403  sra         $s0, $a1, 16
    ctx->pc = 0x2a78d8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2a78dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a78dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a78e0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a78e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a78e4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2a78e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2a78e8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2a78e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a78ec: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2a78ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2a78f0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2a78f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a78f4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2a78f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2a78f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a78f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a78fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a78fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a7900: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2A7900u;
    SET_GPR_U32(ctx, 31, 0x2A7908u);
    ctx->pc = 0x2A7904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7900u;
    // 0x2a7904: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A7900u, 0x2A7908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7908u;
label_2a7908:
    // 0x2a7908: 0xc087502  jal         func_21D408
    ctx->pc = 0x2A7908u;
    SET_GPR_U32(ctx, 31, 0x2A7910u);
    ctx->pc = 0x2A790Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7908u;
    // 0x2a790c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2A7908u, 0x2A7910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7910u;
label_2a7910:
    // 0x2a7910: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a7910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7914: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2a7914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2a7918: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a7918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2a791c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2A791Cu;
    {
        const bool branch_taken_0x2a791c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A791Cu;
        // 0x2a7920: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a791c) {
            ctx->pc = 0x2A79ECu;
            goto label_2a79ec;
        }
    }
    ctx->pc = 0x2A7924u;
    // 0x2a7924: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2a7924u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a7928: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A7928u;
    {
        const bool branch_taken_0x2a7928 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7928) {
            ctx->pc = 0x2A792Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7928u;
            // 0x2a792c: 0x8e25026c  lw          $a1, 0x26C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7930u;
            goto label_2a7930;
        }
    }
    ctx->pc = 0x2A7930u;
label_2a7930:
    // 0x2a7930: 0x2ca2000a  sltiu       $v0, $a1, 0xA
    ctx->pc = 0x2a7930u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2a7934: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A7934u;
    {
        const bool branch_taken_0x2a7934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7934u;
        // 0x2a7938: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7934) {
            ctx->pc = 0x2A7978u;
            goto label_2a7978;
        }
    }
    ctx->pc = 0x2A793Cu;
    // 0x2a793c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2a793cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a7940: 0x244236a0  addiu       $v0, $v0, 0x36A0
    ctx->pc = 0x2a7940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13984));
    // 0x2a7944: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a7944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a7948: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a7948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a794c: 0x800008  jr          $a0
    ctx->pc = 0x2A794Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A7954u: goto label_2a7954;
            case 0x2A7960u: goto label_2a7960;
            case 0x2A7970u: goto label_2a7970;
            case 0x2A7978u: goto label_2a7978;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A794Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A7954u;
label_2a7954:
    // 0x2a7954: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2a7954u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a7958: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A7958u;
    {
        const bool branch_taken_0x2a7958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7958u;
        // 0x2a795c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7958) {
            ctx->pc = 0x2A7978u;
            goto label_2a7978;
        }
    }
    ctx->pc = 0x2A7960u;
label_2a7960:
    // 0x2a7960: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2a7960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2a7964: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a7964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a7968: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7968u;
    {
        const bool branch_taken_0x2a7968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7968u;
        // 0x2a796c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7968) {
            ctx->pc = 0x2A7978u;
            goto label_2a7978;
        }
    }
    ctx->pc = 0x2A7970u;
label_2a7970:
    // 0x2a7970: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2a7970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a7974: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a7974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a7978:
    // 0x2a7978: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2a7978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2a797c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2a797cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2a7980: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2a7980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2a7984: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A7984u;
    {
        const bool branch_taken_0x2a7984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7984u;
        // 0x2a7988: 0xae25026c  sw          $a1, 0x26C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 620), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7984) {
            ctx->pc = 0x2A7990u;
            goto label_2a7990;
        }
    }
    ctx->pc = 0x2A798Cu;
    // 0x2a798c: 0xae20021c  sw          $zero, 0x21C($s1)
    ctx->pc = 0x2a798cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 540), GPR_U32(ctx, 0));
label_2a7990:
    // 0x2a7990: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2A7990u;
    SET_GPR_U32(ctx, 31, 0x2A7998u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2A7990u, 0x2A7998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7998u;
label_2a7998:
    // 0x2a7998: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a7998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a799c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2A799Cu;
    {
        const bool branch_taken_0x2a799c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A79A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A799Cu;
        // 0x2a79a0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a799c) {
            ctx->pc = 0x2A79D8u;
            goto label_2a79d8;
        }
    }
    ctx->pc = 0x2A79A4u;
    // 0x2a79a4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2a79a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a79a8: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2A79A8u;
    SET_GPR_U32(ctx, 31, 0x2A79B0u);
    ctx->pc = 0x2A79ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A79A8u;
    // 0x2a79ac: 0x2484b890  addiu       $a0, $a0, -0x4770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2A79A8u, 0x2A79B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A79B0u;
label_2a79b0:
    // 0x2a79b0: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x2a79b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2a79b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a79b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a79b8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2a79b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a79bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a79bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a79c0: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x2a79c0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x2a79c4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2a79c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a79c8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2a79c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a79cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a79ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a79d0: 0xc0aab8c  jal         func_2AAE30
    ctx->pc = 0x2A79D0u;
    SET_GPR_U32(ctx, 31, 0x2A79D8u);
    ctx->pc = 0x2A79D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A79D0u;
    // 0x2a79d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAE30u, 0x2A79D0u, 0x2A79D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A79D8u;
label_2a79d8:
    // 0x2a79d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a79d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a79dc: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2A79DCu;
    SET_GPR_U32(ctx, 31, 0x2A79E4u);
    ctx->pc = 0x2A79E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A79DCu;
    // 0x2a79e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2A79DCu, 0x2A79E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A79E4u;
label_2a79e4:
    // 0x2a79e4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2A79E4u;
    {
        const bool branch_taken_0x2a79e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A79E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A79E4u;
        // 0x2a79e8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a79e4) {
            ctx->pc = 0x2A7A1Cu;
            goto label_2a7a1c;
        }
    }
    ctx->pc = 0x2A79ECu;
label_2a79ec:
    // 0x2a79ec: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2A79ECu;
    SET_GPR_U32(ctx, 31, 0x2A79F4u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2A79ECu, 0x2A79F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A79F4u;
label_2a79f4:
    // 0x2a79f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a79f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a79f8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A79F8u;
    {
        const bool branch_taken_0x2a79f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A79FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A79F8u;
        // 0x2a79fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a79f8) {
            ctx->pc = 0x2A7A0Cu;
            goto label_2a7a0c;
        }
    }
    ctx->pc = 0x2A7A00u;
    // 0x2a7a00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a7a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7a04: 0xc0b04ce  jal         func_2C1338
    ctx->pc = 0x2A7A04u;
    SET_GPR_U32(ctx, 31, 0x2A7A0Cu);
    ctx->pc = 0x2A7A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7A04u;
    // 0x2a7a08: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1338u, 0x2A7A04u, 0x2A7A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7A0Cu;
label_2a7a0c:
    // 0x2a7a0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a7a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7a10: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2A7A10u;
    SET_GPR_U32(ctx, 31, 0x2A7A18u);
    ctx->pc = 0x2A7A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7A10u;
    // 0x2a7a14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2A7A10u, 0x2A7A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7A18u;
label_2a7a18:
    // 0x2a7a18: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2a7a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2a7a1c:
    // 0x2a7a1c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2a7a1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a7a20: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2a7a20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a7a24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a7a24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a7a28: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2a7a28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a7a2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a7a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7a30: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2a7a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a7a34: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7A34u;
        // 0x2a7a38: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7A3Cu;
    // 0x2a7a3c: 0x0  nop
    ctx->pc = 0x2a7a3cu;
    // NOP
    ctx->pc = 0x2a7a40u;
}
