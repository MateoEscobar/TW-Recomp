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

// Function: sub_0016A088
// Address: 0x16a088 - 0x16a1c8
void sub_0016A088_0x16a088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A088_0x16a088");
#endif

    switch (ctx->pc) {
        case 0x16a088u: goto label_16a088;
        case 0x16a08cu: goto label_16a08c;
        case 0x16a090u: goto label_16a090;
        case 0x16a094u: goto label_16a094;
        case 0x16a098u: goto label_16a098;
        case 0x16a09cu: goto label_16a09c;
        case 0x16a0a0u: goto label_16a0a0;
        case 0x16a0a4u: goto label_16a0a4;
        case 0x16a0a8u: goto label_16a0a8;
        case 0x16a0acu: goto label_16a0ac;
        case 0x16a0b0u: goto label_16a0b0;
        case 0x16a0b4u: goto label_16a0b4;
        case 0x16a0b8u: goto label_16a0b8;
        case 0x16a0bcu: goto label_16a0bc;
        case 0x16a0c0u: goto label_16a0c0;
        case 0x16a0c4u: goto label_16a0c4;
        case 0x16a0c8u: goto label_16a0c8;
        case 0x16a0ccu: goto label_16a0cc;
        case 0x16a0d0u: goto label_16a0d0;
        case 0x16a0d4u: goto label_16a0d4;
        case 0x16a0d8u: goto label_16a0d8;
        case 0x16a0dcu: goto label_16a0dc;
        case 0x16a0e0u: goto label_16a0e0;
        case 0x16a0e4u: goto label_16a0e4;
        case 0x16a0e8u: goto label_16a0e8;
        case 0x16a0ecu: goto label_16a0ec;
        case 0x16a0f0u: goto label_16a0f0;
        case 0x16a0f4u: goto label_16a0f4;
        case 0x16a0f8u: goto label_16a0f8;
        case 0x16a0fcu: goto label_16a0fc;
        case 0x16a100u: goto label_16a100;
        case 0x16a104u: goto label_16a104;
        case 0x16a108u: goto label_16a108;
        case 0x16a10cu: goto label_16a10c;
        case 0x16a110u: goto label_16a110;
        case 0x16a114u: goto label_16a114;
        case 0x16a118u: goto label_16a118;
        case 0x16a11cu: goto label_16a11c;
        case 0x16a120u: goto label_16a120;
        case 0x16a124u: goto label_16a124;
        case 0x16a128u: goto label_16a128;
        case 0x16a12cu: goto label_16a12c;
        case 0x16a130u: goto label_16a130;
        case 0x16a134u: goto label_16a134;
        case 0x16a138u: goto label_16a138;
        case 0x16a13cu: goto label_16a13c;
        case 0x16a140u: goto label_16a140;
        case 0x16a144u: goto label_16a144;
        case 0x16a148u: goto label_16a148;
        case 0x16a14cu: goto label_16a14c;
        case 0x16a150u: goto label_16a150;
        case 0x16a154u: goto label_16a154;
        case 0x16a158u: goto label_16a158;
        case 0x16a15cu: goto label_16a15c;
        case 0x16a160u: goto label_16a160;
        case 0x16a164u: goto label_16a164;
        case 0x16a168u: goto label_16a168;
        case 0x16a16cu: goto label_16a16c;
        case 0x16a170u: goto label_16a170;
        case 0x16a174u: goto label_16a174;
        case 0x16a178u: goto label_16a178;
        case 0x16a17cu: goto label_16a17c;
        case 0x16a180u: goto label_16a180;
        case 0x16a184u: goto label_16a184;
        case 0x16a188u: goto label_16a188;
        case 0x16a18cu: goto label_16a18c;
        case 0x16a190u: goto label_16a190;
        case 0x16a194u: goto label_16a194;
        case 0x16a198u: goto label_16a198;
        case 0x16a19cu: goto label_16a19c;
        case 0x16a1a0u: goto label_16a1a0;
        case 0x16a1a4u: goto label_16a1a4;
        case 0x16a1a8u: goto label_16a1a8;
        case 0x16a1acu: goto label_16a1ac;
        case 0x16a1b0u: goto label_16a1b0;
        case 0x16a1b4u: goto label_16a1b4;
        case 0x16a1b8u: goto label_16a1b8;
        case 0x16a1bcu: goto label_16a1bc;
        case 0x16a1c0u: goto label_16a1c0;
        case 0x16a1c4u: goto label_16a1c4;
        default: break;
    }

    ctx->pc = 0x16a088u;

label_16a088:
    // 0x16a088: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16a088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_16a08c:
    // 0x16a08c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x16a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_16a090:
    // 0x16a090: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16a090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_16a094:
    // 0x16a094: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x16a094u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_16a098:
    // 0x16a098: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16a098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16a09c:
    // 0x16a09c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16a09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_16a0a0:
    // 0x16a0a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16a0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16a0a4:
    // 0x16a0a4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x16a0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_16a0a8:
    // 0x16a0a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16a0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16a0ac:
    // 0x16a0ac: 0xa22000db  sb          $zero, 0xDB($s1)
    ctx->pc = 0x16a0acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 219), (uint8_t)GPR_U32(ctx, 0));
label_16a0b0:
    // 0x16a0b0: 0x8c62cab4  lw          $v0, -0x354C($v1)
    ctx->pc = 0x16a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953652)));
label_16a0b4:
    // 0x16a0b4: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_16a0b8:
    if (ctx->pc == 0x16A0B8u) {
        ctx->pc = 0x16A0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0B4u;
        // 0x16a0b8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A0BCu;
        goto label_16a0bc;
    }
    ctx->pc = 0x16A0B4u;
    {
        const bool branch_taken_0x16a0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0B4u;
        // 0x16a0b8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a0b4) {
            ctx->pc = 0x16A1A8u;
            goto label_16a1a8;
        }
    }
    ctx->pc = 0x16A0BCu;
label_16a0bc:
    // 0x16a0bc: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x16a0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_16a0c0:
    // 0x16a0c0: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_16a0c4:
    if (ctx->pc == 0x16A0C4u) {
        ctx->pc = 0x16A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0C0u;
        // 0x16a0c4: 0x5802b  sltu        $s0, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A0C8u;
        goto label_16a0c8;
    }
    ctx->pc = 0x16A0C0u;
    {
        const bool branch_taken_0x16a0c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0C0u;
        // 0x16a0c4: 0x5802b  sltu        $s0, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a0c0) {
            ctx->pc = 0x16A11Cu;
            goto label_16a11c;
        }
    }
    ctx->pc = 0x16A0C8u;
label_16a0c8:
    // 0x16a0c8: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x16a0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_16a0cc:
    // 0x16a0cc: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x16a0ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_16a0d0:
    // 0x16a0d0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x16a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_16a0d4:
    // 0x16a0d4: 0x40f809  jalr        $v0
label_16a0d8:
    if (ctx->pc == 0x16A0D8u) {
        ctx->pc = 0x16A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0D4u;
        // 0x16a0d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A0DCu;
        goto label_16a0dc;
    }
    ctx->pc = 0x16A0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16A0DCu);
        ctx->pc = 0x16A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0D4u;
        // 0x16a0d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A0D4u, 0x16A0DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A0DCu;
label_16a0dc:
    // 0x16a0dc: 0x14500033  bne         $v0, $s0, . + 4 + (0x33 << 2)
label_16a0e0:
    if (ctx->pc == 0x16A0E0u) {
        ctx->pc = 0x16A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0DCu;
        // 0x16a0e0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A0E4u;
        goto label_16a0e4;
    }
    ctx->pc = 0x16A0DCu;
    {
        const bool branch_taken_0x16a0dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x16A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0DCu;
        // 0x16a0e0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a0dc) {
            ctx->pc = 0x16A1ACu;
            goto label_16a1ac;
        }
    }
    ctx->pc = 0x16A0E4u;
label_16a0e4:
    // 0x16a0e4: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x16a0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16a0e8:
    // 0x16a0e8: 0x0  nop
    ctx->pc = 0x16a0e8u;
    // NOP
label_16a0ec:
    // 0x16a0ec: 0x0  nop
    ctx->pc = 0x16a0ecu;
    // NOP
label_16a0f0:
    // 0x16a0f0: 0x46140084  c1          0x140084
    ctx->pc = 0x16a0f0u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_16a0f4:
    // 0x16a0f4: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x16a0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_16a0f8:
    // 0x16a0f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16a0f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16a0fc:
    // 0x16a0fc: 0x0  nop
    ctx->pc = 0x16a0fcu;
    // NOP
label_16a100:
    // 0x16a100: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16a100u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_16a104:
    // 0x16a104: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x16a104u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16a108:
    // 0x16a108: 0x0  nop
    ctx->pc = 0x16a108u;
    // NOP
label_16a10c:
    // 0x16a10c: 0x45020028  bc1fl       . + 4 + (0x28 << 2)
label_16a110:
    if (ctx->pc == 0x16A110u) {
        ctx->pc = 0x16A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A10Cu;
        // 0x16a110: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A114u;
        goto label_16a114;
    }
    ctx->pc = 0x16A10Cu;
    {
        const bool branch_taken_0x16a10c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a10c) {
            ctx->pc = 0x16A110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A10Cu;
            // 0x16a110: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A1B0u;
            goto label_16a1b0;
        }
    }
    ctx->pc = 0x16A114u;
label_16a114:
    // 0x16a114: 0x10000025  b           . + 4 + (0x25 << 2)
label_16a118:
    if (ctx->pc == 0x16A118u) {
        ctx->pc = 0x16A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A114u;
        // 0x16a118: 0xa22200db  sb          $v0, 0xDB($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 219), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A11Cu;
        goto label_16a11c;
    }
    ctx->pc = 0x16A114u;
    {
        const bool branch_taken_0x16a114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A114u;
        // 0x16a118: 0xa22200db  sb          $v0, 0xDB($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 219), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a114) {
            ctx->pc = 0x16A1ACu;
            goto label_16a1ac;
        }
    }
    ctx->pc = 0x16A11Cu;
label_16a11c:
    // 0x16a11c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a120:
    // 0x16a120: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16a120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a124:
    // 0x16a124: 0x26230640  addiu       $v1, $s1, 0x640
    ctx->pc = 0x16a124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1600));
label_16a128:
    // 0x16a128: 0x90620050  lbu         $v0, 0x50($v1)
    ctx->pc = 0x16a128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
label_16a12c:
    // 0x16a12c: 0x1045001f  beq         $v0, $a1, . + 4 + (0x1F << 2)
label_16a130:
    if (ctx->pc == 0x16A130u) {
        ctx->pc = 0x16A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A12Cu;
        // 0x16a130: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A134u;
        goto label_16a134;
    }
    ctx->pc = 0x16A12Cu;
    {
        const bool branch_taken_0x16a12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x16A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A12Cu;
        // 0x16a130: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a12c) {
            ctx->pc = 0x16A1ACu;
            goto label_16a1ac;
        }
    }
    ctx->pc = 0x16A134u;
label_16a134:
    // 0x16a134: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x16a134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_16a138:
    // 0x16a138: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x16a138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_16a13c:
    // 0x16a13c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_16a140:
    if (ctx->pc == 0x16A140u) {
        ctx->pc = 0x16A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A13Cu;
        // 0x16a140: 0x24630130  addiu       $v1, $v1, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A144u;
        goto label_16a144;
    }
    ctx->pc = 0x16A13Cu;
    {
        const bool branch_taken_0x16a13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A13Cu;
        // 0x16a140: 0x24630130  addiu       $v1, $v1, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a13c) {
            ctx->pc = 0x16A128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a128;
        }
    }
    ctx->pc = 0x16A144u;
label_16a144:
    // 0x16a144: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16a144u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a148:
    // 0x16a148: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16a148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a14c:
    // 0x16a14c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x16a14cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a150:
    // 0x16a150: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x16a150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_16a154:
    // 0x16a154: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_16a158:
    if (ctx->pc == 0x16A158u) {
        ctx->pc = 0x16A15Cu;
        goto label_16a15c;
    }
    ctx->pc = 0x16A154u;
    {
        const bool branch_taken_0x16a154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a154) {
            ctx->pc = 0x16A198u;
            goto label_16a198;
        }
    }
    ctx->pc = 0x16A15Cu;
label_16a15c:
    // 0x16a15c: 0x26240048  addiu       $a0, $s1, 0x48
    ctx->pc = 0x16a15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
label_16a160:
    // 0x16a160: 0xc137826  jal         func_4DE098
label_16a164:
    if (ctx->pc == 0x16A164u) {
        ctx->pc = 0x16A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A160u;
        // 0x16a164: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A168u;
        goto label_16a168;
    }
    ctx->pc = 0x16A160u;
    SET_GPR_U32(ctx, 31, 0x16A168u);
    ctx->pc = 0x16A164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A160u;
    // 0x16a164: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x16A160u, 0x16A168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A168u;
label_16a168:
    // 0x16a168: 0xc0e409a  jal         func_390268
label_16a16c:
    if (ctx->pc == 0x16A16Cu) {
        ctx->pc = 0x16A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A168u;
        // 0x16a16c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A170u;
        goto label_16a170;
    }
    ctx->pc = 0x16A168u;
    SET_GPR_U32(ctx, 31, 0x16A170u);
    ctx->pc = 0x16A16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A168u;
    // 0x16a16c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16A168u, 0x16A170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A170u;
label_16a170:
    // 0x16a170: 0x5040fff7  beql        $v0, $zero, . + 4 + (-0x9 << 2)
label_16a174:
    if (ctx->pc == 0x16A174u) {
        ctx->pc = 0x16A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A170u;
        // 0x16a174: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A178u;
        goto label_16a178;
    }
    ctx->pc = 0x16A170u;
    {
        const bool branch_taken_0x16a170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a170) {
            ctx->pc = 0x16A174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A170u;
            // 0x16a174: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a150;
        }
    }
    ctx->pc = 0x16A178u;
label_16a178:
    // 0x16a178: 0xc087502  jal         func_21D408
label_16a17c:
    if (ctx->pc == 0x16A17Cu) {
        ctx->pc = 0x16A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A178u;
        // 0x16a17c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A180u;
        goto label_16a180;
    }
    ctx->pc = 0x16A178u;
    SET_GPR_U32(ctx, 31, 0x16A180u);
    ctx->pc = 0x16A17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A178u;
    // 0x16a17c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x16A178u, 0x16A180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A180u;
label_16a180:
    // 0x16a180: 0x8043002c  lb          $v1, 0x2C($v0)
    ctx->pc = 0x16a180u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 44)));
label_16a184:
    // 0x16a184: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x16a184u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_16a188:
    // 0x16a188: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x16a188u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_16a18c:
    // 0x16a18c: 0x1473fff0  bne         $v1, $s3, . + 4 + (-0x10 << 2)
label_16a190:
    if (ctx->pc == 0x16A190u) {
        ctx->pc = 0x16A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A18Cu;
        // 0x16a190: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A194u;
        goto label_16a194;
    }
    ctx->pc = 0x16A18Cu;
    {
        const bool branch_taken_0x16a18c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x16A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A18Cu;
        // 0x16a190: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a18c) {
            ctx->pc = 0x16A150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a150;
        }
    }
    ctx->pc = 0x16A194u;
label_16a194:
    // 0x16a194: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x16a194u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a198:
    // 0x16a198: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_16a19c:
    if (ctx->pc == 0x16A19Cu) {
        ctx->pc = 0x16A19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A198u;
        // 0x16a19c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A1A0u;
        goto label_16a1a0;
    }
    ctx->pc = 0x16A198u;
    {
        const bool branch_taken_0x16a198 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A198u;
        // 0x16a19c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a198) {
            ctx->pc = 0x16A1ACu;
            goto label_16a1ac;
        }
    }
    ctx->pc = 0x16A1A0u;
label_16a1a0:
    // 0x16a1a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a1a4:
    // 0x16a1a4: 0xa22200db  sb          $v0, 0xDB($s1)
    ctx->pc = 0x16a1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 219), (uint8_t)GPR_U32(ctx, 2));
label_16a1a8:
    // 0x16a1a8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x16a1a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16a1ac:
    // 0x16a1ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16a1acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16a1b0:
    // 0x16a1b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16a1b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16a1b4:
    // 0x16a1b4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x16a1b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16a1b8:
    // 0x16a1b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16a1bc:
    // 0x16a1bc: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x16a1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16a1c0:
    // 0x16a1c0: 0x3e00008  jr          $ra
label_16a1c4:
    if (ctx->pc == 0x16A1C4u) {
        ctx->pc = 0x16A1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A1C0u;
        // 0x16a1c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A1C8u;
        goto label_fallthrough_0x16a1c0;
    }
    ctx->pc = 0x16A1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A1C0u;
        // 0x16a1c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A1C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16a1c0:
    ctx->pc = 0x16A1C8u;
}
