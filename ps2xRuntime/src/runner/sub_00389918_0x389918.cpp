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

// Function: sub_00389918
// Address: 0x389918 - 0x389b40
void sub_00389918_0x389918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389918_0x389918");
#endif

    switch (ctx->pc) {
        case 0x389930u: goto label_389930;
        case 0x389948u: goto label_389948;
        case 0x389a00u: goto label_389a00;
        case 0x389ad4u: goto label_389ad4;
        case 0x389ae8u: goto label_389ae8;
        case 0x389b04u: goto label_389b04;
        case 0x389b2cu: goto label_389b2c;
        default: break;
    }

    ctx->pc = 0x389918u;

    // 0x389918: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x389918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38991c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x38991cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x389920: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x389920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x389924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x389924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x389928: 0xc0e2634  jal         func_3898D0
    ctx->pc = 0x389928u;
    SET_GPR_U32(ctx, 31, 0x389930u);
    ctx->pc = 0x38992Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389928u;
    // 0x38992c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3898D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898D0u, 0x389928u, 0x389930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389930u;
label_389930:
    // 0x389930: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x389930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x389934: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x389934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x389938: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x389938u;
    {
        const bool branch_taken_0x389938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389938u;
        // 0x38993c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389938) {
            ctx->pc = 0x3899E8u;
            goto label_3899e8;
        }
    }
    ctx->pc = 0x389940u;
    // 0x389940: 0xc0e87ca  jal         func_3A1F28
    ctx->pc = 0x389940u;
    SET_GPR_U32(ctx, 31, 0x389948u);
    ctx->pc = 0x389944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389940u;
    // 0x389944: 0x26110020  addiu       $s1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F28u, 0x389940u, 0x389948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389948u;
label_389948:
    // 0x389948: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x389948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38994c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x38994cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x389950: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x389950u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389954: 0x0  nop
    ctx->pc = 0x389954u;
    // NOP
    // 0x389958: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x389958u;
    {
        const bool branch_taken_0x389958 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389958u;
        // 0x38995c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389958) {
            ctx->pc = 0x3899A8u;
            goto label_3899a8;
        }
    }
    ctx->pc = 0x389960u;
    // 0x389960: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x389960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x389964: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x389964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x389968: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x389968u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38996c: 0x0  nop
    ctx->pc = 0x38996cu;
    // NOP
    // 0x389970: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x389970u;
    {
        const bool branch_taken_0x389970 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x389970) {
            ctx->pc = 0x389974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x389970u;
            // 0x389974: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3899ACu;
            goto label_3899ac;
        }
    }
    ctx->pc = 0x389978u;
    // 0x389978: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x389978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38997c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x38997cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x389980: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x389980u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389984: 0x0  nop
    ctx->pc = 0x389984u;
    // NOP
    // 0x389988: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x389988u;
    {
        const bool branch_taken_0x389988 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x389988) {
            ctx->pc = 0x38998Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x389988u;
            // 0x38998c: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3899ACu;
            goto label_3899ac;
        }
    }
    ctx->pc = 0x389990u;
    // 0x389990: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x389990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x389994: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x389994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x389998: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x389998u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38999c: 0x0  nop
    ctx->pc = 0x38999cu;
    // NOP
    // 0x3899a0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3899A0u;
    {
        const bool branch_taken_0x3899a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3899a0) {
            ctx->pc = 0x3899A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3899A0u;
            // 0x3899a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3899A8u;
            goto label_3899a8;
        }
    }
    ctx->pc = 0x3899A8u;
label_3899a8:
    // 0x3899a8: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x3899a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_3899ac:
    // 0x3899ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3899ACu;
    {
        const bool branch_taken_0x3899ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3899B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3899ACu;
        // 0x3899b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3899ac) {
            ctx->pc = 0x3899C4u;
            goto label_3899c4;
        }
    }
    ctx->pc = 0x3899B4u;
    // 0x3899b4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3899b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3899b8: 0xa2021308  sb          $v0, 0x1308($s0)
    ctx->pc = 0x3899b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4872), (uint8_t)GPR_U32(ctx, 2));
    // 0x3899bc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3899BCu;
    {
        const bool branch_taken_0x3899bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3899C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3899BCu;
        // 0x3899c0: 0xac602bc0  sw          $zero, 0x2BC0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 11200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3899bc) {
            ctx->pc = 0x3899E8u;
            goto label_3899e8;
        }
    }
    ctx->pc = 0x3899C4u;
label_3899c4:
    // 0x3899c4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x3899c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x3899c8: 0x8c822bc0  lw          $v0, 0x2BC0($a0)
    ctx->pc = 0x3899c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x512BC0u));
    // 0x3899cc: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x3899ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3899d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3899D0u;
    {
        const bool branch_taken_0x3899d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3899D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3899D0u;
        // 0x3899d4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3899d0) {
            ctx->pc = 0x3899E8u;
            goto label_3899e8;
        }
    }
    ctx->pc = 0x3899D8u;
    // 0x3899d8: 0xa2031308  sb          $v1, 0x1308($s0)
    ctx->pc = 0x3899d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4872), (uint8_t)GPR_U32(ctx, 3));
    // 0x3899dc: 0x8c822bc0  lw          $v0, 0x2BC0($a0)
    ctx->pc = 0x3899dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11200)));
    // 0x3899e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3899e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3899e4: 0xac822bc0  sw          $v0, 0x2BC0($a0)
    ctx->pc = 0x3899e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11200), GPR_U32(ctx, 2));
label_3899e8:
    // 0x3899e8: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3899e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3899ec: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x3899ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x3899f0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3899F0u;
    {
        const bool branch_taken_0x3899f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3899F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3899F0u;
        // 0x3899f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3899f0) {
            ctx->pc = 0x389AA4u;
            goto label_389aa4;
        }
    }
    ctx->pc = 0x3899F8u;
    // 0x3899f8: 0xc0e87c8  jal         func_3A1F20
    ctx->pc = 0x3899F8u;
    SET_GPR_U32(ctx, 31, 0x389A00u);
    ctx->pc = 0x3899FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3899F8u;
    // 0x3899fc: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F20u, 0x3899F8u, 0x389A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389A00u;
label_389a00:
    // 0x389a00: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x389a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x389a04: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x389a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x389a08: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x389a08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389a0c: 0x0  nop
    ctx->pc = 0x389a0cu;
    // NOP
    // 0x389a10: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x389A10u;
    {
        const bool branch_taken_0x389a10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x389A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389A10u;
        // 0x389a14: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389a10) {
            ctx->pc = 0x389A60u;
            goto label_389a60;
        }
    }
    ctx->pc = 0x389A18u;
    // 0x389a18: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x389a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x389a1c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x389a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x389a20: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x389a20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389a24: 0x0  nop
    ctx->pc = 0x389a24u;
    // NOP
    // 0x389a28: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x389A28u;
    {
        const bool branch_taken_0x389a28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x389a28) {
            ctx->pc = 0x389A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x389A28u;
            // 0x389a2c: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x389A64u;
            goto label_389a64;
        }
    }
    ctx->pc = 0x389A30u;
    // 0x389a30: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x389a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x389a34: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x389a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x389a38: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x389a38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389a3c: 0x0  nop
    ctx->pc = 0x389a3cu;
    // NOP
    // 0x389a40: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x389A40u;
    {
        const bool branch_taken_0x389a40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x389a40) {
            ctx->pc = 0x389A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x389A40u;
            // 0x389a44: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x389A64u;
            goto label_389a64;
        }
    }
    ctx->pc = 0x389A48u;
    // 0x389a48: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x389a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x389a4c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x389a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x389a50: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x389a50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389a54: 0x0  nop
    ctx->pc = 0x389a54u;
    // NOP
    // 0x389a58: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x389A58u;
    {
        const bool branch_taken_0x389a58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x389a58) {
            ctx->pc = 0x389A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x389A58u;
            // 0x389a5c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x389A60u;
            goto label_389a60;
        }
    }
    ctx->pc = 0x389A60u;
label_389a60:
    // 0x389a60: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x389a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_389a64:
    // 0x389a64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x389A64u;
    {
        const bool branch_taken_0x389a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x389A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389A64u;
        // 0x389a68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389a64) {
            ctx->pc = 0x389A7Cu;
            goto label_389a7c;
        }
    }
    ctx->pc = 0x389A6Cu;
    // 0x389a6c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x389a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x389a70: 0xa2021308  sb          $v0, 0x1308($s0)
    ctx->pc = 0x389a70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4872), (uint8_t)GPR_U32(ctx, 2));
    // 0x389a74: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x389A74u;
    {
        const bool branch_taken_0x389a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389A74u;
        // 0x389a78: 0xac602bc0  sw          $zero, 0x2BC0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 11200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389a74) {
            ctx->pc = 0x389B10u;
            goto label_389b10;
        }
    }
    ctx->pc = 0x389A7Cu;
label_389a7c:
    // 0x389a7c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x389a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x389a80: 0x8c822bc0  lw          $v0, 0x2BC0($a0)
    ctx->pc = 0x389a80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x512BC0u));
    // 0x389a84: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x389a84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x389a88: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x389A88u;
    {
        const bool branch_taken_0x389a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x389A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389A88u;
        // 0x389a8c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389a88) {
            ctx->pc = 0x389B10u;
            goto label_389b10;
        }
    }
    ctx->pc = 0x389A90u;
    // 0x389a90: 0xa2031308  sb          $v1, 0x1308($s0)
    ctx->pc = 0x389a90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4872), (uint8_t)GPR_U32(ctx, 3));
    // 0x389a94: 0x8c822bc0  lw          $v0, 0x2BC0($a0)
    ctx->pc = 0x389a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11200)));
    // 0x389a98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x389a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x389a9c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x389A9Cu;
    {
        const bool branch_taken_0x389a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389A9Cu;
        // 0x389aa0: 0xac822bc0  sw          $v0, 0x2BC0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 11200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389a9c) {
            ctx->pc = 0x389B10u;
            goto label_389b10;
        }
    }
    ctx->pc = 0x389AA4u;
label_389aa4:
    // 0x389aa4: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x389aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x389aa8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x389AA8u;
    {
        const bool branch_taken_0x389aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389AA8u;
        // 0x389aac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389aa8) {
            ctx->pc = 0x389B0Cu;
            goto label_389b0c;
        }
    }
    ctx->pc = 0x389AB0u;
    // 0x389ab0: 0x8e021304  lw          $v0, 0x1304($s0)
    ctx->pc = 0x389ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4868)));
    // 0x389ab4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x389ab4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x389ab8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x389AB8u;
    {
        const bool branch_taken_0x389ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389AB8u;
        // 0x389abc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389ab8) {
            ctx->pc = 0x389B0Cu;
            goto label_389b0c;
        }
    }
    ctx->pc = 0x389AC0u;
    // 0x389ac0: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x389ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x389ac4: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x389AC4u;
    {
        const bool branch_taken_0x389ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x389ac4) {
            ctx->pc = 0x389AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x389AC4u;
            // 0x389ac8: 0x8e0312e8  lw          $v1, 0x12E8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x389B14u;
            goto label_389b14;
        }
    }
    ctx->pc = 0x389ACCu;
    // 0x389acc: 0xc0e87c0  jal         func_3A1F00
    ctx->pc = 0x389ACCu;
    SET_GPR_U32(ctx, 31, 0x389AD4u);
    ctx->pc = 0x389AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389ACCu;
    // 0x389ad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x389ACCu, 0x389AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389AD4u;
label_389ad4:
    // 0x389ad4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x389ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x389ad8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x389ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389adc: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x389adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    // 0x389ae0: 0xc10c16b  jal         func_4305AC
    ctx->pc = 0x389AE0u;
    SET_GPR_U32(ctx, 31, 0x389AE8u);
    ctx->pc = 0x389AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389AE0u;
    // 0x389ae4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4305ACu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4305ACu, 0x389AE0u, 0x389AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389AE8u;
label_389ae8:
    // 0x389ae8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x389AE8u;
    {
        const bool branch_taken_0x389ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389AE8u;
        // 0x389aec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389ae8) {
            ctx->pc = 0x389B0Cu;
            goto label_389b0c;
        }
    }
    ctx->pc = 0x389AF0u;
    // 0x389af0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x389af0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x389af4: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x389af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x389af8: 0x24a51780  addiu       $a1, $a1, 0x1780
    ctx->pc = 0x389af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6016));
    // 0x389afc: 0xc10c16b  jal         func_4305AC
    ctx->pc = 0x389AFCu;
    SET_GPR_U32(ctx, 31, 0x389B04u);
    ctx->pc = 0x389B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389AFCu;
    // 0x389b00: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4305ACu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4305ACu, 0x389AFCu, 0x389B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389B04u;
label_389b04:
    // 0x389b04: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x389B04u;
    {
        const bool branch_taken_0x389b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x389B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389B04u;
        // 0x389b08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389b04) {
            ctx->pc = 0x389B10u;
            goto label_389b10;
        }
    }
    ctx->pc = 0x389B0Cu;
label_389b0c:
    // 0x389b0c: 0xa2021308  sb          $v0, 0x1308($s0)
    ctx->pc = 0x389b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4872), (uint8_t)GPR_U32(ctx, 2));
label_389b10:
    // 0x389b10: 0x8e0312e8  lw          $v1, 0x12E8($s0)
    ctx->pc = 0x389b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4840)));
label_389b14:
    // 0x389b14: 0x8e0212ec  lw          $v0, 0x12EC($s0)
    ctx->pc = 0x389b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4844)));
    // 0x389b18: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x389B18u;
    {
        const bool branch_taken_0x389b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x389B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389B18u;
        // 0x389b1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389b18) {
            ctx->pc = 0x389B24u;
            goto label_389b24;
        }
    }
    ctx->pc = 0x389B20u;
    // 0x389b20: 0xa2021308  sb          $v0, 0x1308($s0)
    ctx->pc = 0x389b20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4872), (uint8_t)GPR_U32(ctx, 2));
label_389b24:
    // 0x389b24: 0xc0e26d0  jal         func_389B40
    ctx->pc = 0x389B24u;
    SET_GPR_U32(ctx, 31, 0x389B2Cu);
    ctx->pc = 0x389B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389B24u;
    // 0x389b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389B40u, 0x389B24u, 0x389B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389B2Cu;
label_389b2c:
    // 0x389b2c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x389b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x389b30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x389b30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x389b34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x389b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x389b38: 0x3e00008  jr          $ra
    ctx->pc = 0x389B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389B38u;
        // 0x389b3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389B40u;
}
