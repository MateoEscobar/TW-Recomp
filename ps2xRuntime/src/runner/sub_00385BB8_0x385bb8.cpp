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

// Function: sub_00385BB8
// Address: 0x385bb8 - 0x385c90
void sub_00385BB8_0x385bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385BB8_0x385bb8");
#endif

    switch (ctx->pc) {
        case 0x385bb8u: goto label_385bb8;
        case 0x385bbcu: goto label_385bbc;
        case 0x385bc0u: goto label_385bc0;
        case 0x385bc4u: goto label_385bc4;
        case 0x385bc8u: goto label_385bc8;
        case 0x385bccu: goto label_385bcc;
        case 0x385bd0u: goto label_385bd0;
        case 0x385bd4u: goto label_385bd4;
        case 0x385bd8u: goto label_385bd8;
        case 0x385bdcu: goto label_385bdc;
        case 0x385be0u: goto label_385be0;
        case 0x385be4u: goto label_385be4;
        case 0x385be8u: goto label_385be8;
        case 0x385becu: goto label_385bec;
        case 0x385bf0u: goto label_385bf0;
        case 0x385bf4u: goto label_385bf4;
        case 0x385bf8u: goto label_385bf8;
        case 0x385bfcu: goto label_385bfc;
        case 0x385c00u: goto label_385c00;
        case 0x385c04u: goto label_385c04;
        case 0x385c08u: goto label_385c08;
        case 0x385c0cu: goto label_385c0c;
        case 0x385c10u: goto label_385c10;
        case 0x385c14u: goto label_385c14;
        case 0x385c18u: goto label_385c18;
        case 0x385c1cu: goto label_385c1c;
        case 0x385c20u: goto label_385c20;
        case 0x385c24u: goto label_385c24;
        case 0x385c28u: goto label_385c28;
        case 0x385c2cu: goto label_385c2c;
        case 0x385c30u: goto label_385c30;
        case 0x385c34u: goto label_385c34;
        case 0x385c38u: goto label_385c38;
        case 0x385c3cu: goto label_385c3c;
        case 0x385c40u: goto label_385c40;
        case 0x385c44u: goto label_385c44;
        case 0x385c48u: goto label_385c48;
        case 0x385c4cu: goto label_385c4c;
        case 0x385c50u: goto label_385c50;
        case 0x385c54u: goto label_385c54;
        case 0x385c58u: goto label_385c58;
        case 0x385c5cu: goto label_385c5c;
        case 0x385c60u: goto label_385c60;
        case 0x385c64u: goto label_385c64;
        case 0x385c68u: goto label_385c68;
        case 0x385c6cu: goto label_385c6c;
        case 0x385c70u: goto label_385c70;
        case 0x385c74u: goto label_385c74;
        case 0x385c78u: goto label_385c78;
        case 0x385c7cu: goto label_385c7c;
        case 0x385c80u: goto label_385c80;
        case 0x385c84u: goto label_385c84;
        case 0x385c88u: goto label_385c88;
        case 0x385c8cu: goto label_385c8c;
        default: break;
    }

    ctx->pc = 0x385bb8u;

label_385bb8:
    // 0x385bb8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x385bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_385bbc:
    // 0x385bbc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x385bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_385bc0:
    // 0x385bc0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x385bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_385bc4:
    // 0x385bc4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x385bc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_385bc8:
    // 0x385bc8: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x385bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_385bcc:
    // 0x385bcc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x385bccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_385bd0:
    // 0x385bd0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x385bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_385bd4:
    // 0x385bd4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x385bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_385bd8:
    // 0x385bd8: 0xc0e4060  jal         func_390180
label_385bdc:
    if (ctx->pc == 0x385BDCu) {
        ctx->pc = 0x385BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385BD8u;
        // 0x385bdc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385BE0u;
        goto label_385be0;
    }
    ctx->pc = 0x385BD8u;
    SET_GPR_U32(ctx, 31, 0x385BE0u);
    ctx->pc = 0x385BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385BD8u;
    // 0x385bdc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x385BD8u, 0x385BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385BE0u;
label_385be0:
    // 0x385be0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x385be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_385be4:
    // 0x385be4: 0x52000025  beql        $s0, $zero, . + 4 + (0x25 << 2)
label_385be8:
    if (ctx->pc == 0x385BE8u) {
        ctx->pc = 0x385BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385BE4u;
        // 0x385be8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385BECu;
        goto label_385bec;
    }
    ctx->pc = 0x385BE4u;
    {
        const bool branch_taken_0x385be4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x385be4) {
            ctx->pc = 0x385BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385BE4u;
            // 0x385be8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385C7Cu;
            goto label_385c7c;
        }
    }
    ctx->pc = 0x385BECu;
label_385bec:
    // 0x385bec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x385becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_385bf0:
    // 0x385bf0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x385bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_385bf4:
    // 0x385bf4: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x385bf4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_385bf8:
    // 0x385bf8: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x385bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_385bfc:
    // 0x385bfc: 0x60f809  jalr        $v1
label_385c00:
    if (ctx->pc == 0x385C00u) {
        ctx->pc = 0x385C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385BFCu;
        // 0x385c00: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385C04u;
        goto label_385c04;
    }
    ctx->pc = 0x385BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x385C04u);
        ctx->pc = 0x385C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385BFCu;
        // 0x385c00: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385BFCu, 0x385C04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385C04u;
label_385c04:
    // 0x385c04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x385c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_385c08:
    // 0x385c08: 0x5242000d  beql        $s2, $v0, . + 4 + (0xD << 2)
label_385c0c:
    if (ctx->pc == 0x385C0Cu) {
        ctx->pc = 0x385C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385C08u;
        // 0x385c0c: 0xc6230008  lwc1        $f3, 0x8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x385C10u;
        goto label_385c10;
    }
    ctx->pc = 0x385C08u;
    {
        const bool branch_taken_0x385c08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x385c08) {
            ctx->pc = 0x385C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385C08u;
            // 0x385c0c: 0xc6230008  lwc1        $f3, 0x8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x385C40u;
            goto label_385c40;
        }
    }
    ctx->pc = 0x385C10u;
label_385c10:
    // 0x385c10: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x385c10u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_385c14:
    // 0x385c14: 0x0  nop
    ctx->pc = 0x385c14u;
    // NOP
label_385c18:
    // 0x385c18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x385c18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_385c1c:
    // 0x385c1c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x385c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_385c20:
    // 0x385c20: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x385c20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_385c24:
    // 0x385c24: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x385c24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_385c28:
    // 0x385c28: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x385c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_385c2c:
    // 0x385c2c: 0xc0cd7a8  jal         func_335EA0
label_385c30:
    if (ctx->pc == 0x385C30u) {
        ctx->pc = 0x385C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385C2Cu;
        // 0x385c30: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x385C34u;
        goto label_385c34;
    }
    ctx->pc = 0x385C2Cu;
    SET_GPR_U32(ctx, 31, 0x385C34u);
    ctx->pc = 0x385C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385C2Cu;
    // 0x385c30: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EA0u, 0x385C2Cu, 0x385C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385C34u;
label_385c34:
    // 0x385c34: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x385c34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_385c38:
    // 0x385c38: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x385c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_385c3c:
    // 0x385c3c: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x385c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_385c40:
    // 0x385c40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x385c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_385c44:
    // 0x385c44: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x385c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_385c48:
    // 0x385c48: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x385c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_385c4c:
    // 0x385c4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x385c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_385c50:
    // 0x385c50: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x385c50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_385c54:
    // 0x385c54: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x385c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_385c58:
    // 0x385c58: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x385c58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_385c5c:
    // 0x385c5c: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x385c5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_385c60:
    // 0x385c60: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x385c60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_385c64:
    // 0x385c64: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x385c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_385c68:
    // 0x385c68: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x385c68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_385c6c:
    // 0x385c6c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x385c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_385c70:
    // 0x385c70: 0x60f809  jalr        $v1
label_385c74:
    if (ctx->pc == 0x385C74u) {
        ctx->pc = 0x385C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385C70u;
        // 0x385c74: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385C78u;
        goto label_385c78;
    }
    ctx->pc = 0x385C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x385C78u);
        ctx->pc = 0x385C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385C70u;
        // 0x385c74: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385C70u, 0x385C78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385C78u;
label_385c78:
    // 0x385c78: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x385c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_385c7c:
    // 0x385c7c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x385c7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_385c80:
    // 0x385c80: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x385c80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_385c84:
    // 0x385c84: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x385c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_385c88:
    // 0x385c88: 0x3e00008  jr          $ra
label_385c8c:
    if (ctx->pc == 0x385C8Cu) {
        ctx->pc = 0x385C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385C88u;
        // 0x385c8c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385C90u;
        goto label_fallthrough_0x385c88;
    }
    ctx->pc = 0x385C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385C88u;
        // 0x385c8c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x385c88:
    ctx->pc = 0x385C90u;
}
