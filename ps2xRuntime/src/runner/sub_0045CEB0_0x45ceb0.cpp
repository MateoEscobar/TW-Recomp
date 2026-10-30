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

// Function: sub_0045CEB0
// Address: 0x45ceb0 - 0x45d6e8
void sub_0045CEB0_0x45ceb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045CEB0_0x45ceb0");
#endif

    switch (ctx->pc) {
        case 0x45cf04u: goto label_45cf04;
        case 0x45cf30u: goto label_45cf30;
        case 0x45cf80u: goto label_45cf80;
        case 0x45cfa8u: goto label_45cfa8;
        case 0x45cfe0u: goto label_45cfe0;
        case 0x45d080u: goto label_45d080;
        case 0x45d09cu: goto label_45d09c;
        case 0x45d0dcu: goto label_45d0dc;
        case 0x45d100u: goto label_45d100;
        case 0x45d154u: goto label_45d154;
        case 0x45d178u: goto label_45d178;
        case 0x45d1a8u: goto label_45d1a8;
        case 0x45d234u: goto label_45d234;
        case 0x45d26cu: goto label_45d26c;
        case 0x45d290u: goto label_45d290;
        case 0x45d310u: goto label_45d310;
        case 0x45d360u: goto label_45d360;
        case 0x45d388u: goto label_45d388;
        case 0x45d410u: goto label_45d410;
        case 0x45d438u: goto label_45d438;
        case 0x45d470u: goto label_45d470;
        case 0x45d50cu: goto label_45d50c;
        case 0x45d554u: goto label_45d554;
        case 0x45d578u: goto label_45d578;
        case 0x45d5fcu: goto label_45d5fc;
        case 0x45d648u: goto label_45d648;
        default: break;
    }

    ctx->pc = 0x45ceb0u;

    // 0x45ceb0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x45ceb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x45ceb4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x45ceb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x45ceb8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x45ceb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x45cebc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x45cebcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45cec0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x45cec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x45cec4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x45cec4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45cec8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x45cec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x45cecc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x45ceccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x45ced0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x45ced0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x45ced4: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x45ced4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x45ced8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x45ced8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x45cedc: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x45cedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x45cee0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x45cee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x45cee4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x45cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x45cee8: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x45cee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x45ceec: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x45ceecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x45cef0: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x45cef0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45cef4: 0x14a601bc  bne         $a1, $a2, . + 4 + (0x1BC << 2)
    ctx->pc = 0x45CEF4u;
    {
        const bool branch_taken_0x45cef4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x45CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45CEF4u;
        // 0x45cef8: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45cef4) {
            ctx->pc = 0x45D5E8u;
            goto label_45d5e8;
        }
    }
    ctx->pc = 0x45CEFCu;
    // 0x45cefc: 0xc10f4c8  jal         func_43D320
    ctx->pc = 0x45CEFCu;
    SET_GPR_U32(ctx, 31, 0x45CF04u);
    ctx->pc = 0x45CF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45CEFCu;
    // 0x45cf00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D320u, 0x45CEFCu, 0x45CF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45CF04u;
label_45cf04:
    // 0x45cf04: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45cf08: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x45cf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x45cf0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45cf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x45cf10: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45cf10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45cf14: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x45CF14u;
    {
        const bool branch_taken_0x45cf14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45CF14u;
        // 0x45cf18: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45cf14) {
            ctx->pc = 0x45CF50u;
            goto label_45cf50;
        }
    }
    ctx->pc = 0x45CF1Cu;
    // 0x45cf1c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x45cf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45cf20: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45cf20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45cf24: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45cf24u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45cf28: 0xf  sync
    ctx->pc = 0x45cf28u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45cf2c: 0x40f  sync.p
    ctx->pc = 0x45cf2cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45cf30:
    // 0x45cf30: 0x0  nop
    ctx->pc = 0x45cf30u;
    // NOP
    // 0x45cf34: 0x0  nop
    ctx->pc = 0x45cf34u;
    // NOP
    // 0x45cf38: 0x0  nop
    ctx->pc = 0x45cf38u;
    // NOP
    // 0x45cf3c: 0x0  nop
    ctx->pc = 0x45cf3cu;
    // NOP
    // 0x45cf40: 0x0  nop
    ctx->pc = 0x45cf40u;
    // NOP
    // 0x45cf44: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45CF44u;
    {
        const bool branch_taken_0x45cf44 = (false);
        if (branch_taken_0x45cf44) {
            ctx->pc = 0x45CF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45cf30;
        }
    }
    ctx->pc = 0x45CF4Cu;
    // 0x45cf4c: 0x0  nop
    ctx->pc = 0x45cf4cu;
    // NOP
label_45cf50:
    // 0x45cf50: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45cf50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45cf54: 0x2a24007f  slti        $a0, $s1, 0x7F
    ctx->pc = 0x45cf54u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x45cf58: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45cf58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45cf5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45cf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45cf60: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45cf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45cf64: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x45CF64u;
    {
        const bool branch_taken_0x45cf64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45CF64u;
        // 0x45cf68: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45cf64) {
            ctx->pc = 0x45CFC4u;
            goto label_45cfc4;
        }
    }
    ctx->pc = 0x45CF6Cu;
    // 0x45cf6c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x45cf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45cf70: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45cf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45cf74: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45cf74u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45cf78: 0xf  sync
    ctx->pc = 0x45cf78u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45cf7c: 0x40f  sync.p
    ctx->pc = 0x45cf7cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45cf80:
    // 0x45cf80: 0x0  nop
    ctx->pc = 0x45cf80u;
    // NOP
    // 0x45cf84: 0x0  nop
    ctx->pc = 0x45cf84u;
    // NOP
    // 0x45cf88: 0x0  nop
    ctx->pc = 0x45cf88u;
    // NOP
    // 0x45cf8c: 0x0  nop
    ctx->pc = 0x45cf8cu;
    // NOP
    // 0x45cf90: 0x0  nop
    ctx->pc = 0x45cf90u;
    // NOP
    // 0x45cf94: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45CF94u;
    {
        const bool branch_taken_0x45cf94 = (false);
        if (branch_taken_0x45cf94) {
            ctx->pc = 0x45CF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45cf80;
        }
    }
    ctx->pc = 0x45CF9Cu;
    // 0x45cf9c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45cf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45cfa0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45cfa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45cfa4: 0x0  nop
    ctx->pc = 0x45cfa4u;
    // NOP
label_45cfa8:
    // 0x45cfa8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45cfac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45cfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45cfb0: 0x0  nop
    ctx->pc = 0x45cfb0u;
    // NOP
    // 0x45cfb4: 0x0  nop
    ctx->pc = 0x45cfb4u;
    // NOP
    // 0x45cfb8: 0x0  nop
    ctx->pc = 0x45cfb8u;
    // NOP
    // 0x45cfbc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45CFBCu;
    {
        const bool branch_taken_0x45cfbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45cfbc) {
            ctx->pc = 0x45CFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45cfa8;
        }
    }
    ctx->pc = 0x45CFC4u;
label_45cfc4:
    // 0x45cfc4: 0xc6410068  lwc1        $f1, 0x68($s2)
    ctx->pc = 0x45cfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45cfc8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x45cfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x45cfcc: 0x34633fb0  ori         $v1, $v1, 0x3FB0
    ctx->pc = 0x45cfccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16304);
    // 0x45cfd0: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x45cfd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FB0u, bits); }
    // 0x45cfd4: 0xc640006c  lwc1        $f0, 0x6C($s2)
    ctx->pc = 0x45cfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45cfd8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x45cfd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FB4u, bits); }
    // 0x45cfdc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x45cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_45cfe0:
    // 0x45cfe0: 0x42000039  di
    ctx->pc = 0x45cfe0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45cfe4: 0x40f  sync.p
    ctx->pc = 0x45cfe4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45cfe8: 0x40056000  mfc0        $a1, Status
    ctx->pc = 0x45cfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_status);
    // 0x45cfec: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x45cfecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x45cff0: 0x0  nop
    ctx->pc = 0x45cff0u;
    // NOP
    // 0x45cff4: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45CFF4u;
    {
        const bool branch_taken_0x45cff4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x45cff4) {
            ctx->pc = 0x45CFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45cfe0;
        }
    }
    ctx->pc = 0x45CFFCu;
    // 0x45cffc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x45cffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x45d000: 0x48c2a800  ctc2.ni     $v0, $vi21
    ctx->pc = 0x45d000u;
    { uint32_t tmp = GPR_U32(ctx, 2); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45d004: 0x4a0002ff  vnop
    ctx->pc = 0x45d004u;
    // NOP operation, no action needed for VU0
    // 0x45d008: 0x4a0002ff  vnop
    ctx->pc = 0x45d008u;
    // NOP operation, no action needed for VU0
    // 0x45d00c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x45d00cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x45d010: 0x4be00962  vaddi.xyzw  $vf5, $vf1, $I
    ctx->pc = 0x45d010u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x45d014: 0x42000038  ei
    ctx->pc = 0x45d014u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x45d018: 0x148000b1  bnez        $a0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x45D018u;
    {
        const bool branch_taken_0x45d018 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x45d018) {
            ctx->pc = 0x45D2E0u;
            goto label_45d2e0;
        }
    }
    ctx->pc = 0x45D020u;
    // 0x45d020: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x45d020u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x45d024: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x45d024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x45d028: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x45d028u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x45d02c: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x45d02cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x45d030: 0x3c161000  lui         $s6, 0x1000
    ctx->pc = 0x45d030u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)4096 << 16));
    // 0x45d034: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x45d034u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
    // 0x45d038: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x45d038u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x45d03c: 0x3c191000  lui         $t9, 0x1000
    ctx->pc = 0x45d03cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)4096 << 16));
    // 0x45d040: 0x3c181000  lui         $t8, 0x1000
    ctx->pc = 0x45d040u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)4096 << 16));
    // 0x45d044: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x45d044u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x45d048: 0x354ad000  ori         $t2, $t2, 0xD000
    ctx->pc = 0x45d048u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)53248);
    // 0x45d04c: 0x34a5e020  ori         $a1, $a1, 0xE020
    ctx->pc = 0x45d04cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57376);
    // 0x45d050: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x45d050u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45d054: 0x3508d400  ori         $t0, $t0, 0xD400
    ctx->pc = 0x45d054u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)54272);
    // 0x45d058: 0x240c0200  addiu       $t4, $zero, 0x200
    ctx->pc = 0x45d058u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45d05c: 0x356be010  ori         $t3, $t3, 0xE010
    ctx->pc = 0x45d05cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)57360);
    // 0x45d060: 0x36d6d480  ori         $s6, $s6, 0xD480
    ctx->pc = 0x45d060u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)54400);
    // 0x45d064: 0x36b5d410  ori         $s5, $s5, 0xD410
    ctx->pc = 0x45d064u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)54288);
    // 0x45d068: 0x3694d420  ori         $s4, $s4, 0xD420
    ctx->pc = 0x45d068u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)54304);
    // 0x45d06c: 0x241701fc  addiu       $s7, $zero, 0x1FC
    ctx->pc = 0x45d06cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 508));
    // 0x45d070: 0x3739d080  ori         $t9, $t9, 0xD080
    ctx->pc = 0x45d070u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)53376);
    // 0x45d074: 0x3718d020  ori         $t8, $t8, 0xD020
    ctx->pc = 0x45d074u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)53280);
    // 0x45d078: 0x241e1fc0  addiu       $fp, $zero, 0x1FC0
    ctx->pc = 0x45d078u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8128));
    // 0x45d07c: 0x3652d010  ori         $s2, $s2, 0xD010
    ctx->pc = 0x45d07cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)53264);
label_45d080:
    // 0x45d080: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x45d080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x45d084: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45d084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45d088: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x45D088u;
    {
        const bool branch_taken_0x45d088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d088) {
            ctx->pc = 0x45D0B8u;
            goto label_45d0b8;
        }
    }
    ctx->pc = 0x45D090u;
    // 0x45d090: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x45d090u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x45d094: 0xf  sync
    ctx->pc = 0x45d094u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45d098: 0x40f  sync.p
    ctx->pc = 0x45d098u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45d09c:
    // 0x45d09c: 0x0  nop
    ctx->pc = 0x45d09cu;
    // NOP
    // 0x45d0a0: 0x0  nop
    ctx->pc = 0x45d0a0u;
    // NOP
    // 0x45d0a4: 0x0  nop
    ctx->pc = 0x45d0a4u;
    // NOP
    // 0x45d0a8: 0x0  nop
    ctx->pc = 0x45d0a8u;
    // NOP
    // 0x45d0ac: 0x0  nop
    ctx->pc = 0x45d0acu;
    // NOP
    // 0x45d0b0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45D0B0u;
    {
        const bool branch_taken_0x45d0b0 = (false);
        if (branch_taken_0x45d0b0) {
            ctx->pc = 0x45D09Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d09c;
        }
    }
    ctx->pc = 0x45D0B8u;
label_45d0b8:
    // 0x45d0b8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x45d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x45d0bc: 0x262fff81  addiu       $t7, $s1, -0x7F
    ctx->pc = 0x45d0bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967169));
    // 0x45d0c0: 0x260d1fc0  addiu       $t5, $s0, 0x1FC0
    ctx->pc = 0x45d0c0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 8128));
    // 0x45d0c4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45d0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45d0c8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x45D0C8u;
    {
        const bool branch_taken_0x45d0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45D0C8u;
        // 0x45d0cc: 0x266e1fc0  addiu       $t6, $s3, 0x1FC0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 19), 8128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45d0c8) {
            ctx->pc = 0x45D11Cu;
            goto label_45d11c;
        }
    }
    ctx->pc = 0x45D0D0u;
    // 0x45d0d0: 0xacac0000  sw          $t4, 0x0($a1)
    ctx->pc = 0x45d0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
    // 0x45d0d4: 0xf  sync
    ctx->pc = 0x45d0d4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45d0d8: 0x40f  sync.p
    ctx->pc = 0x45d0d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45d0dc:
    // 0x45d0dc: 0x0  nop
    ctx->pc = 0x45d0dcu;
    // NOP
    // 0x45d0e0: 0x0  nop
    ctx->pc = 0x45d0e0u;
    // NOP
    // 0x45d0e4: 0x0  nop
    ctx->pc = 0x45d0e4u;
    // NOP
    // 0x45d0e8: 0x0  nop
    ctx->pc = 0x45d0e8u;
    // NOP
    // 0x45d0ec: 0x0  nop
    ctx->pc = 0x45d0ecu;
    // NOP
    // 0x45d0f0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45D0F0u;
    {
        const bool branch_taken_0x45d0f0 = (false);
        if (branch_taken_0x45d0f0) {
            ctx->pc = 0x45D0DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d0dc;
        }
    }
    ctx->pc = 0x45D0F8u;
    // 0x45d0f8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45d0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45d0fc: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45d0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_45d100:
    // 0x45d100: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45d100u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45d104: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45d104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45d108: 0x0  nop
    ctx->pc = 0x45d108u;
    // NOP
    // 0x45d10c: 0x0  nop
    ctx->pc = 0x45d10cu;
    // NOP
    // 0x45d110: 0x0  nop
    ctx->pc = 0x45d110u;
    // NOP
    // 0x45d114: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45D114u;
    {
        const bool branch_taken_0x45d114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45d114) {
            ctx->pc = 0x45D100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d100;
        }
    }
    ctx->pc = 0x45D11Cu;
label_45d11c:
    // 0x45d11c: 0xad6c0000  sw          $t4, 0x0($t3)
    ctx->pc = 0x45d11cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 12));
    // 0x45d120: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x45d120u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x45d124: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x45d124u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
    // 0x45d128: 0xae970000  sw          $s7, 0x0($s4)
    ctx->pc = 0x45d128u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 23));
    // 0x45d12c: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x45d12cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x45d130: 0xf  sync
    ctx->pc = 0x45d130u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45d134: 0x40f  sync.p
    ctx->pc = 0x45d134u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45d138: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x45d138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x45d13c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45d13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45d140: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x45D140u;
    {
        const bool branch_taken_0x45d140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45D140u;
        // 0x45d144: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45d140) {
            ctx->pc = 0x45D198u;
            goto label_45d198;
        }
    }
    ctx->pc = 0x45D148u;
    // 0x45d148: 0xacac0000  sw          $t4, 0x0($a1)
    ctx->pc = 0x45d148u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
    // 0x45d14c: 0xf  sync
    ctx->pc = 0x45d14cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45d150: 0x40f  sync.p
    ctx->pc = 0x45d150u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45d154:
    // 0x45d154: 0x0  nop
    ctx->pc = 0x45d154u;
    // NOP
    // 0x45d158: 0x0  nop
    ctx->pc = 0x45d158u;
    // NOP
    // 0x45d15c: 0x0  nop
    ctx->pc = 0x45d15cu;
    // NOP
    // 0x45d160: 0x0  nop
    ctx->pc = 0x45d160u;
    // NOP
    // 0x45d164: 0x0  nop
    ctx->pc = 0x45d164u;
    // NOP
    // 0x45d168: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45D168u;
    {
        const bool branch_taken_0x45d168 = (false);
        if (branch_taken_0x45d168) {
            ctx->pc = 0x45D154u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d154;
        }
    }
    ctx->pc = 0x45D170u;
    // 0x45d170: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45d170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45d174: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45d174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_45d178:
    // 0x45d178: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45d178u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45d17c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45d17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45d180: 0x0  nop
    ctx->pc = 0x45d180u;
    // NOP
    // 0x45d184: 0x0  nop
    ctx->pc = 0x45d184u;
    // NOP
    // 0x45d188: 0x0  nop
    ctx->pc = 0x45d188u;
    // NOP
    // 0x45d18c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45D18Cu;
    {
        const bool branch_taken_0x45d18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45d18c) {
            ctx->pc = 0x45D178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d178;
        }
    }
    ctx->pc = 0x45D194u;
    // 0x45d194: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x45d194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_45d198:
    // 0x45d198: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x45d198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x45d19c: 0x34631fc0  ori         $v1, $v1, 0x1FC0
    ctx->pc = 0x45d19cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8128);
    // 0x45d1a0: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x45d1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x45d1a4: 0x2407007e  addiu       $a3, $zero, 0x7E
    ctx->pc = 0x45d1a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_45d1a8:
    // 0x45d1a8: 0x42000039  di
    ctx->pc = 0x45d1a8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45d1ac: 0x40f  sync.p
    ctx->pc = 0x45d1acu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45d1b0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x45d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x45d1b4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x45d1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x45d1b8: 0x0  nop
    ctx->pc = 0x45d1b8u;
    // NOP
    // 0x45d1bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45D1BCu;
    {
        const bool branch_taken_0x45d1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45d1bc) {
            ctx->pc = 0x45D1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d1a8;
        }
    }
    ctx->pc = 0x45D1C4u;
    // 0x45d1c4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x45d1c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45d1c8: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x45d1c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x45d1cc: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x45d1ccu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x45d1d0: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x45d1d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x45d1d4: 0x4be50998  vmulx.xyzw  $vf6, $vf1, $vf5x
    ctx->pc = 0x45d1d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x45d1d8: 0x4be511d9  vmuly.xyzw  $vf7, $vf2, $vf5y
    ctx->pc = 0x45d1d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45d1dc: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x45d1dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x45d1e0: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x45d1e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45d1e4: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x45d1e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x45d1e8: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x45d1e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x45d1ec: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x45d1ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x45d1f0: 0xf86a0030  sqc2        $vf10, 0x30($v1)
    ctx->pc = 0x45d1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x45d1f4: 0xf86b0020  sqc2        $vf11, 0x20($v1)
    ctx->pc = 0x45d1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x45d1f8: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x45d1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x45d1fc: 0xf86d0010  sqc2        $vf13, 0x10($v1)
    ctx->pc = 0x45d1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x45d200: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x45d200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x45d204: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x45d204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x45d208: 0x42000038  ei
    ctx->pc = 0x45d208u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x45d20c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x45d20cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x45d210: 0x4e1ffe5  bgez        $a3, . + 4 + (-0x1B << 2)
    ctx->pc = 0x45D210u;
    {
        const bool branch_taken_0x45d210 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x45d210) {
            ctx->pc = 0x45D1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d1a8;
        }
    }
    ctx->pc = 0x45D218u;
    // 0x45d218: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x45d218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x45d21c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45d21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45d220: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x45D220u;
    {
        const bool branch_taken_0x45d220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d220) {
            ctx->pc = 0x45D250u;
            goto label_45d250;
        }
    }
    ctx->pc = 0x45D228u;
    // 0x45d228: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x45d228u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x45d22c: 0xf  sync
    ctx->pc = 0x45d22cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45d230: 0x40f  sync.p
    ctx->pc = 0x45d230u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45d234:
    // 0x45d234: 0x0  nop
    ctx->pc = 0x45d234u;
    // NOP
    // 0x45d238: 0x0  nop
    ctx->pc = 0x45d238u;
    // NOP
    // 0x45d23c: 0x0  nop
    ctx->pc = 0x45d23cu;
    // NOP
    // 0x45d240: 0x0  nop
    ctx->pc = 0x45d240u;
    // NOP
    // 0x45d244: 0x0  nop
    ctx->pc = 0x45d244u;
    // NOP
    // 0x45d248: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45D248u;
    {
        const bool branch_taken_0x45d248 = (false);
        if (branch_taken_0x45d248) {
            ctx->pc = 0x45D234u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d234;
        }
    }
    ctx->pc = 0x45D250u;
label_45d250:
    // 0x45d250: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x45d250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x45d254: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45d254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45d258: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x45D258u;
    {
        const bool branch_taken_0x45d258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d258) {
            ctx->pc = 0x45D2ACu;
            goto label_45d2ac;
        }
    }
    ctx->pc = 0x45D260u;
    // 0x45d260: 0xacac0000  sw          $t4, 0x0($a1)
    ctx->pc = 0x45d260u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
    // 0x45d264: 0xf  sync
    ctx->pc = 0x45d264u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45d268: 0x40f  sync.p
    ctx->pc = 0x45d268u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45d26c:
    // 0x45d26c: 0x0  nop
    ctx->pc = 0x45d26cu;
    // NOP
    // 0x45d270: 0x0  nop
    ctx->pc = 0x45d270u;
    // NOP
    // 0x45d274: 0x0  nop
    ctx->pc = 0x45d274u;
    // NOP
    // 0x45d278: 0x0  nop
    ctx->pc = 0x45d278u;
    // NOP
    // 0x45d27c: 0x0  nop
    ctx->pc = 0x45d27cu;
    // NOP
    // 0x45d280: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45D280u;
    {
        const bool branch_taken_0x45d280 = (false);
        if (branch_taken_0x45d280) {
            ctx->pc = 0x45D26Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d26c;
        }
    }
    ctx->pc = 0x45D288u;
    // 0x45d288: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45d288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45d28c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45d28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_45d290:
    // 0x45d290: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45d290u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45d294: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45d294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45d298: 0x0  nop
    ctx->pc = 0x45d298u;
    // NOP
    // 0x45d29c: 0x0  nop
    ctx->pc = 0x45d29cu;
    // NOP
    // 0x45d2a0: 0x0  nop
    ctx->pc = 0x45d2a0u;
    // NOP
    // 0x45d2a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45D2A4u;
    {
        const bool branch_taken_0x45d2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45d2a4) {
            ctx->pc = 0x45D290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d290;
        }
    }
    ctx->pc = 0x45D2ACu;
label_45d2ac:
    // 0x45d2ac: 0xad690000  sw          $t1, 0x0($t3)
    ctx->pc = 0x45d2acu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 9));
    // 0x45d2b0: 0xaf3e0000  sw          $fp, 0x0($t9)
    ctx->pc = 0x45d2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 30));
    // 0x45d2b4: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x45d2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
    // 0x45d2b8: 0xaf170000  sw          $s7, 0x0($t8)
    ctx->pc = 0x45d2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 23));
    // 0x45d2bc: 0xad490000  sw          $t1, 0x0($t2)
    ctx->pc = 0x45d2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
    // 0x45d2c0: 0xf  sync
    ctx->pc = 0x45d2c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45d2c4: 0x40f  sync.p
    ctx->pc = 0x45d2c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45d2c8: 0x1a0802d  daddu       $s0, $t5, $zero
    ctx->pc = 0x45d2c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45d2cc: 0x1e0882d  daddu       $s1, $t7, $zero
    ctx->pc = 0x45d2ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45d2d0: 0x2a22007f  slti        $v0, $s1, 0x7F
    ctx->pc = 0x45d2d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x45d2d4: 0x1040ff6a  beqz        $v0, . + 4 + (-0x96 << 2)
    ctx->pc = 0x45D2D4u;
    {
        const bool branch_taken_0x45d2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45D2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45D2D4u;
        // 0x45d2d8: 0x1c0982d  daddu       $s3, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45d2d4) {
            ctx->pc = 0x45D080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d080;
        }
    }
    ctx->pc = 0x45D2DCu;
    // 0x45d2dc: 0x0  nop
    ctx->pc = 0x45d2dcu;
    // NOP
label_45d2e0:
    // 0x45d2e0: 0x122000f5  beqz        $s1, . + 4 + (0xF5 << 2)
    ctx->pc = 0x45D2E0u;
    {
        const bool branch_taken_0x45d2e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x45D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45D2E0u;
        // 0x45d2e4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45d2e0) {
            ctx->pc = 0x45D6B8u;
            goto label_45d6b8;
        }
    }
    ctx->pc = 0x45D2E8u;
    // 0x45d2e8: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x45d2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x45d2ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x45d2f0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45d2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45d2f4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x45D2F4u;
    {
        const bool branch_taken_0x45d2f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45D2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45D2F4u;
        // 0x45d2f8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45d2f4) {
            ctx->pc = 0x45D330u;
            goto label_45d330;
        }
    }
    ctx->pc = 0x45D2FCu;
    // 0x45d2fc: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x45d2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45d300: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45d300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45d304: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45d304u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45d308: 0xf  sync
    ctx->pc = 0x45d308u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45d30c: 0x40f  sync.p
    ctx->pc = 0x45d30cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45d310:
    // 0x45d310: 0x0  nop
    ctx->pc = 0x45d310u;
    // NOP
    // 0x45d314: 0x0  nop
    ctx->pc = 0x45d314u;
    // NOP
    // 0x45d318: 0x0  nop
    ctx->pc = 0x45d318u;
    // NOP
    // 0x45d31c: 0x0  nop
    ctx->pc = 0x45d31cu;
    // NOP
    // 0x45d320: 0x0  nop
    ctx->pc = 0x45d320u;
    // NOP
    // 0x45d324: 0x0  nop
    ctx->pc = 0x45d324u;
    // NOP
    // 0x45d328: 0x4100fff9  bc0f        . + 4 + (-0x7 << 2)
    ctx->pc = 0x45D328u;
    {
        const bool branch_taken_0x45d328 = (false);
        if (branch_taken_0x45d328) {
            ctx->pc = 0x45D310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d310;
        }
    }
    ctx->pc = 0x45D330u;
label_45d330:
    // 0x45d330: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45d330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45d334: 0x113080  sll         $a2, $s1, 2
    ctx->pc = 0x45d334u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x45d338: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45d338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45d33c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45d340: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45d340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45d344: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x45D344u;
    {
        const bool branch_taken_0x45d344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45D348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45D344u;
        // 0x45d348: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45d344) {
            ctx->pc = 0x45D3A4u;
            goto label_45d3a4;
        }
    }
    ctx->pc = 0x45D34Cu;
    // 0x45d34c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x45d34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45d350: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45d350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45d354: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45d354u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45d358: 0xf  sync
    ctx->pc = 0x45d358u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45d35c: 0x40f  sync.p
    ctx->pc = 0x45d35cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45d360:
    // 0x45d360: 0x0  nop
    ctx->pc = 0x45d360u;
    // NOP
    // 0x45d364: 0x0  nop
    ctx->pc = 0x45d364u;
    // NOP
    // 0x45d368: 0x0  nop
    ctx->pc = 0x45d368u;
    // NOP
    // 0x45d36c: 0x0  nop
    ctx->pc = 0x45d36cu;
    // NOP
    // 0x45d370: 0x0  nop
    ctx->pc = 0x45d370u;
    // NOP
    // 0x45d374: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45D374u;
    {
        const bool branch_taken_0x45d374 = (false);
        if (branch_taken_0x45d374) {
            ctx->pc = 0x45D360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d360;
        }
    }
    ctx->pc = 0x45D37Cu;
    // 0x45d37c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45d37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45d380: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45d380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45d384: 0x0  nop
    ctx->pc = 0x45d384u;
    // NOP
label_45d388:
    // 0x45d388: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45d388u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45d38c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45d38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45d390: 0x0  nop
    ctx->pc = 0x45d390u;
    // NOP
    // 0x45d394: 0x0  nop
    ctx->pc = 0x45d394u;
    // NOP
    // 0x45d398: 0x0  nop
    ctx->pc = 0x45d398u;
    // NOP
    // 0x45d39c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45D39Cu;
    {
        const bool branch_taken_0x45d39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45d39c) {
            ctx->pc = 0x45D388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d388;
        }
    }
    ctx->pc = 0x45D3A4u;
label_45d3a4:
    // 0x45d3a4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45d3a8: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x45d3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45d3ac: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x45d3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x45d3b0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45d3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45d3b4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45d3b4u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x45d3b8: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x45d3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x45d3bc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x45d3bcu;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x45d3c0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45d3c4: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x45d3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x45d3c8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45d3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45d3cc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x45d3ccu;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x45d3d0: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x45d3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x45d3d4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x45d3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x45d3d8: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x45d3d8u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 6)); // MMIO: 0x10000000
    // 0x45d3dc: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x45d3dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x45d3e0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x45d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45d3e4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x45d3e4u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x45d3e8: 0xf  sync
    ctx->pc = 0x45d3e8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45d3ec: 0x40f  sync.p
    ctx->pc = 0x45d3ecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45d3f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x45d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45d3f4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45d3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45d3f8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x45D3F8u;
    {
        const bool branch_taken_0x45d3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45D3F8u;
        // 0x45d3fc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45d3f8) {
            ctx->pc = 0x45D454u;
            goto label_45d454;
        }
    }
    ctx->pc = 0x45D400u;
    // 0x45d400: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45d400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45d404: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45d404u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x45d408: 0xf  sync
    ctx->pc = 0x45d408u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45d40c: 0x40f  sync.p
    ctx->pc = 0x45d40cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45d410:
    // 0x45d410: 0x0  nop
    ctx->pc = 0x45d410u;
    // NOP
    // 0x45d414: 0x0  nop
    ctx->pc = 0x45d414u;
    // NOP
    // 0x45d418: 0x0  nop
    ctx->pc = 0x45d418u;
    // NOP
    // 0x45d41c: 0x0  nop
    ctx->pc = 0x45d41cu;
    // NOP
    // 0x45d420: 0x0  nop
    ctx->pc = 0x45d420u;
    // NOP
    // 0x45d424: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45D424u;
    {
        const bool branch_taken_0x45d424 = (false);
        if (branch_taken_0x45d424) {
            ctx->pc = 0x45D410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d410;
        }
    }
    ctx->pc = 0x45D42Cu;
    // 0x45d42c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45d42cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45d430: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45d430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45d434: 0x0  nop
    ctx->pc = 0x45d434u;
    // NOP
label_45d438:
    // 0x45d438: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45d438u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45d43c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45d43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45d440: 0x0  nop
    ctx->pc = 0x45d440u;
    // NOP
    // 0x45d444: 0x0  nop
    ctx->pc = 0x45d444u;
    // NOP
    // 0x45d448: 0x0  nop
    ctx->pc = 0x45d448u;
    // NOP
    // 0x45d44c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45D44Cu;
    {
        const bool branch_taken_0x45d44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45d44c) {
            ctx->pc = 0x45D438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d438;
        }
    }
    ctx->pc = 0x45D454u;
label_45d454:
    // 0x45d454: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x45d454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x45d458: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x45d458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x45d45c: 0x1a200020  blez        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x45D45Cu;
    {
        const bool branch_taken_0x45d45c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x45D460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45D45Cu;
        // 0x45d460: 0x34631fc0  ori         $v1, $v1, 0x1FC0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x45d45c) {
            ctx->pc = 0x45D4E0u;
            goto label_45d4e0;
        }
    }
    ctx->pc = 0x45D464u;
    // 0x45d464: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x45d464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45d468: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x45d468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x45d46c: 0x0  nop
    ctx->pc = 0x45d46cu;
    // NOP
label_45d470:
    // 0x45d470: 0x42000039  di
    ctx->pc = 0x45d470u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45d474: 0x40f  sync.p
    ctx->pc = 0x45d474u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45d478: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x45d478u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x45d47c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x45d47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x45d480: 0x0  nop
    ctx->pc = 0x45d480u;
    // NOP
    // 0x45d484: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45D484u;
    {
        const bool branch_taken_0x45d484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45d484) {
            ctx->pc = 0x45D470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d470;
        }
    }
    ctx->pc = 0x45D48Cu;
    // 0x45d48c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x45d48cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45d490: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x45d490u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x45d494: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x45d494u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x45d498: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x45d498u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x45d49c: 0x4be50998  vmulx.xyzw  $vf6, $vf1, $vf5x
    ctx->pc = 0x45d49cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x45d4a0: 0x4be511d9  vmuly.xyzw  $vf7, $vf2, $vf5y
    ctx->pc = 0x45d4a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45d4a4: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x45d4a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x45d4a8: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x45d4a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45d4ac: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x45d4acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x45d4b0: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x45d4b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x45d4b4: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x45d4b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x45d4b8: 0xf86a0030  sqc2        $vf10, 0x30($v1)
    ctx->pc = 0x45d4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x45d4bc: 0xf86b0020  sqc2        $vf11, 0x20($v1)
    ctx->pc = 0x45d4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x45d4c0: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x45d4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x45d4c4: 0xf86d0010  sqc2        $vf13, 0x10($v1)
    ctx->pc = 0x45d4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x45d4c8: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x45d4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x45d4cc: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x45d4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x45d4d0: 0x42000038  ei
    ctx->pc = 0x45d4d0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x45d4d4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x45d4d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x45d4d8: 0x14e0ffe5  bnez        $a3, . + 4 + (-0x1B << 2)
    ctx->pc = 0x45D4D8u;
    {
        const bool branch_taken_0x45d4d8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x45d4d8) {
            ctx->pc = 0x45D470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d470;
        }
    }
    ctx->pc = 0x45D4E0u;
label_45d4e0:
    // 0x45d4e0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45d4e4: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x45d4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x45d4e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45d4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x45d4ec: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45d4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45d4f0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x45D4F0u;
    {
        const bool branch_taken_0x45d4f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45D4F0u;
        // 0x45d4f4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45d4f0) {
            ctx->pc = 0x45D528u;
            goto label_45d528;
        }
    }
    ctx->pc = 0x45D4F8u;
    // 0x45d4f8: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x45d4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45d4fc: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45d4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45d500: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45d500u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45d504: 0xf  sync
    ctx->pc = 0x45d504u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45d508: 0x40f  sync.p
    ctx->pc = 0x45d508u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45d50c:
    // 0x45d50c: 0x0  nop
    ctx->pc = 0x45d50cu;
    // NOP
    // 0x45d510: 0x0  nop
    ctx->pc = 0x45d510u;
    // NOP
    // 0x45d514: 0x0  nop
    ctx->pc = 0x45d514u;
    // NOP
    // 0x45d518: 0x0  nop
    ctx->pc = 0x45d518u;
    // NOP
    // 0x45d51c: 0x0  nop
    ctx->pc = 0x45d51cu;
    // NOP
    // 0x45d520: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45D520u;
    {
        const bool branch_taken_0x45d520 = (false);
        if (branch_taken_0x45d520) {
            ctx->pc = 0x45D50Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d50c;
        }
    }
    ctx->pc = 0x45D528u;
label_45d528:
    // 0x45d528: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45d528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45d52c: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x45d52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x45d530: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45d530u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x10000000
    // 0x45d534: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45d534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45d538: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x45D538u;
    {
        const bool branch_taken_0x45d538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45D538u;
        // 0x45d53c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45d538) {
            ctx->pc = 0x45D594u;
            goto label_45d594;
        }
    }
    ctx->pc = 0x45D540u;
    // 0x45d540: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x45d540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45d544: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45d544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45d548: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45d548u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45d54c: 0xf  sync
    ctx->pc = 0x45d54cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45d550: 0x40f  sync.p
    ctx->pc = 0x45d550u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45d554:
    // 0x45d554: 0x0  nop
    ctx->pc = 0x45d554u;
    // NOP
    // 0x45d558: 0x0  nop
    ctx->pc = 0x45d558u;
    // NOP
    // 0x45d55c: 0x0  nop
    ctx->pc = 0x45d55cu;
    // NOP
    // 0x45d560: 0x0  nop
    ctx->pc = 0x45d560u;
    // NOP
    // 0x45d564: 0x0  nop
    ctx->pc = 0x45d564u;
    // NOP
    // 0x45d568: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45D568u;
    {
        const bool branch_taken_0x45d568 = (false);
        if (branch_taken_0x45d568) {
            ctx->pc = 0x45D554u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d554;
        }
    }
    ctx->pc = 0x45D570u;
    // 0x45d570: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45d570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45d574: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45d574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_45d578:
    // 0x45d578: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45d578u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45d57c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45d57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45d580: 0x0  nop
    ctx->pc = 0x45d580u;
    // NOP
    // 0x45d584: 0x0  nop
    ctx->pc = 0x45d584u;
    // NOP
    // 0x45d588: 0x0  nop
    ctx->pc = 0x45d588u;
    // NOP
    // 0x45d58c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45D58Cu;
    {
        const bool branch_taken_0x45d58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45d58c) {
            ctx->pc = 0x45D578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d578;
        }
    }
    ctx->pc = 0x45D594u;
label_45d594:
    // 0x45d594: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45d594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45d598: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x45d598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45d59c: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x45d59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x45d5a0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45d5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45d5a4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45d5a4u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x45d5a8: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x45d5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x45d5ac: 0x24041fc0  addiu       $a0, $zero, 0x1FC0
    ctx->pc = 0x45d5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8128));
    // 0x45d5b0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45d5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45d5b4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x45d5b4u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x45d5b8: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x45d5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x45d5bc: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x45d5bcu;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 19)); // MMIO: 0x10000000
    // 0x45d5c0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45d5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45d5c4: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x45d5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x45d5c8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45d5cc: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x45d5ccu;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 6)); // MMIO: 0x10000000
    // 0x45d5d0: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x45d5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x45d5d4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45d5d4u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x45d5d8: 0xf  sync
    ctx->pc = 0x45d5d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45d5dc: 0x40f  sync.p
    ctx->pc = 0x45d5dcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45d5e0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x45D5E0u;
    {
        const bool branch_taken_0x45d5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45D5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45D5E0u;
        // 0x45d5e4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45d5e0) {
            ctx->pc = 0x45D6BCu;
            goto label_45d6bc;
        }
    }
    ctx->pc = 0x45D5E8u;
label_45d5e8:
    // 0x45d5e8: 0xc640006c  lwc1        $f0, 0x6C($s2)
    ctx->pc = 0x45d5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45d5ec: 0xc6410068  lwc1        $f1, 0x68($s2)
    ctx->pc = 0x45d5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45d5f0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x45d5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x45d5f4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x45d5f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x45d5f8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x45d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_45d5fc:
    // 0x45d5fc: 0x42000039  di
    ctx->pc = 0x45d5fcu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45d600: 0x40f  sync.p
    ctx->pc = 0x45d600u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45d604: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x45d604u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x45d608: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x45d608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x45d60c: 0x0  nop
    ctx->pc = 0x45d60cu;
    // NOP
    // 0x45d610: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45D610u;
    {
        const bool branch_taken_0x45d610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x45d610) {
            ctx->pc = 0x45D5FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d5fc;
        }
    }
    ctx->pc = 0x45D618u;
    // 0x45d618: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x45d618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x45d61c: 0x48c3a800  ctc2.ni     $v1, $vi21
    ctx->pc = 0x45d61cu;
    { uint32_t tmp = GPR_U32(ctx, 3); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45d620: 0x4a0002ff  vnop
    ctx->pc = 0x45d620u;
    // NOP operation, no action needed for VU0
    // 0x45d624: 0x4a0002ff  vnop
    ctx->pc = 0x45d624u;
    // NOP operation, no action needed for VU0
    // 0x45d628: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x45d628u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45d62c: 0x4be00962  vaddi.xyzw  $vf5, $vf1, $I
    ctx->pc = 0x45d62cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x45d630: 0x42000038  ei
    ctx->pc = 0x45d630u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x45d634: 0x5a200021  blezl       $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x45D634u;
    {
        const bool branch_taken_0x45d634 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x45d634) {
            ctx->pc = 0x45D638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x45D634u;
            // 0x45d638: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x45D6BCu;
            goto label_45d6bc;
        }
    }
    ctx->pc = 0x45D63Cu;
    // 0x45d63c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x45d63cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45d640: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x45d640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45d644: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x45d644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_45d648:
    // 0x45d648: 0x42000039  di
    ctx->pc = 0x45d648u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45d64c: 0x40f  sync.p
    ctx->pc = 0x45d64cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45d650: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x45d650u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x45d654: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x45d654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x45d658: 0x0  nop
    ctx->pc = 0x45d658u;
    // NOP
    // 0x45d65c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45D65Cu;
    {
        const bool branch_taken_0x45d65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45d65c) {
            ctx->pc = 0x45D648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d648;
        }
    }
    ctx->pc = 0x45D664u;
    // 0x45d664: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x45d664u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x45d668: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x45d668u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x45d66c: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x45d66cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x45d670: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x45d670u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x45d674: 0x4be50998  vmulx.xyzw  $vf6, $vf1, $vf5x
    ctx->pc = 0x45d674u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x45d678: 0x4be511d9  vmuly.xyzw  $vf7, $vf2, $vf5y
    ctx->pc = 0x45d678u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45d67c: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x45d67cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x45d680: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x45d680u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45d684: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x45d684u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x45d688: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x45d688u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x45d68c: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x45d68cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x45d690: 0xfa6a0030  sqc2        $vf10, 0x30($s3)
    ctx->pc = 0x45d690u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x45d694: 0xfa6b0020  sqc2        $vf11, 0x20($s3)
    ctx->pc = 0x45d694u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x45d698: 0xfa6c0000  sqc2        $vf12, 0x0($s3)
    ctx->pc = 0x45d698u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x45d69c: 0xfa6d0010  sqc2        $vf13, 0x10($s3)
    ctx->pc = 0x45d69cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x45d6a0: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x45d6a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x45d6a4: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x45d6a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x45d6a8: 0x42000038  ei
    ctx->pc = 0x45d6a8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x45d6ac: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x45d6acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x45d6b0: 0x14e0ffe5  bnez        $a3, . + 4 + (-0x1B << 2)
    ctx->pc = 0x45D6B0u;
    {
        const bool branch_taken_0x45d6b0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x45d6b0) {
            ctx->pc = 0x45D648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d648;
        }
    }
    ctx->pc = 0x45D6B8u;
label_45d6b8:
    // 0x45d6b8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x45d6b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_45d6bc:
    // 0x45d6bc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x45d6bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x45d6c0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x45d6c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x45d6c4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x45d6c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x45d6c8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x45d6c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45d6cc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x45d6ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45d6d0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x45d6d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45d6d4: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x45d6d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45d6d8: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x45d6d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45d6dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x45d6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45d6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x45D6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45D6E0u;
        // 0x45d6e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45D6E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45D6E8u;
}
