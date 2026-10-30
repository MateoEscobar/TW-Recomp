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

// Function: sub_0011DD78
// Address: 0x11dd78 - 0x11de58
void sub_0011DD78_0x11dd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DD78_0x11dd78");
#endif

    switch (ctx->pc) {
        case 0x11dd78u: goto label_11dd78;
        case 0x11dd7cu: goto label_11dd7c;
        case 0x11dd80u: goto label_11dd80;
        case 0x11dd84u: goto label_11dd84;
        case 0x11dd88u: goto label_11dd88;
        case 0x11dd8cu: goto label_11dd8c;
        case 0x11dd90u: goto label_11dd90;
        case 0x11dd94u: goto label_11dd94;
        case 0x11dd98u: goto label_11dd98;
        case 0x11dd9cu: goto label_11dd9c;
        case 0x11dda0u: goto label_11dda0;
        case 0x11dda4u: goto label_11dda4;
        case 0x11dda8u: goto label_11dda8;
        case 0x11ddacu: goto label_11ddac;
        case 0x11ddb0u: goto label_11ddb0;
        case 0x11ddb4u: goto label_11ddb4;
        case 0x11ddb8u: goto label_11ddb8;
        case 0x11ddbcu: goto label_11ddbc;
        case 0x11ddc0u: goto label_11ddc0;
        case 0x11ddc4u: goto label_11ddc4;
        case 0x11ddc8u: goto label_11ddc8;
        case 0x11ddccu: goto label_11ddcc;
        case 0x11ddd0u: goto label_11ddd0;
        case 0x11ddd4u: goto label_11ddd4;
        case 0x11ddd8u: goto label_11ddd8;
        case 0x11dddcu: goto label_11dddc;
        case 0x11dde0u: goto label_11dde0;
        case 0x11dde4u: goto label_11dde4;
        case 0x11dde8u: goto label_11dde8;
        case 0x11ddecu: goto label_11ddec;
        case 0x11ddf0u: goto label_11ddf0;
        case 0x11ddf4u: goto label_11ddf4;
        case 0x11ddf8u: goto label_11ddf8;
        case 0x11ddfcu: goto label_11ddfc;
        case 0x11de00u: goto label_11de00;
        case 0x11de04u: goto label_11de04;
        case 0x11de08u: goto label_11de08;
        case 0x11de0cu: goto label_11de0c;
        case 0x11de10u: goto label_11de10;
        case 0x11de14u: goto label_11de14;
        case 0x11de18u: goto label_11de18;
        case 0x11de1cu: goto label_11de1c;
        case 0x11de20u: goto label_11de20;
        case 0x11de24u: goto label_11de24;
        case 0x11de28u: goto label_11de28;
        case 0x11de2cu: goto label_11de2c;
        case 0x11de30u: goto label_11de30;
        case 0x11de34u: goto label_11de34;
        case 0x11de38u: goto label_11de38;
        case 0x11de3cu: goto label_11de3c;
        case 0x11de40u: goto label_11de40;
        case 0x11de44u: goto label_11de44;
        case 0x11de48u: goto label_11de48;
        case 0x11de4cu: goto label_11de4c;
        case 0x11de50u: goto label_11de50;
        case 0x11de54u: goto label_11de54;
        default: break;
    }

    ctx->pc = 0x11dd78u;

label_11dd78:
    // 0x11dd78: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11dd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_11dd7c:
    // 0x11dd7c: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x11dd7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_11dd80:
    // 0x11dd80: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x11dd80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_11dd84:
    // 0x11dd84: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x11dd84u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_11dd88:
    // 0x11dd88: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x11dd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_11dd8c:
    // 0x11dd8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11dd8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11dd90:
    // 0x11dd90: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11dd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_11dd94:
    // 0x11dd94: 0xc047e6c  jal         func_11F9B0
label_11dd98:
    if (ctx->pc == 0x11DD98u) {
        ctx->pc = 0x11DD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD94u;
        // 0x11dd98: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DD9Cu;
        goto label_11dd9c;
    }
    ctx->pc = 0x11DD94u;
    SET_GPR_U32(ctx, 31, 0x11DD9Cu);
    ctx->pc = 0x11DD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DD94u;
    // 0x11dd98: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x11DD94u, 0x11DD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DD9Cu;
label_11dd9c:
    // 0x11dd9c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_11dda0:
    if (ctx->pc == 0x11DDA0u) {
        ctx->pc = 0x11DDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD9Cu;
        // 0x11dda0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DDA4u;
        goto label_11dda4;
    }
    ctx->pc = 0x11DD9Cu;
    {
        const bool branch_taken_0x11dd9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD9Cu;
        // 0x11dda0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd9c) {
            ctx->pc = 0x11DDC4u;
            goto label_11ddc4;
        }
    }
    ctx->pc = 0x11DDA4u;
label_11dda4:
    // 0x11dda4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x11dda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_11dda8:
    // 0x11dda8: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x11dda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_11ddac:
    // 0x11ddac: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x11ddacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_11ddb0:
    // 0x11ddb0: 0xc0e4060  jal         func_390180
label_11ddb4:
    if (ctx->pc == 0x11DDB4u) {
        ctx->pc = 0x11DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DDB0u;
        // 0x11ddb4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DDB8u;
        goto label_11ddb8;
    }
    ctx->pc = 0x11DDB0u;
    SET_GPR_U32(ctx, 31, 0x11DDB8u);
    ctx->pc = 0x11DDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DDB0u;
    // 0x11ddb4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x11DDB0u, 0x11DDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DDB8u;
label_11ddb8:
    // 0x11ddb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11ddb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11ddbc:
    // 0x11ddbc: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_11ddc0:
    if (ctx->pc == 0x11DDC0u) {
        ctx->pc = 0x11DDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DDBCu;
        // 0x11ddc0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DDC4u;
        goto label_11ddc4;
    }
    ctx->pc = 0x11DDBCu;
    {
        const bool branch_taken_0x11ddbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ddbc) {
            ctx->pc = 0x11DDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DDBCu;
            // 0x11ddc0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DDCCu;
            goto label_11ddcc;
        }
    }
    ctx->pc = 0x11DDC4u;
label_11ddc4:
    // 0x11ddc4: 0x1000001d  b           . + 4 + (0x1D << 2)
label_11ddc8:
    if (ctx->pc == 0x11DDC8u) {
        ctx->pc = 0x11DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DDC4u;
        // 0x11ddc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DDCCu;
        goto label_11ddcc;
    }
    ctx->pc = 0x11DDC4u;
    {
        const bool branch_taken_0x11ddc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DDC4u;
        // 0x11ddc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ddc4) {
            ctx->pc = 0x11DE3Cu;
            goto label_11de3c;
        }
    }
    ctx->pc = 0x11DDCCu;
label_11ddcc:
    // 0x11ddcc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x11ddccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_11ddd0:
    // 0x11ddd0: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x11ddd0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_11ddd4:
    // 0x11ddd4: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x11ddd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_11ddd8:
    // 0x11ddd8: 0x60f809  jalr        $v1
label_11dddc:
    if (ctx->pc == 0x11DDDCu) {
        ctx->pc = 0x11DDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DDD8u;
        // 0x11dddc: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DDE0u;
        goto label_11dde0;
    }
    ctx->pc = 0x11DDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11DDE0u);
        ctx->pc = 0x11DDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DDD8u;
        // 0x11dddc: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DDD8u, 0x11DDE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11DDE0u;
label_11dde0:
    // 0x11dde0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x11dde0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11dde4:
    // 0x11dde4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x11dde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_11dde8:
    // 0x11dde8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x11dde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11ddec:
    // 0x11ddec: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x11ddecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_11ddf0:
    // 0x11ddf0: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x11ddf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_11ddf4:
    // 0x11ddf4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x11ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_11ddf8:
    // 0x11ddf8: 0x40f809  jalr        $v0
label_11ddfc:
    if (ctx->pc == 0x11DDFCu) {
        ctx->pc = 0x11DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DDF8u;
        // 0x11ddfc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DE00u;
        goto label_11de00;
    }
    ctx->pc = 0x11DDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11DE00u);
        ctx->pc = 0x11DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DDF8u;
        // 0x11ddfc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DDF8u, 0x11DE00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11DE00u;
label_11de00:
    // 0x11de00: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x11de00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_11de04:
    // 0x11de04: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x11de04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_11de08:
    // 0x11de08: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x11de08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_11de0c:
    // 0x11de0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11de0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11de10:
    // 0x11de10: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_11de14:
    if (ctx->pc == 0x11DE14u) {
        ctx->pc = 0x11DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DE10u;
        // 0x11de14: 0x4600a000  add.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DE18u;
        goto label_11de18;
    }
    ctx->pc = 0x11DE10u;
    {
        const bool branch_taken_0x11de10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11de10) {
            ctx->pc = 0x11DE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DE10u;
            // 0x11de14: 0x4600a000  add.s       $f0, $f20, $f0 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DE28u;
            goto label_11de28;
        }
    }
    ctx->pc = 0x11DE18u;
label_11de18:
    // 0x11de18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11de18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11de1c:
    // 0x11de1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11de1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11de20:
    // 0x11de20: 0x0  nop
    ctx->pc = 0x11de20u;
    // NOP
label_11de24:
    // 0x11de24: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x11de24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_11de28:
    // 0x11de28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11de28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11de2c:
    // 0x11de2c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x11de2cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_11de30:
    // 0x11de30: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x11de30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_11de34:
    // 0x11de34: 0xc0480ba  jal         func_1202E8
label_11de38:
    if (ctx->pc == 0x11DE38u) {
        ctx->pc = 0x11DE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DE34u;
        // 0x11de38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DE3Cu;
        goto label_11de3c;
    }
    ctx->pc = 0x11DE34u;
    SET_GPR_U32(ctx, 31, 0x11DE3Cu);
    ctx->pc = 0x11DE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DE34u;
    // 0x11de38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1202E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1202E8u, 0x11DE34u, 0x11DE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DE3Cu;
label_11de3c:
    // 0x11de3c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x11de3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_11de40:
    // 0x11de40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11de40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_11de44:
    // 0x11de44: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x11de44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_11de48:
    // 0x11de48: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x11de48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_11de4c:
    // 0x11de4c: 0x3e00008  jr          $ra
label_11de50:
    if (ctx->pc == 0x11DE50u) {
        ctx->pc = 0x11DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DE4Cu;
        // 0x11de50: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DE54u;
        goto label_11de54;
    }
    ctx->pc = 0x11DE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DE4Cu;
        // 0x11de50: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DE54u;
label_11de54:
    // 0x11de54: 0x0  nop
    ctx->pc = 0x11de54u;
    // NOP
    ctx->pc = 0x11de58u;
}
