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

// Function: sub_00177FA8
// Address: 0x177fa8 - 0x178098
void sub_00177FA8_0x177fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177FA8_0x177fa8");
#endif

    switch (ctx->pc) {
        case 0x177fa8u: goto label_177fa8;
        case 0x177facu: goto label_177fac;
        case 0x177fb0u: goto label_177fb0;
        case 0x177fb4u: goto label_177fb4;
        case 0x177fb8u: goto label_177fb8;
        case 0x177fbcu: goto label_177fbc;
        case 0x177fc0u: goto label_177fc0;
        case 0x177fc4u: goto label_177fc4;
        case 0x177fc8u: goto label_177fc8;
        case 0x177fccu: goto label_177fcc;
        case 0x177fd0u: goto label_177fd0;
        case 0x177fd4u: goto label_177fd4;
        case 0x177fd8u: goto label_177fd8;
        case 0x177fdcu: goto label_177fdc;
        case 0x177fe0u: goto label_177fe0;
        case 0x177fe4u: goto label_177fe4;
        case 0x177fe8u: goto label_177fe8;
        case 0x177fecu: goto label_177fec;
        case 0x177ff0u: goto label_177ff0;
        case 0x177ff4u: goto label_177ff4;
        case 0x177ff8u: goto label_177ff8;
        case 0x177ffcu: goto label_177ffc;
        case 0x178000u: goto label_178000;
        case 0x178004u: goto label_178004;
        case 0x178008u: goto label_178008;
        case 0x17800cu: goto label_17800c;
        case 0x178010u: goto label_178010;
        case 0x178014u: goto label_178014;
        case 0x178018u: goto label_178018;
        case 0x17801cu: goto label_17801c;
        case 0x178020u: goto label_178020;
        case 0x178024u: goto label_178024;
        case 0x178028u: goto label_178028;
        case 0x17802cu: goto label_17802c;
        case 0x178030u: goto label_178030;
        case 0x178034u: goto label_178034;
        case 0x178038u: goto label_178038;
        case 0x17803cu: goto label_17803c;
        case 0x178040u: goto label_178040;
        case 0x178044u: goto label_178044;
        case 0x178048u: goto label_178048;
        case 0x17804cu: goto label_17804c;
        case 0x178050u: goto label_178050;
        case 0x178054u: goto label_178054;
        case 0x178058u: goto label_178058;
        case 0x17805cu: goto label_17805c;
        case 0x178060u: goto label_178060;
        case 0x178064u: goto label_178064;
        case 0x178068u: goto label_178068;
        case 0x17806cu: goto label_17806c;
        case 0x178070u: goto label_178070;
        case 0x178074u: goto label_178074;
        case 0x178078u: goto label_178078;
        case 0x17807cu: goto label_17807c;
        case 0x178080u: goto label_178080;
        case 0x178084u: goto label_178084;
        case 0x178088u: goto label_178088;
        case 0x17808cu: goto label_17808c;
        case 0x178090u: goto label_178090;
        case 0x178094u: goto label_178094;
        default: break;
    }

    ctx->pc = 0x177fa8u;

label_177fa8:
    // 0x177fa8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x177fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_177fac:
    // 0x177fac: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x177facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_177fb0:
    // 0x177fb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x177fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_177fb4:
    // 0x177fb4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x177fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_177fb8:
    // 0x177fb8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x177fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_177fbc:
    // 0x177fbc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x177fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_177fc0:
    // 0x177fc0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x177fc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177fc4:
    // 0x177fc4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x177fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_177fc8:
    // 0x177fc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_177fcc:
    // 0x177fcc: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x177fccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_177fd0:
    // 0x177fd0: 0xc05d610  jal         func_175840
label_177fd4:
    if (ctx->pc == 0x177FD4u) {
        ctx->pc = 0x177FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177FD0u;
        // 0x177fd4: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x177FD8u;
        goto label_177fd8;
    }
    ctx->pc = 0x177FD0u;
    SET_GPR_U32(ctx, 31, 0x177FD8u);
    ctx->pc = 0x177FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177FD0u;
    // 0x177fd4: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x175840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175840u, 0x177FD0u, 0x177FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177FD8u;
label_177fd8:
    // 0x177fd8: 0x2452ffff  addiu       $s2, $v0, -0x1
    ctx->pc = 0x177fd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_177fdc:
    // 0x177fdc: 0x6400022  bltz        $s2, . + 4 + (0x22 << 2)
label_177fe0:
    if (ctx->pc == 0x177FE0u) {
        ctx->pc = 0x177FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177FDCu;
        // 0x177fe0: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177FE4u;
        goto label_177fe4;
    }
    ctx->pc = 0x177FDCu;
    {
        const bool branch_taken_0x177fdc = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x177FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177FDCu;
        // 0x177fe0: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177fdc) {
            ctx->pc = 0x178068u;
            goto label_178068;
        }
    }
    ctx->pc = 0x177FE4u;
label_177fe4:
    // 0x177fe4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x177fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_177fe8:
    // 0x177fe8: 0x24420304  addiu       $v0, $v0, 0x304
    ctx->pc = 0x177fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 772));
label_177fec:
    // 0x177fec: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x177fecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_177ff0:
    // 0x177ff0: 0x508821  addu        $s1, $v0, $s0
    ctx->pc = 0x177ff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_177ff4:
    // 0x177ff4: 0x0  nop
    ctx->pc = 0x177ff4u;
    // NOP
label_177ff8:
    // 0x177ff8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x177ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_177ffc:
    // 0x177ffc: 0x52000018  beql        $s0, $zero, . + 4 + (0x18 << 2)
label_178000:
    if (ctx->pc == 0x178000u) {
        ctx->pc = 0x178000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177FFCu;
        // 0x178000: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178004u;
        goto label_178004;
    }
    ctx->pc = 0x177FFCu;
    {
        const bool branch_taken_0x177ffc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x177ffc) {
            ctx->pc = 0x178000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177FFCu;
            // 0x178000: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178060u;
            goto label_178060;
        }
    }
    ctx->pc = 0x178004u;
label_178004:
    // 0x178004: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x178004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_178008:
    // 0x178008: 0x54540015  bnel        $v0, $s4, . + 4 + (0x15 << 2)
label_17800c:
    if (ctx->pc == 0x17800Cu) {
        ctx->pc = 0x17800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178008u;
        // 0x17800c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178010u;
        goto label_178010;
    }
    ctx->pc = 0x178008u;
    {
        const bool branch_taken_0x178008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x178008) {
            ctx->pc = 0x17800Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178008u;
            // 0x17800c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178060u;
            goto label_178060;
        }
    }
    ctx->pc = 0x178010u;
label_178010:
    // 0x178010: 0x52600012  beql        $s3, $zero, . + 4 + (0x12 << 2)
label_178014:
    if (ctx->pc == 0x178014u) {
        ctx->pc = 0x178014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178010u;
        // 0x178014: 0x8e330000  lw          $s3, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178018u;
        goto label_178018;
    }
    ctx->pc = 0x178010u;
    {
        const bool branch_taken_0x178010 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x178010) {
            ctx->pc = 0x178014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178010u;
            // 0x178014: 0x8e330000  lw          $s3, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17805Cu;
            goto label_17805c;
        }
    }
    ctx->pc = 0x178018u;
label_178018:
    // 0x178018: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x178018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17801c:
    // 0x17801c: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x17801cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_178020:
    // 0x178020: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x178020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_178024:
    // 0x178024: 0x60f809  jalr        $v1
label_178028:
    if (ctx->pc == 0x178028u) {
        ctx->pc = 0x178028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178024u;
        // 0x178028: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17802Cu;
        goto label_17802c;
    }
    ctx->pc = 0x178024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17802Cu);
        ctx->pc = 0x178028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178024u;
        // 0x178028: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178024u, 0x17802Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17802Cu;
label_17802c:
    // 0x17802c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17802cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_178030:
    // 0x178030: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x178030u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_178034:
    // 0x178034: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x178034u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_178038:
    // 0x178038: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x178038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_17803c:
    // 0x17803c: 0x60f809  jalr        $v1
label_178040:
    if (ctx->pc == 0x178040u) {
        ctx->pc = 0x178040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17803Cu;
        // 0x178040: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178044u;
        goto label_178044;
    }
    ctx->pc = 0x17803Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x178044u);
        ctx->pc = 0x178040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17803Cu;
        // 0x178040: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17803Cu, 0x178044u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x178044u;
label_178044:
    // 0x178044: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x178044u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_178048:
    // 0x178048: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x178048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17804c:
    // 0x17804c: 0x0  nop
    ctx->pc = 0x17804cu;
    // NOP
label_178050:
    // 0x178050: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_178054:
    if (ctx->pc == 0x178054u) {
        ctx->pc = 0x178054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178050u;
        // 0x178054: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178058u;
        goto label_178058;
    }
    ctx->pc = 0x178050u;
    {
        const bool branch_taken_0x178050 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x178050) {
            ctx->pc = 0x178054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178050u;
            // 0x178054: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178060u;
            goto label_178060;
        }
    }
    ctx->pc = 0x178058u;
label_178058:
    // 0x178058: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x178058u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17805c:
    // 0x17805c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x17805cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_178060:
    // 0x178060: 0x641ffe5  bgez        $s2, . + 4 + (-0x1B << 2)
label_178064:
    if (ctx->pc == 0x178064u) {
        ctx->pc = 0x178064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178060u;
        // 0x178064: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178068u;
        goto label_178068;
    }
    ctx->pc = 0x178060u;
    {
        const bool branch_taken_0x178060 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x178064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178060u;
        // 0x178064: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178060) {
            ctx->pc = 0x177FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177ff8;
        }
    }
    ctx->pc = 0x178068u;
label_178068:
    // 0x178068: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x178068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17806c:
    // 0x17806c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x17806cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_178070:
    // 0x178070: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x178070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_178074:
    // 0x178074: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x178074u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_178078:
    // 0x178078: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x178078u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17807c:
    // 0x17807c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x17807cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_178080:
    // 0x178080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_178084:
    // 0x178084: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x178084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_178088:
    // 0x178088: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x178088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_17808c:
    // 0x17808c: 0x3e00008  jr          $ra
label_178090:
    if (ctx->pc == 0x178090u) {
        ctx->pc = 0x178090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17808Cu;
        // 0x178090: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178094u;
        goto label_178094;
    }
    ctx->pc = 0x17808Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17808Cu;
        // 0x178090: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17808Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178094u;
label_178094:
    // 0x178094: 0x0  nop
    ctx->pc = 0x178094u;
    // NOP
    ctx->pc = 0x178098u;
}
