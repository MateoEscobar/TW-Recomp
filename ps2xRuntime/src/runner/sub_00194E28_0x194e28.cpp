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

// Function: sub_00194E28
// Address: 0x194e28 - 0x194fb8
void sub_00194E28_0x194e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194E28_0x194e28");
#endif

    switch (ctx->pc) {
        case 0x194e28u: goto label_194e28;
        case 0x194e2cu: goto label_194e2c;
        case 0x194e30u: goto label_194e30;
        case 0x194e34u: goto label_194e34;
        case 0x194e38u: goto label_194e38;
        case 0x194e3cu: goto label_194e3c;
        case 0x194e40u: goto label_194e40;
        case 0x194e44u: goto label_194e44;
        case 0x194e48u: goto label_194e48;
        case 0x194e4cu: goto label_194e4c;
        case 0x194e50u: goto label_194e50;
        case 0x194e54u: goto label_194e54;
        case 0x194e58u: goto label_194e58;
        case 0x194e5cu: goto label_194e5c;
        case 0x194e60u: goto label_194e60;
        case 0x194e64u: goto label_194e64;
        case 0x194e68u: goto label_194e68;
        case 0x194e6cu: goto label_194e6c;
        case 0x194e70u: goto label_194e70;
        case 0x194e74u: goto label_194e74;
        case 0x194e78u: goto label_194e78;
        case 0x194e7cu: goto label_194e7c;
        case 0x194e80u: goto label_194e80;
        case 0x194e84u: goto label_194e84;
        case 0x194e88u: goto label_194e88;
        case 0x194e8cu: goto label_194e8c;
        case 0x194e90u: goto label_194e90;
        case 0x194e94u: goto label_194e94;
        case 0x194e98u: goto label_194e98;
        case 0x194e9cu: goto label_194e9c;
        case 0x194ea0u: goto label_194ea0;
        case 0x194ea4u: goto label_194ea4;
        case 0x194ea8u: goto label_194ea8;
        case 0x194eacu: goto label_194eac;
        case 0x194eb0u: goto label_194eb0;
        case 0x194eb4u: goto label_194eb4;
        case 0x194eb8u: goto label_194eb8;
        case 0x194ebcu: goto label_194ebc;
        case 0x194ec0u: goto label_194ec0;
        case 0x194ec4u: goto label_194ec4;
        case 0x194ec8u: goto label_194ec8;
        case 0x194eccu: goto label_194ecc;
        case 0x194ed0u: goto label_194ed0;
        case 0x194ed4u: goto label_194ed4;
        case 0x194ed8u: goto label_194ed8;
        case 0x194edcu: goto label_194edc;
        case 0x194ee0u: goto label_194ee0;
        case 0x194ee4u: goto label_194ee4;
        case 0x194ee8u: goto label_194ee8;
        case 0x194eecu: goto label_194eec;
        case 0x194ef0u: goto label_194ef0;
        case 0x194ef4u: goto label_194ef4;
        case 0x194ef8u: goto label_194ef8;
        case 0x194efcu: goto label_194efc;
        case 0x194f00u: goto label_194f00;
        case 0x194f04u: goto label_194f04;
        case 0x194f08u: goto label_194f08;
        case 0x194f0cu: goto label_194f0c;
        case 0x194f10u: goto label_194f10;
        case 0x194f14u: goto label_194f14;
        case 0x194f18u: goto label_194f18;
        case 0x194f1cu: goto label_194f1c;
        case 0x194f20u: goto label_194f20;
        case 0x194f24u: goto label_194f24;
        case 0x194f28u: goto label_194f28;
        case 0x194f2cu: goto label_194f2c;
        case 0x194f30u: goto label_194f30;
        case 0x194f34u: goto label_194f34;
        case 0x194f38u: goto label_194f38;
        case 0x194f3cu: goto label_194f3c;
        case 0x194f40u: goto label_194f40;
        case 0x194f44u: goto label_194f44;
        case 0x194f48u: goto label_194f48;
        case 0x194f4cu: goto label_194f4c;
        case 0x194f50u: goto label_194f50;
        case 0x194f54u: goto label_194f54;
        case 0x194f58u: goto label_194f58;
        case 0x194f5cu: goto label_194f5c;
        case 0x194f60u: goto label_194f60;
        case 0x194f64u: goto label_194f64;
        case 0x194f68u: goto label_194f68;
        case 0x194f6cu: goto label_194f6c;
        case 0x194f70u: goto label_194f70;
        case 0x194f74u: goto label_194f74;
        case 0x194f78u: goto label_194f78;
        case 0x194f7cu: goto label_194f7c;
        case 0x194f80u: goto label_194f80;
        case 0x194f84u: goto label_194f84;
        case 0x194f88u: goto label_194f88;
        case 0x194f8cu: goto label_194f8c;
        case 0x194f90u: goto label_194f90;
        case 0x194f94u: goto label_194f94;
        case 0x194f98u: goto label_194f98;
        case 0x194f9cu: goto label_194f9c;
        case 0x194fa0u: goto label_194fa0;
        case 0x194fa4u: goto label_194fa4;
        case 0x194fa8u: goto label_194fa8;
        case 0x194facu: goto label_194fac;
        case 0x194fb0u: goto label_194fb0;
        case 0x194fb4u: goto label_194fb4;
        default: break;
    }

    ctx->pc = 0x194e28u;

label_194e28:
    // 0x194e28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x194e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_194e2c:
    // 0x194e2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x194e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_194e30:
    // 0x194e30: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x194e30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_194e34:
    // 0x194e34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x194e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_194e38:
    // 0x194e38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_194e3c:
    // 0x194e3c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x194e3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_194e40:
    // 0x194e40: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x194e40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_194e44:
    // 0x194e44: 0xc600044c  lwc1        $f0, 0x44C($s0)
    ctx->pc = 0x194e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_194e48:
    // 0x194e48: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x194e48u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_194e4c:
    // 0x194e4c: 0x0  nop
    ctx->pc = 0x194e4cu;
    // NOP
label_194e50:
    // 0x194e50: 0x45010053  bc1t        . + 4 + (0x53 << 2)
label_194e54:
    if (ctx->pc == 0x194E54u) {
        ctx->pc = 0x194E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E50u;
        // 0x194e54: 0xae05045c  sw          $a1, 0x45C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1116), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E58u;
        goto label_194e58;
    }
    ctx->pc = 0x194E50u;
    {
        const bool branch_taken_0x194e50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x194E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E50u;
        // 0x194e54: 0xae05045c  sw          $a1, 0x45C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1116), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194e50) {
            ctx->pc = 0x194FA0u;
            goto label_194fa0;
        }
    }
    ctx->pc = 0x194E58u;
label_194e58:
    // 0x194e58: 0x8e020458  lw          $v0, 0x458($s0)
    ctx->pc = 0x194e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1112)));
label_194e5c:
    // 0x194e5c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_194e60:
    if (ctx->pc == 0x194E60u) {
        ctx->pc = 0x194E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E5Cu;
        // 0x194e60: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E64u;
        goto label_194e64;
    }
    ctx->pc = 0x194E5Cu;
    {
        const bool branch_taken_0x194e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E5Cu;
        // 0x194e60: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194e5c) {
            ctx->pc = 0x194F08u;
            goto label_194f08;
        }
    }
    ctx->pc = 0x194E64u;
label_194e64:
    // 0x194e64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194e68:
    // 0x194e68: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x194e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_194e6c:
    // 0x194e6c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x194e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_194e70:
    // 0x194e70: 0x846400d0  lh          $a0, 0xD0($v1)
    ctx->pc = 0x194e70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
label_194e74:
    // 0x194e74: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x194e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_194e78:
    // 0x194e78: 0x40f809  jalr        $v0
label_194e7c:
    if (ctx->pc == 0x194E7Cu) {
        ctx->pc = 0x194E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E78u;
        // 0x194e7c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E80u;
        goto label_194e80;
    }
    ctx->pc = 0x194E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194E80u);
        ctx->pc = 0x194E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E78u;
        // 0x194e7c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194E78u, 0x194E80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194E80u;
label_194e80:
    // 0x194e80: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_194e84:
    if (ctx->pc == 0x194E84u) {
        ctx->pc = 0x194E88u;
        goto label_194e88;
    }
    ctx->pc = 0x194E80u;
    {
        const bool branch_taken_0x194e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194e80) {
            ctx->pc = 0x194EC4u;
            goto label_194ec4;
        }
    }
    ctx->pc = 0x194E88u;
label_194e88:
    // 0x194e88: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x194e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_194e8c:
    // 0x194e8c: 0x3c013fd5  lui         $at, 0x3FD5
    ctx->pc = 0x194e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16341 << 16));
label_194e90:
    // 0x194e90: 0x3421551d  ori         $at, $at, 0x551D
    ctx->pc = 0x194e90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21789);
label_194e94:
    // 0x194e94: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x194e94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_194e98:
    // 0x194e98: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x194e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_194e9c:
    // 0x194e9c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x194e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_194ea0:
    // 0x194ea0: 0xc048b28  jal         func_122CA0
label_194ea4:
    if (ctx->pc == 0x194EA4u) {
        ctx->pc = 0x194EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EA0u;
        // 0x194ea4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x194EA8u;
        goto label_194ea8;
    }
    ctx->pc = 0x194EA0u;
    SET_GPR_U32(ctx, 31, 0x194EA8u);
    ctx->pc = 0x194EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194EA0u;
    // 0x194ea4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x122CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122CA0u, 0x194EA0u, 0x194EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194EA8u;
label_194ea8:
    // 0x194ea8: 0xc048b4e  jal         func_122D38
label_194eac:
    if (ctx->pc == 0x194EACu) {
        ctx->pc = 0x194EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EA8u;
        // 0x194eac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x194EB0u;
        goto label_194eb0;
    }
    ctx->pc = 0x194EA8u;
    SET_GPR_U32(ctx, 31, 0x194EB0u);
    ctx->pc = 0x194EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194EA8u;
    // 0x194eac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D38u, 0x194EA8u, 0x194EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194EB0u;
label_194eb0:
    // 0x194eb0: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x194eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_194eb4:
    // 0x194eb4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x194eb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_194eb8:
    // 0x194eb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x194eb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_194ebc:
    // 0x194ebc: 0x1000000e  b           . + 4 + (0xE << 2)
label_194ec0:
    if (ctx->pc == 0x194EC0u) {
        ctx->pc = 0x194EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EBCu;
        // 0x194ec0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194EC4u;
        goto label_194ec4;
    }
    ctx->pc = 0x194EBCu;
    {
        const bool branch_taken_0x194ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EBCu;
        // 0x194ec0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ebc) {
            ctx->pc = 0x194EF8u;
            goto label_194ef8;
        }
    }
    ctx->pc = 0x194EC4u;
label_194ec4:
    // 0x194ec4: 0x3c013faa  lui         $at, 0x3FAA
    ctx->pc = 0x194ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16298 << 16));
label_194ec8:
    // 0x194ec8: 0x3421aa8f  ori         $at, $at, 0xAA8F
    ctx->pc = 0x194ec8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43663);
label_194ecc:
    // 0x194ecc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x194eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_194ed0:
    // 0x194ed0: 0xc048b28  jal         func_122CA0
label_194ed4:
    if (ctx->pc == 0x194ED4u) {
        ctx->pc = 0x194ED8u;
        goto label_194ed8;
    }
    ctx->pc = 0x194ED0u;
    SET_GPR_U32(ctx, 31, 0x194ED8u);
    ctx->pc = 0x122CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122CA0u, 0x194ED0u, 0x194ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194ED8u;
label_194ed8:
    // 0x194ed8: 0x3c013fb9  lui         $at, 0x3FB9
    ctx->pc = 0x194ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16313 << 16));
label_194edc:
    // 0x194edc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x194edcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_194ee0:
    // 0x194ee0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x194ee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_194ee4:
    // 0x194ee4: 0xc048b4e  jal         func_122D38
label_194ee8:
    if (ctx->pc == 0x194EE8u) {
        ctx->pc = 0x194EECu;
        goto label_194eec;
    }
    ctx->pc = 0x194EE4u;
    SET_GPR_U32(ctx, 31, 0x194EECu);
    ctx->pc = 0x122D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D38u, 0x194EE4u, 0x194EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194EECu;
label_194eec:
    // 0x194eec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x194eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_194ef0:
    // 0x194ef0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x194ef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_194ef4:
    // 0x194ef4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x194ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_194ef8:
    // 0x194ef8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x194ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_194efc:
    // 0x194efc: 0xe455b178  swc1        $f21, -0x4E88($v0)
    ctx->pc = 0x194efcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294947192), bits); }
label_194f00:
    // 0x194f00: 0x10000027  b           . + 4 + (0x27 << 2)
label_194f04:
    if (ctx->pc == 0x194F04u) {
        ctx->pc = 0x194F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F00u;
        // 0x194f04: 0xe460b20c  swc1        $f0, -0x4DF4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294947340), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F08u;
        goto label_194f08;
    }
    ctx->pc = 0x194F00u;
    {
        const bool branch_taken_0x194f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F00u;
        // 0x194f04: 0xe460b20c  swc1        $f0, -0x4DF4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294947340), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f00) {
            ctx->pc = 0x194FA0u;
            goto label_194fa0;
        }
    }
    ctx->pc = 0x194F08u;
label_194f08:
    // 0x194f08: 0x3c013fcb  lui         $at, 0x3FCB
    ctx->pc = 0x194f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16331 << 16));
label_194f0c:
    // 0x194f0c: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x194f0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_194f10:
    // 0x194f10: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x194f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_194f14:
    // 0x194f14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x194f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194f18:
    // 0x194f18: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x194f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_194f1c:
    // 0x194f1c: 0xae03045c  sw          $v1, 0x45C($s0)
    ctx->pc = 0x194f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1116), GPR_U32(ctx, 3));
label_194f20:
    // 0x194f20: 0xc048b28  jal         func_122CA0
label_194f24:
    if (ctx->pc == 0x194F24u) {
        ctx->pc = 0x194F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F20u;
        // 0x194f24: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F28u;
        goto label_194f28;
    }
    ctx->pc = 0x194F20u;
    SET_GPR_U32(ctx, 31, 0x194F28u);
    ctx->pc = 0x194F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194F20u;
    // 0x194f24: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x122CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122CA0u, 0x194F20u, 0x194F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194F28u;
label_194f28:
    // 0x194f28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x194f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_194f2c:
    // 0x194f2c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x194f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_194f30:
    // 0x194f30: 0xc048b4e  jal         func_122D38
label_194f34:
    if (ctx->pc == 0x194F34u) {
        ctx->pc = 0x194F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F30u;
        // 0x194f34: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F38u;
        goto label_194f38;
    }
    ctx->pc = 0x194F30u;
    SET_GPR_U32(ctx, 31, 0x194F38u);
    ctx->pc = 0x194F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194F30u;
    // 0x194f34: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D38u, 0x194F30u, 0x194F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194F38u;
label_194f38:
    // 0x194f38: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x194f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_194f3c:
    // 0x194f3c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x194f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_194f40:
    // 0x194f40: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x194f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_194f44:
    // 0x194f44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x194f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_194f48:
    // 0x194f48: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x194f48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_194f4c:
    // 0x194f4c: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x194f4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_194f50:
    // 0x194f50: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x194f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_194f54:
    // 0x194f54: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x194f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_194f58:
    // 0x194f58: 0xe4d4b20c  swc1        $f20, -0x4DF4($a2)
    ctx->pc = 0x194f58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294947340), bits); }
label_194f5c:
    // 0x194f5c: 0x60f809  jalr        $v1
label_194f60:
    if (ctx->pc == 0x194F60u) {
        ctx->pc = 0x194F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F5Cu;
        // 0x194f60: 0xe4a0b178  swc1        $f0, -0x4E88($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294947192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F64u;
        goto label_194f64;
    }
    ctx->pc = 0x194F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x194F64u);
        ctx->pc = 0x194F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F5Cu;
        // 0x194f60: 0xe4a0b178  swc1        $f0, -0x4E88($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294947192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194F5Cu, 0x194F64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194F64u;
label_194f64:
    // 0x194f64: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x194f64u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_194f68:
    // 0x194f68: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x194f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_194f6c:
    // 0x194f6c: 0xe6140454  swc1        $f20, 0x454($s0)
    ctx->pc = 0x194f6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1108), bits); }
label_194f70:
    // 0x194f70: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x194f70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_194f74:
    // 0x194f74: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x194f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_194f78:
    // 0x194f78: 0x60f809  jalr        $v1
label_194f7c:
    if (ctx->pc == 0x194F7Cu) {
        ctx->pc = 0x194F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F78u;
        // 0x194f7c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F80u;
        goto label_194f80;
    }
    ctx->pc = 0x194F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x194F80u);
        ctx->pc = 0x194F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F78u;
        // 0x194f7c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194F78u, 0x194F80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194F80u;
label_194f80:
    // 0x194f80: 0xc6010454  lwc1        $f1, 0x454($s0)
    ctx->pc = 0x194f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_194f84:
    // 0x194f84: 0x8e02045c  lw          $v0, 0x45C($s0)
    ctx->pc = 0x194f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1116)));
label_194f88:
    // 0x194f88: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x194f88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_194f8c:
    // 0x194f8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_194f90:
    if (ctx->pc == 0x194F90u) {
        ctx->pc = 0x194F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F8Cu;
        // 0x194f90: 0xe6010454  swc1        $f1, 0x454($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1108), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F94u;
        goto label_194f94;
    }
    ctx->pc = 0x194F8Cu;
    {
        const bool branch_taken_0x194f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F8Cu;
        // 0x194f90: 0xe6010454  swc1        $f1, 0x454($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f8c) {
            ctx->pc = 0x194FA0u;
            goto label_194fa0;
        }
    }
    ctx->pc = 0x194F94u;
label_194f94:
    // 0x194f94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x194f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_194f98:
    // 0x194f98: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x194f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_194f9c:
    // 0x194f9c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x194f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_194fa0:
    // 0x194fa0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x194fa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_194fa4:
    // 0x194fa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_194fa8:
    // 0x194fa8: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x194fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_194fac:
    // 0x194fac: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x194facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_194fb0:
    // 0x194fb0: 0x3e00008  jr          $ra
label_194fb4:
    if (ctx->pc == 0x194FB4u) {
        ctx->pc = 0x194FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FB0u;
        // 0x194fb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194FB8u;
        goto label_fallthrough_0x194fb0;
    }
    ctx->pc = 0x194FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FB0u;
        // 0x194fb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x194fb0:
    ctx->pc = 0x194FB8u;
}
