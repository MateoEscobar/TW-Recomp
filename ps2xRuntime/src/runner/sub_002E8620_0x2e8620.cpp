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

// Function: sub_002E8620
// Address: 0x2e8620 - 0x2e8818
void sub_002E8620_0x2e8620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8620_0x2e8620");
#endif

    switch (ctx->pc) {
        case 0x2e86a0u: goto label_2e86a0;
        case 0x2e86acu: goto label_2e86ac;
        case 0x2e8760u: goto label_2e8760;
        case 0x2e8780u: goto label_2e8780;
        case 0x2e87c4u: goto label_2e87c4;
        case 0x2e87dcu: goto label_2e87dc;
        default: break;
    }

    ctx->pc = 0x2e8620u;

    // 0x2e8620: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e8620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e8624: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2e8624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2e8628: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e8628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e862c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2e862cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8630: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2e8630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2e8634: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e8634u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8638: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2e8638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2e863c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e863cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8640: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2e8640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2e8644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e8644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e8648: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2e8648u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2e864c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2e864cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e8650: 0x8e6300d8  lw          $v1, 0xD8($s3)
    ctx->pc = 0x2e8650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    // 0x2e8654: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E8654u;
    {
        const bool branch_taken_0x2e8654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8654u;
        // 0x2e8658: 0x8c540000  lw          $s4, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8654) {
            ctx->pc = 0x2E867Cu;
            goto label_2e867c;
        }
    }
    ctx->pc = 0x2E865Cu;
    // 0x2e865c: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x2e865cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2e8660: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2e8660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x2e8664: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x2e8664u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x2e8668: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2e8668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2e866c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2e866cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2e8670: 0x2c4202ef  sltiu       $v0, $v0, 0x2EF
    ctx->pc = 0x2e8670u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)751) ? 1 : 0);
    // 0x2e8674: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2E8674u;
    {
        const bool branch_taken_0x2e8674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8674u;
        // 0x2e8678: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8674) {
            ctx->pc = 0x2E8724u;
            goto label_2e8724;
        }
    }
    ctx->pc = 0x2E867Cu;
label_2e867c:
    // 0x2e867c: 0x86640092  lh          $a0, 0x92($s3)
    ctx->pc = 0x2e867cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
    // 0x2e8680: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2e8680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2e8684: 0x86850092  lh          $a1, 0x92($s4)
    ctx->pc = 0x2e8684u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
    // 0x2e8688: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2e8688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2e868c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2e868cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2e8690: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2e8690u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2e8694: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2e8694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e8698: 0xc0cdb62  jal         func_336D88
    ctx->pc = 0x2E8698u;
    SET_GPR_U32(ctx, 31, 0x2E86A0u);
    ctx->pc = 0x2E869Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8698u;
    // 0x2e869c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x2E8698u, 0x2E86A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E86A0u;
label_2e86a0:
    // 0x2e86a0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e86a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e86a4: 0xc0a2fc0  jal         func_28BF00
    ctx->pc = 0x2E86A4u;
    SET_GPR_U32(ctx, 31, 0x2E86ACu);
    ctx->pc = 0x2E86A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E86A4u;
    // 0x2e86a8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x2E86A4u, 0x2E86ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E86ACu;
label_2e86ac:
    // 0x2e86ac: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2e86acu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2e86b0: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x2e86b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e86b4: 0x0  nop
    ctx->pc = 0x2e86b4u;
    // NOP
    // 0x2e86b8: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x2E86B8u;
    {
        const bool branch_taken_0x2e86b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E86BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E86B8u;
        // 0x2e86bc: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e86b8) {
            ctx->pc = 0x2E8724u;
            goto label_2e8724;
        }
    }
    ctx->pc = 0x2E86C0u;
    // 0x2e86c0: 0x8e500018  lw          $s0, 0x18($s2)
    ctx->pc = 0x2e86c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2e86c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e86c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e86c8: 0x16020032  bne         $s0, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2E86C8u;
    {
        const bool branch_taken_0x2e86c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E86CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E86C8u;
        // 0x2e86cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e86c8) {
            ctx->pc = 0x2E8794u;
            goto label_2e8794;
        }
    }
    ctx->pc = 0x2E86D0u;
    // 0x2e86d0: 0x8e8200cc  lw          $v0, 0xCC($s4)
    ctx->pc = 0x2e86d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 204)));
    // 0x2e86d4: 0x38420078  xori        $v0, $v0, 0x78
    ctx->pc = 0x2e86d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)120);
    // 0x2e86d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E86D8u;
    {
        const bool branch_taken_0x2e86d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E86DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E86D8u;
        // 0x2e86dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e86d8) {
            ctx->pc = 0x2E86F0u;
            goto label_2e86f0;
        }
    }
    ctx->pc = 0x2E86E0u;
    // 0x2e86e0: 0x9242003f  lbu         $v0, 0x3F($s2)
    ctx->pc = 0x2e86e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 63)));
    // 0x2e86e4: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2e86e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2e86e8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E86E8u;
    {
        const bool branch_taken_0x2e86e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e86e8) {
            ctx->pc = 0x2E86F4u;
            goto label_2e86f4;
        }
    }
    ctx->pc = 0x2E86F0u;
label_2e86f0:
    // 0x2e86f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e86f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e86f4:
    // 0x2e86f4: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2E86F4u;
    {
        const bool branch_taken_0x2e86f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e86f4) {
            ctx->pc = 0x2E86F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E86F4u;
            // 0x2e86f8: 0x46141001  sub.s       $f0, $f2, $f20 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8734u;
            goto label_2e8734;
        }
    }
    ctx->pc = 0x2E86FCu;
    // 0x2e86fc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2e86fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e8700: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x2e8700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
    // 0x2e8704: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2e8704u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x2e8708: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e8708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e870c: 0xc4400140  lwc1        $f0, 0x140($v0)
    ctx->pc = 0x2e870cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8710: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e8710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e8714: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2e8714u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e8718: 0x0  nop
    ctx->pc = 0x2e8718u;
    // NOP
    // 0x2e871c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E871Cu;
    {
        const bool branch_taken_0x2e871c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E8720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E871Cu;
        // 0x2e8720: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e871c) {
            ctx->pc = 0x2E8730u;
            goto label_2e8730;
        }
    }
    ctx->pc = 0x2E8724u;
label_2e8724:
    // 0x2e8724: 0x8c4319e8  lw          $v1, 0x19E8($v0)
    ctx->pc = 0x2e8724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6632)));
    // 0x2e8728: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2E8728u;
    {
        const bool branch_taken_0x2e8728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8728u;
        // 0x2e872c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8728) {
            ctx->pc = 0x2E87F0u;
            goto label_2e87f0;
        }
    }
    ctx->pc = 0x2E8730u;
label_2e8730:
    // 0x2e8730: 0x46141001  sub.s       $f0, $f2, $f20
    ctx->pc = 0x2e8730u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
label_2e8734:
    // 0x2e8734: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2e8734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2e8738: 0xc4410b4c  lwc1        $f1, 0xB4C($v0)
    ctx->pc = 0x2e8738u;
    { uint32_t bits = FAST_READ32(0x510B4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e873c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e873cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8740: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e8740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e8744: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2e8744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8748: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e8748u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e874c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e874cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e8750: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2e8750u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e8754: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e8754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e8758: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2E8758u;
    SET_GPR_U32(ctx, 31, 0x2E8760u);
    ctx->pc = 0x2E875Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8758u;
    // 0x2e875c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2E8758u, 0x2E8760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8760u;
label_2e8760:
    // 0x2e8760: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x2e8760u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x2e8764: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8764u;
    {
        const bool branch_taken_0x2e8764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8764) {
            ctx->pc = 0x2E8778u;
            goto label_2e8778;
        }
    }
    ctx->pc = 0x2E876Cu;
    // 0x2e876c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2e876cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e8770: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2e8770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2e8774: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e8774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2e8778:
    // 0x2e8778: 0xc088ee6  jal         func_223B98
    ctx->pc = 0x2E8778u;
    SET_GPR_U32(ctx, 31, 0x2E8780u);
    ctx->pc = 0x2E877Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8778u;
    // 0x2e877c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x2E8778u, 0x2E8780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8780u;
label_2e8780:
    // 0x2e8780: 0x1450001c  bne         $v0, $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E8780u;
    {
        const bool branch_taken_0x2e8780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2E8784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8780u;
        // 0x2e8784: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8780) {
            ctx->pc = 0x2E87F4u;
            goto label_2e87f4;
        }
    }
    ctx->pc = 0x2E8788u;
    // 0x2e8788: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2e8788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e878c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E878Cu;
    {
        const bool branch_taken_0x2e878c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E878Cu;
        // 0x2e8790: 0x2442000a  addiu       $v0, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e878c) {
            ctx->pc = 0x2E87ECu;
            goto label_2e87ec;
        }
    }
    ctx->pc = 0x2E8794u;
label_2e8794:
    // 0x2e8794: 0x56020017  bnel        $s0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E8794u;
    {
        const bool branch_taken_0x2e8794 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e8794) {
            ctx->pc = 0x2E8798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8794u;
            // 0x2e8798: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E87F4u;
            goto label_2e87f4;
        }
    }
    ctx->pc = 0x2E879Cu;
    // 0x2e879c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2e879cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2e87a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e87a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e87a4: 0xc4400b4c  lwc1        $f0, 0xB4C($v0)
    ctx->pc = 0x2e87a4u;
    { uint32_t bits = FAST_READ32(0x510B4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e87a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e87a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e87ac: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2e87acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2e87b0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e87b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e87b4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2e87b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e87b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e87b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e87bc: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2E87BCu;
    SET_GPR_U32(ctx, 31, 0x2E87C4u);
    ctx->pc = 0x2E87C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E87BCu;
    // 0x2e87c0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2E87BCu, 0x2E87C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E87C4u;
label_2e87c4:
    // 0x2e87c4: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x2e87c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x2e87c8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2e87c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e87cc: 0x14700009  bne         $v1, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E87CCu;
    {
        const bool branch_taken_0x2e87cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x2E87D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E87CCu;
        // 0x2e87d0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e87cc) {
            ctx->pc = 0x2E87F4u;
            goto label_2e87f4;
        }
    }
    ctx->pc = 0x2E87D4u;
    // 0x2e87d4: 0xc088ed2  jal         func_223B48
    ctx->pc = 0x2E87D4u;
    SET_GPR_U32(ctx, 31, 0x2E87DCu);
    ctx->pc = 0x2E87D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E87D4u;
    // 0x2e87d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x2E87D4u, 0x2E87DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E87DCu;
label_2e87dc:
    // 0x2e87dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E87DCu;
    {
        const bool branch_taken_0x2e87dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E87E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E87DCu;
        // 0x2e87e0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e87dc) {
            ctx->pc = 0x2E87F4u;
            goto label_2e87f4;
        }
    }
    ctx->pc = 0x2E87E4u;
    // 0x2e87e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2e87e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e87e8: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2e87e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_2e87ec:
    // 0x2e87ec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e87ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2e87f0:
    // 0x2e87f0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2e87f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e87f4:
    // 0x2e87f4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2e87f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e87f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e87f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e87fc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2e87fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8800: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2e8800u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e8804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8808: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2e8808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e880c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E880Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E880Cu;
        // 0x2e8810: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E880Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8814u;
    // 0x2e8814: 0x0  nop
    ctx->pc = 0x2e8814u;
    // NOP
    ctx->pc = 0x2e8818u;
}
