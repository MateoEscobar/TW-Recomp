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

// Function: sub_0011BE18
// Address: 0x11be18 - 0x11bfa8
void sub_0011BE18_0x11be18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BE18_0x11be18");
#endif

    switch (ctx->pc) {
        case 0x11be18u: goto label_11be18;
        case 0x11be1cu: goto label_11be1c;
        case 0x11be20u: goto label_11be20;
        case 0x11be24u: goto label_11be24;
        case 0x11be28u: goto label_11be28;
        case 0x11be2cu: goto label_11be2c;
        case 0x11be30u: goto label_11be30;
        case 0x11be34u: goto label_11be34;
        case 0x11be38u: goto label_11be38;
        case 0x11be3cu: goto label_11be3c;
        case 0x11be40u: goto label_11be40;
        case 0x11be44u: goto label_11be44;
        case 0x11be48u: goto label_11be48;
        case 0x11be4cu: goto label_11be4c;
        case 0x11be50u: goto label_11be50;
        case 0x11be54u: goto label_11be54;
        case 0x11be58u: goto label_11be58;
        case 0x11be5cu: goto label_11be5c;
        case 0x11be60u: goto label_11be60;
        case 0x11be64u: goto label_11be64;
        case 0x11be68u: goto label_11be68;
        case 0x11be6cu: goto label_11be6c;
        case 0x11be70u: goto label_11be70;
        case 0x11be74u: goto label_11be74;
        case 0x11be78u: goto label_11be78;
        case 0x11be7cu: goto label_11be7c;
        case 0x11be80u: goto label_11be80;
        case 0x11be84u: goto label_11be84;
        case 0x11be88u: goto label_11be88;
        case 0x11be8cu: goto label_11be8c;
        case 0x11be90u: goto label_11be90;
        case 0x11be94u: goto label_11be94;
        case 0x11be98u: goto label_11be98;
        case 0x11be9cu: goto label_11be9c;
        case 0x11bea0u: goto label_11bea0;
        case 0x11bea4u: goto label_11bea4;
        case 0x11bea8u: goto label_11bea8;
        case 0x11beacu: goto label_11beac;
        case 0x11beb0u: goto label_11beb0;
        case 0x11beb4u: goto label_11beb4;
        case 0x11beb8u: goto label_11beb8;
        case 0x11bebcu: goto label_11bebc;
        case 0x11bec0u: goto label_11bec0;
        case 0x11bec4u: goto label_11bec4;
        case 0x11bec8u: goto label_11bec8;
        case 0x11beccu: goto label_11becc;
        case 0x11bed0u: goto label_11bed0;
        case 0x11bed4u: goto label_11bed4;
        case 0x11bed8u: goto label_11bed8;
        case 0x11bedcu: goto label_11bedc;
        case 0x11bee0u: goto label_11bee0;
        case 0x11bee4u: goto label_11bee4;
        case 0x11bee8u: goto label_11bee8;
        case 0x11beecu: goto label_11beec;
        case 0x11bef0u: goto label_11bef0;
        case 0x11bef4u: goto label_11bef4;
        case 0x11bef8u: goto label_11bef8;
        case 0x11befcu: goto label_11befc;
        case 0x11bf00u: goto label_11bf00;
        case 0x11bf04u: goto label_11bf04;
        case 0x11bf08u: goto label_11bf08;
        case 0x11bf0cu: goto label_11bf0c;
        case 0x11bf10u: goto label_11bf10;
        case 0x11bf14u: goto label_11bf14;
        case 0x11bf18u: goto label_11bf18;
        case 0x11bf1cu: goto label_11bf1c;
        case 0x11bf20u: goto label_11bf20;
        case 0x11bf24u: goto label_11bf24;
        case 0x11bf28u: goto label_11bf28;
        case 0x11bf2cu: goto label_11bf2c;
        case 0x11bf30u: goto label_11bf30;
        case 0x11bf34u: goto label_11bf34;
        case 0x11bf38u: goto label_11bf38;
        case 0x11bf3cu: goto label_11bf3c;
        case 0x11bf40u: goto label_11bf40;
        case 0x11bf44u: goto label_11bf44;
        case 0x11bf48u: goto label_11bf48;
        case 0x11bf4cu: goto label_11bf4c;
        case 0x11bf50u: goto label_11bf50;
        case 0x11bf54u: goto label_11bf54;
        case 0x11bf58u: goto label_11bf58;
        case 0x11bf5cu: goto label_11bf5c;
        case 0x11bf60u: goto label_11bf60;
        case 0x11bf64u: goto label_11bf64;
        case 0x11bf68u: goto label_11bf68;
        case 0x11bf6cu: goto label_11bf6c;
        case 0x11bf70u: goto label_11bf70;
        case 0x11bf74u: goto label_11bf74;
        case 0x11bf78u: goto label_11bf78;
        case 0x11bf7cu: goto label_11bf7c;
        case 0x11bf80u: goto label_11bf80;
        case 0x11bf84u: goto label_11bf84;
        case 0x11bf88u: goto label_11bf88;
        case 0x11bf8cu: goto label_11bf8c;
        case 0x11bf90u: goto label_11bf90;
        case 0x11bf94u: goto label_11bf94;
        case 0x11bf98u: goto label_11bf98;
        case 0x11bf9cu: goto label_11bf9c;
        case 0x11bfa0u: goto label_11bfa0;
        case 0x11bfa4u: goto label_11bfa4;
        default: break;
    }

    ctx->pc = 0x11be18u;

label_11be18:
    // 0x11be18: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x11be18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_11be1c:
    // 0x11be1c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x11be1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_11be20:
    // 0x11be20: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x11be20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_11be24:
    // 0x11be24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11be24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11be28:
    // 0x11be28: 0xe7b90088  swc1        $f25, 0x88($sp)
    ctx->pc = 0x11be28u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_11be2c:
    // 0x11be2c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x11be2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_11be30:
    // 0x11be30: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x11be30u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_11be34:
    // 0x11be34: 0x46008e46  mov.s       $f25, $f17
    ctx->pc = 0x11be34u;
    ctx->f[25] = FPU_MOV_S(ctx->f[17]);
label_11be38:
    // 0x11be38: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x11be38u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_11be3c:
    // 0x11be3c: 0x46008606  mov.s       $f24, $f16
    ctx->pc = 0x11be3cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[16]);
label_11be40:
    // 0x11be40: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x11be40u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_11be44:
    // 0x11be44: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x11be44u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
label_11be48:
    // 0x11be48: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x11be48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_11be4c:
    // 0x11be4c: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x11be4cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_11be50:
    // 0x11be50: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x11be50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_11be54:
    // 0x11be54: 0x46007d46  mov.s       $f21, $f15
    ctx->pc = 0x11be54u;
    ctx->f[21] = FPU_MOV_S(ctx->f[15]);
label_11be58:
    // 0x11be58: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x11be58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_11be5c:
    // 0x11be5c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x11be5cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_11be60:
    // 0x11be60: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11be60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_11be64:
    // 0x11be64: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x11be64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_11be68:
    // 0x11be68: 0xc0e4060  jal         func_390180
label_11be6c:
    if (ctx->pc == 0x11BE6Cu) {
        ctx->pc = 0x11BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE68u;
        // 0x11be6c: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BE70u;
        goto label_11be70;
    }
    ctx->pc = 0x11BE68u;
    SET_GPR_U32(ctx, 31, 0x11BE70u);
    ctx->pc = 0x11BE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE68u;
    // 0x11be6c: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x11BE68u, 0x11BE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE70u;
label_11be70:
    // 0x11be70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11be70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11be74:
    // 0x11be74: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_11be78:
    if (ctx->pc == 0x11BE78u) {
        ctx->pc = 0x11BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE74u;
        // 0x11be78: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BE7Cu;
        goto label_11be7c;
    }
    ctx->pc = 0x11BE74u;
    {
        const bool branch_taken_0x11be74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE74u;
        // 0x11be78: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be74) {
            ctx->pc = 0x11BE94u;
            goto label_11be94;
        }
    }
    ctx->pc = 0x11BE7Cu;
label_11be7c:
    // 0x11be7c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x11be7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11be80:
    // 0x11be80: 0xc04786c  jal         func_11E1B0
label_11be84:
    if (ctx->pc == 0x11BE84u) {
        ctx->pc = 0x11BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE80u;
        // 0x11be84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BE88u;
        goto label_11be88;
    }
    ctx->pc = 0x11BE80u;
    SET_GPR_U32(ctx, 31, 0x11BE88u);
    ctx->pc = 0x11BE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE80u;
    // 0x11be84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B0u, 0x11BE80u, 0x11BE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE88u;
label_11be88:
    // 0x11be88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11be88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11be8c:
    // 0x11be8c: 0x56400004  bnel        $s2, $zero, . + 4 + (0x4 << 2)
label_11be90:
    if (ctx->pc == 0x11BE90u) {
        ctx->pc = 0x11BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE8Cu;
        // 0x11be90: 0xc6030008  lwc1        $f3, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BE94u;
        goto label_11be94;
    }
    ctx->pc = 0x11BE8Cu;
    {
        const bool branch_taken_0x11be8c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x11be8c) {
            ctx->pc = 0x11BE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11BE8Cu;
            // 0x11be90: 0xc6030008  lwc1        $f3, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BEA0u;
            goto label_11bea0;
        }
    }
    ctx->pc = 0x11BE94u;
label_11be94:
    // 0x11be94: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x11be94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_11be98:
    // 0x11be98: 0x10000036  b           . + 4 + (0x36 << 2)
label_11be9c:
    if (ctx->pc == 0x11BE9Cu) {
        ctx->pc = 0x11BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE98u;
        // 0x11be9c: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BEA0u;
        goto label_11bea0;
    }
    ctx->pc = 0x11BE98u;
    {
        const bool branch_taken_0x11be98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE98u;
        // 0x11be9c: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be98) {
            ctx->pc = 0x11BF74u;
            goto label_11bf74;
        }
    }
    ctx->pc = 0x11BEA0u;
label_11bea0:
    // 0x11bea0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11bea0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_11bea4:
    // 0x11bea4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x11bea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11bea8:
    // 0x11bea8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x11bea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11beac:
    // 0x11beac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11beacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11beb0:
    // 0x11beb0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11beb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_11beb4:
    // 0x11beb4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x11beb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_11beb8:
    // 0x11beb8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x11beb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_11bebc:
    // 0x11bebc: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x11bebcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_11bec0:
    // 0x11bec0: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x11bec0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_11bec4:
    // 0x11bec4: 0xae5101e0  sw          $s1, 0x1E0($s2)
    ctx->pc = 0x11bec4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 480), GPR_U32(ctx, 17));
label_11bec8:
    // 0x11bec8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x11bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11becc:
    // 0x11becc: 0x84440190  lh          $a0, 0x190($v0)
    ctx->pc = 0x11beccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 400)));
label_11bed0:
    // 0x11bed0: 0x8c430194  lw          $v1, 0x194($v0)
    ctx->pc = 0x11bed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
label_11bed4:
    // 0x11bed4: 0x60f809  jalr        $v1
label_11bed8:
    if (ctx->pc == 0x11BED8u) {
        ctx->pc = 0x11BED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BED4u;
        // 0x11bed8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BEDCu;
        goto label_11bedc;
    }
    ctx->pc = 0x11BED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11BEDCu);
        ctx->pc = 0x11BED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BED4u;
        // 0x11bed8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BED4u, 0x11BEDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BEDCu;
label_11bedc:
    // 0x11bedc: 0xe6560210  swc1        $f22, 0x210($s2)
    ctx->pc = 0x11bedcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 528), bits); }
label_11bee0:
    // 0x11bee0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11bee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11bee4:
    // 0x11bee4: 0xe6570214  swc1        $f23, 0x214($s2)
    ctx->pc = 0x11bee4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 532), bits); }
label_11bee8:
    // 0x11bee8: 0xc0481ec  jal         func_1207B0
label_11beec:
    if (ctx->pc == 0x11BEECu) {
        ctx->pc = 0x11BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BEE8u;
        // 0x11beec: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BEF0u;
        goto label_11bef0;
    }
    ctx->pc = 0x11BEE8u;
    SET_GPR_U32(ctx, 31, 0x11BEF0u);
    ctx->pc = 0x11BEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BEE8u;
    // 0x11beec: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1207B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1207B0u, 0x11BEE8u, 0x11BEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BEF0u;
label_11bef0:
    // 0x11bef0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x11bef0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11bef4:
    // 0x11bef4: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x11bef4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_11bef8:
    // 0x11bef8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11bef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11befc:
    // 0x11befc: 0x7e420220  sq          $v0, 0x220($s2)
    ctx->pc = 0x11befcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 544), GPR_VEC(ctx, 2));
label_11bf00:
    // 0x11bf00: 0x846401a0  lh          $a0, 0x1A0($v1)
    ctx->pc = 0x11bf00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 416)));
label_11bf04:
    // 0x11bf04: 0x8c6201a4  lw          $v0, 0x1A4($v1)
    ctx->pc = 0x11bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 420)));
label_11bf08:
    // 0x11bf08: 0x40f809  jalr        $v0
label_11bf0c:
    if (ctx->pc == 0x11BF0Cu) {
        ctx->pc = 0x11BF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF08u;
        // 0x11bf0c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BF10u;
        goto label_11bf10;
    }
    ctx->pc = 0x11BF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11BF10u);
        ctx->pc = 0x11BF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF08u;
        // 0x11bf0c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BF08u, 0x11BF10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BF10u;
label_11bf10:
    // 0x11bf10: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x11bf10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11bf14:
    // 0x11bf14: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x11bf14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
label_11bf18:
    // 0x11bf18: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11bf18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11bf1c:
    // 0x11bf1c: 0x84a401a8  lh          $a0, 0x1A8($a1)
    ctx->pc = 0x11bf1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 424)));
label_11bf20:
    // 0x11bf20: 0x460ccb29  min.s       $f12, $f25, $f12
    ctx->pc = 0x11bf20u;
    ctx->f[12] = std::min(ctx->f[25], ctx->f[12]);
label_11bf24:
    // 0x11bf24: 0x8ca301ac  lw          $v1, 0x1AC($a1)
    ctx->pc = 0x11bf24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 428)));
label_11bf28:
    // 0x11bf28: 0x60f809  jalr        $v1
label_11bf2c:
    if (ctx->pc == 0x11BF2Cu) {
        ctx->pc = 0x11BF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF28u;
        // 0x11bf2c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BF30u;
        goto label_11bf30;
    }
    ctx->pc = 0x11BF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11BF30u);
        ctx->pc = 0x11BF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF28u;
        // 0x11bf2c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BF28u, 0x11BF30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BF30u;
label_11bf30:
    // 0x11bf30: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x11bf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11bf34:
    // 0x11bf34: 0x845001b0  lh          $s0, 0x1B0($v0)
    ctx->pc = 0x11bf34u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 432)));
label_11bf38:
    // 0x11bf38: 0x245101b0  addiu       $s1, $v0, 0x1B0
    ctx->pc = 0x11bf38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
label_11bf3c:
    // 0x11bf3c: 0x84440208  lh          $a0, 0x208($v0)
    ctx->pc = 0x11bf3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 520)));
label_11bf40:
    // 0x11bf40: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x11bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_11bf44:
    // 0x11bf44: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x11bf44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_11bf48:
    // 0x11bf48: 0x60f809  jalr        $v1
label_11bf4c:
    if (ctx->pc == 0x11BF4Cu) {
        ctx->pc = 0x11BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF48u;
        // 0x11bf4c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BF50u;
        goto label_11bf50;
    }
    ctx->pc = 0x11BF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11BF50u);
        ctx->pc = 0x11BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF48u;
        // 0x11bf4c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BF48u, 0x11BF50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BF50u;
label_11bf50:
    // 0x11bf50: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x11bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_11bf54:
    // 0x11bf54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bf54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11bf58:
    // 0x11bf58: 0x40f809  jalr        $v0
label_11bf5c:
    if (ctx->pc == 0x11BF5Cu) {
        ctx->pc = 0x11BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF58u;
        // 0x11bf5c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BF60u;
        goto label_11bf60;
    }
    ctx->pc = 0x11BF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11BF60u);
        ctx->pc = 0x11BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF58u;
        // 0x11bf5c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BF58u, 0x11BF60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BF60u;
label_11bf60:
    // 0x11bf60: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11bf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11bf64:
    // 0x11bf64: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x11bf64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_11bf68:
    // 0x11bf68: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x11bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_11bf6c:
    // 0x11bf6c: 0x40f809  jalr        $v0
label_11bf70:
    if (ctx->pc == 0x11BF70u) {
        ctx->pc = 0x11BF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF6Cu;
        // 0x11bf70: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BF74u;
        goto label_11bf74;
    }
    ctx->pc = 0x11BF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11BF74u);
        ctx->pc = 0x11BF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF6Cu;
        // 0x11bf70: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BF6Cu, 0x11BF74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BF74u;
label_11bf74:
    // 0x11bf74: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x11bf74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_11bf78:
    // 0x11bf78: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x11bf78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11bf7c:
    // 0x11bf7c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x11bf7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11bf80:
    // 0x11bf80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11bf80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11bf84:
    // 0x11bf84: 0xc7b90088  lwc1        $f25, 0x88($sp)
    ctx->pc = 0x11bf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_11bf88:
    // 0x11bf88: 0xc7b80080  lwc1        $f24, 0x80($sp)
    ctx->pc = 0x11bf88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_11bf8c:
    // 0x11bf8c: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x11bf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_11bf90:
    // 0x11bf90: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x11bf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_11bf94:
    // 0x11bf94: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x11bf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_11bf98:
    // 0x11bf98: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x11bf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_11bf9c:
    // 0x11bf9c: 0x3e00008  jr          $ra
label_11bfa0:
    if (ctx->pc == 0x11BFA0u) {
        ctx->pc = 0x11BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF9Cu;
        // 0x11bfa0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BFA4u;
        goto label_11bfa4;
    }
    ctx->pc = 0x11BF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF9Cu;
        // 0x11bfa0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BFA4u;
label_11bfa4:
    // 0x11bfa4: 0x0  nop
    ctx->pc = 0x11bfa4u;
    // NOP
    ctx->pc = 0x11bfa8u;
}
