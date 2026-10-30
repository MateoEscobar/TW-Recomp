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

// Function: sub_002A9EC0
// Address: 0x2a9ec0 - 0x2aa490
void sub_002A9EC0_0x2a9ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9EC0_0x2a9ec0");
#endif

    switch (ctx->pc) {
        case 0x2a9f20u: goto label_2a9f20;
        case 0x2a9f40u: goto label_2a9f40;
        case 0x2a9f54u: goto label_2a9f54;
        case 0x2a9f70u: goto label_2a9f70;
        case 0x2aa038u: goto label_2aa038;
        case 0x2aa064u: goto label_2aa064;
        case 0x2aa070u: goto label_2aa070;
        case 0x2aa094u: goto label_2aa094;
        case 0x2aa0acu: goto label_2aa0ac;
        case 0x2aa0e8u: goto label_2aa0e8;
        case 0x2aa114u: goto label_2aa114;
        case 0x2aa134u: goto label_2aa134;
        case 0x2aa160u: goto label_2aa160;
        case 0x2aa288u: goto label_2aa288;
        case 0x2aa2a8u: goto label_2aa2a8;
        case 0x2aa2b4u: goto label_2aa2b4;
        case 0x2aa2f4u: goto label_2aa2f4;
        case 0x2aa30cu: goto label_2aa30c;
        case 0x2aa344u: goto label_2aa344;
        case 0x2aa358u: goto label_2aa358;
        case 0x2aa364u: goto label_2aa364;
        case 0x2aa3e8u: goto label_2aa3e8;
        case 0x2aa430u: goto label_2aa430;
        case 0x2aa43cu: goto label_2aa43c;
        case 0x2aa468u: goto label_2aa468;
        default: break;
    }

    ctx->pc = 0x2a9ec0u;

    // 0x2a9ec0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2a9ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2a9ec4: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x2a9ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x2a9ec8: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x2a9ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x2a9ecc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a9eccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ed0: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x2a9ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x2a9ed4: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x2a9ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x2a9ed8: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x2a9ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x2a9edc: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2a9edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2a9ee0: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x2a9ee0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2a9ee4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2a9ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a9ee8: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2a9ee8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x2a9eec: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9EECu;
    {
        const bool branch_taken_0x2a9eec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A9EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9EECu;
        // 0x2a9ef0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9eec) {
            ctx->pc = 0x2A9F00u;
            goto label_2a9f00;
        }
    }
    ctx->pc = 0x2A9EF4u;
    // 0x2a9ef4: 0x1000015d  b           . + 4 + (0x15D << 2)
    ctx->pc = 0x2A9EF4u;
    {
        const bool branch_taken_0x2a9ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9EF4u;
        // 0x2a9ef8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9ef4) {
            ctx->pc = 0x2AA46Cu;
            goto label_2aa46c;
        }
    }
    ctx->pc = 0x2A9EFCu;
    // 0x2a9efc: 0x0  nop
    ctx->pc = 0x2a9efcu;
    // NOP
label_2a9f00:
    // 0x2a9f00: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2a9f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2a9f04: 0x1465001c  bne         $v1, $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2A9F04u;
    {
        const bool branch_taken_0x2a9f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2A9F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F04u;
        // 0x2a9f08: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f04) {
            ctx->pc = 0x2A9F78u;
            goto label_2a9f78;
        }
    }
    ctx->pc = 0x2A9F0Cu;
    // 0x2a9f0c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a9f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2a9f10: 0x2405007d  addiu       $a1, $zero, 0x7D
    ctx->pc = 0x2a9f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x2a9f14: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2a9f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2a9f18: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2A9F18u;
    SET_GPR_U32(ctx, 31, 0x2A9F20u);
    ctx->pc = 0x2A9F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9F18u;
    // 0x2a9f1c: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2A9F18u, 0x2A9F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9F20u;
label_2a9f20:
    // 0x2a9f20: 0x92240030  lbu         $a0, 0x30($s1)
    ctx->pc = 0x2a9f20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2a9f24: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a9f24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9f28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a9f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9f2c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a9f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a9f30: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2a9f30u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2a9f34: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2a9f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a9f38: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2A9F38u;
    SET_GPR_U32(ctx, 31, 0x2A9F40u);
    ctx->pc = 0x2A9F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9F38u;
    // 0x2a9f3c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A9F38u, 0x2A9F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9F40u;
label_2a9f40:
    // 0x2a9f40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a9f40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9f44: 0x12400149  beqz        $s2, . + 4 + (0x149 << 2)
    ctx->pc = 0x2A9F44u;
    {
        const bool branch_taken_0x2a9f44 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F44u;
        // 0x2a9f48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f44) {
            ctx->pc = 0x2AA46Cu;
            goto label_2aa46c;
        }
    }
    ctx->pc = 0x2A9F4Cu;
    // 0x2a9f4c: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x2A9F4Cu;
    SET_GPR_U32(ctx, 31, 0x2A9F54u);
    ctx->pc = 0x2A9F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9F4Cu;
    // 0x2a9f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2A9F4Cu, 0x2A9F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9F54u;
label_2a9f54:
    // 0x2a9f54: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x2a9f54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2a9f58: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a9f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a9f5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a9f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9f60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a9f60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9f64: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2a9f64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2a9f68: 0xc0bf800  jal         func_2FE000
    ctx->pc = 0x2A9F68u;
    SET_GPR_U32(ctx, 31, 0x2A9F70u);
    ctx->pc = 0x2A9F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9F68u;
    // 0x2a9f6c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2A9F68u, 0x2A9F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9F70u;
label_2a9f70:
    // 0x2a9f70: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x2A9F70u;
    {
        const bool branch_taken_0x2a9f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F70u;
        // 0x2a9f74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f70) {
            ctx->pc = 0x2AA46Cu;
            goto label_2aa46c;
        }
    }
    ctx->pc = 0x2A9F78u;
label_2a9f78:
    // 0x2a9f78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a9f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9f7c: 0x5462004e  bnel        $v1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2A9F7Cu;
    {
        const bool branch_taken_0x2a9f7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a9f7c) {
            ctx->pc = 0x2A9F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9F7Cu;
            // 0x2a9f80: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA0B8u;
            goto label_2aa0b8;
        }
    }
    ctx->pc = 0x2A9F84u;
    // 0x2a9f84: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2a9f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a9f88: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2a9f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2a9f8c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2a9f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2a9f90: 0x26070090  addiu       $a3, $s0, 0x90
    ctx->pc = 0x2a9f90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2a9f94: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2a9f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2a9f98: 0x7a260020  lq          $a2, 0x20($s1)
    ctx->pc = 0x2a9f98u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2a9f9c: 0x84650092  lh          $a1, 0x92($v1)
    ctx->pc = 0x2a9f9cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
    // 0x2a9fa0: 0x24544b00  addiu       $s4, $v0, 0x4B00
    ctx->pc = 0x2a9fa0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2a9fa4: 0x84e30002  lh          $v1, 0x2($a3)
    ctx->pc = 0x2a9fa4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2a9fa8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2a9fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2a9fac: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x2a9facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x2a9fb0: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2a9fb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2a9fb4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a9fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a9fb8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2a9fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2a9fbc: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x2a9fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x2a9fc0: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2a9fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2a9fc4: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x2a9fc4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a9fc8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2a9fc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a9fcc: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x2a9fccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2a9fd0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2a9fd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2a9fd4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2a9fd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2a9fd8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2a9fd8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2a9fdc: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x2a9fdcu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2a9fe0: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x2a9fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x2a9fe4: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x2a9fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x2a9fe8: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x2a9fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x2a9fec: 0x84e20002  lh          $v0, 0x2($a3)
    ctx->pc = 0x2a9fecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2a9ff0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2a9ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a9ff4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2a9ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2a9ff8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2a9ff8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a9ffc: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x2a9ffcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x2aa000: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2aa000u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2aa004: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2aa004u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2aa008: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2aa008u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2aa00c: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x2aa00cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2aa010: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x2aa010u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2aa014: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x2aa014u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x2aa018: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x2aa018u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2aa01c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2aa01cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2aa020: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x2aa020u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2aa024: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x2aa024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
    // 0x2aa028: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2aa028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2aa02c: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x2aa02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x2aa030: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x2AA030u;
    SET_GPR_U32(ctx, 31, 0x2AA038u);
    ctx->pc = 0x2AA034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA030u;
    // 0x2aa034: 0x7fa60010  sq          $a2, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2AA030u, 0x2AA038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA038u;
label_2aa038:
    // 0x2aa038: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2aa038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aa03c: 0x0  nop
    ctx->pc = 0x2aa03cu;
    // NOP
    // 0x2aa040: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2AA040u;
    {
        const bool branch_taken_0x2aa040 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AA044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA040u;
        // 0x2aa044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa040) {
            ctx->pc = 0x2AA04Cu;
            goto label_2aa04c;
        }
    }
    ctx->pc = 0x2AA048u;
    // 0x2aa048: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2aa048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa04c:
    // 0x2aa04c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2AA04Cu;
    {
        const bool branch_taken_0x2aa04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA04Cu;
        // 0x2aa050: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa04c) {
            ctx->pc = 0x2AA0B4u;
            goto label_2aa0b4;
        }
    }
    ctx->pc = 0x2AA054u;
    // 0x2aa054: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x2aa054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2aa058: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2aa058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2aa05c: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2AA05Cu;
    SET_GPR_U32(ctx, 31, 0x2AA064u);
    ctx->pc = 0x2AA060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA05Cu;
    // 0x2aa060: 0x2406007d  addiu       $a2, $zero, 0x7D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2AA05Cu, 0x2AA064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA064u;
label_2aa064:
    // 0x2aa064: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2aa064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aa068: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2AA068u;
    SET_GPR_U32(ctx, 31, 0x2AA070u);
    ctx->pc = 0x2AA06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA068u;
    // 0x2aa06c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2AA068u, 0x2AA070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA070u;
label_2aa070:
    // 0x2aa070: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2aa070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa074: 0x124000fd  beqz        $s2, . + 4 + (0xFD << 2)
    ctx->pc = 0x2AA074u;
    {
        const bool branch_taken_0x2aa074 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA074u;
        // 0x2aa078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa074) {
            ctx->pc = 0x2AA46Cu;
            goto label_2aa46c;
        }
    }
    ctx->pc = 0x2AA07Cu;
    // 0x2aa07c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2aa07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2aa080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aa080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa084: 0x84500092  lh          $s0, 0x92($v0)
    ctx->pc = 0x2aa084u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x2aa088: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2aa088u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2aa08c: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x2AA08Cu;
    SET_GPR_U32(ctx, 31, 0x2AA094u);
    ctx->pc = 0x2AA090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA08Cu;
    // 0x2aa090: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2AA08Cu, 0x2AA094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA094u;
label_2aa094:
    // 0x2aa094: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2aa094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aa098: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aa098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa09c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2aa09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa0a0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2aa0a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2aa0a4: 0xc0bf800  jal         func_2FE000
    ctx->pc = 0x2AA0A4u;
    SET_GPR_U32(ctx, 31, 0x2AA0ACu);
    ctx->pc = 0x2AA0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA0A4u;
    // 0x2aa0a8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2AA0A4u, 0x2AA0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA0ACu;
label_2aa0ac:
    // 0x2aa0ac: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x2AA0ACu;
    {
        const bool branch_taken_0x2aa0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA0ACu;
        // 0x2aa0b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa0ac) {
            ctx->pc = 0x2AA46Cu;
            goto label_2aa46c;
        }
    }
    ctx->pc = 0x2AA0B4u;
label_2aa0b4:
    // 0x2aa0b4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2aa0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2aa0b8:
    // 0x2aa0b8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2aa0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2aa0bc: 0x54670017  bnel        $v1, $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x2AA0BCu;
    {
        const bool branch_taken_0x2aa0bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x2aa0bc) {
            ctx->pc = 0x2AA0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA0BCu;
            // 0x2aa0c0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA11Cu;
            goto label_2aa11c;
        }
    }
    ctx->pc = 0x2AA0C4u;
    // 0x2aa0c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2aa0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aa0c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2aa0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa0cc: 0x8c43026c  lw          $v1, 0x26C($v0)
    ctx->pc = 0x2aa0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
    // 0x2aa0d0: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AA0D0u;
    {
        const bool branch_taken_0x2aa0d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2AA0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA0D0u;
        // 0x2aa0d4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa0d0) {
            ctx->pc = 0x2AA0DCu;
            goto label_2aa0dc;
        }
    }
    ctx->pc = 0x2AA0D8u;
    // 0x2aa0d8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2aa0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2aa0dc:
    // 0x2aa0dc: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2aa0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2aa0e0: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2AA0E0u;
    SET_GPR_U32(ctx, 31, 0x2AA0E8u);
    ctx->pc = 0x2AA0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA0E0u;
    // 0x2aa0e4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2AA0E0u, 0x2AA0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA0E8u;
label_2aa0e8:
    // 0x2aa0e8: 0x504000e0  beql        $v0, $zero, . + 4 + (0xE0 << 2)
    ctx->pc = 0x2AA0E8u;
    {
        const bool branch_taken_0x2aa0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa0e8) {
            ctx->pc = 0x2AA0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA0E8u;
            // 0x2aa0ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA46Cu;
            goto label_2aa46c;
        }
    }
    ctx->pc = 0x2AA0F0u;
    // 0x2aa0f0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2aa0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aa0f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aa0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa0f8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2aa0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2aa0fc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2aa0fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2aa100: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2aa100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2aa104: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2aa104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x2aa108: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2aa108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa10c: 0xc0be8c0  jal         func_2FA300
    ctx->pc = 0x2AA10Cu;
    SET_GPR_U32(ctx, 31, 0x2AA114u);
    ctx->pc = 0x2AA110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA10Cu;
    // 0x2aa110: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2AA10Cu, 0x2AA114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA114u;
label_2aa114:
    // 0x2aa114: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x2AA114u;
    {
        const bool branch_taken_0x2aa114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA114u;
        // 0x2aa118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa114) {
            ctx->pc = 0x2AA46Cu;
            goto label_2aa46c;
        }
    }
    ctx->pc = 0x2AA11Cu;
label_2aa11c:
    // 0x2aa11c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2AA11Cu;
    {
        const bool branch_taken_0x2aa11c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AA120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA11Cu;
        // 0x2aa120: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa11c) {
            ctx->pc = 0x2AA168u;
            goto label_2aa168;
        }
    }
    ctx->pc = 0x2AA124u;
    // 0x2aa124: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2aa124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2aa128: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2aa128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aa12c: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2AA12Cu;
    SET_GPR_U32(ctx, 31, 0x2AA134u);
    ctx->pc = 0x2AA130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA12Cu;
    // 0x2aa130: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2AA12Cu, 0x2AA134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA134u;
label_2aa134:
    // 0x2aa134: 0x504000cd  beql        $v0, $zero, . + 4 + (0xCD << 2)
    ctx->pc = 0x2AA134u;
    {
        const bool branch_taken_0x2aa134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa134) {
            ctx->pc = 0x2AA138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA134u;
            // 0x2aa138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA46Cu;
            goto label_2aa46c;
        }
    }
    ctx->pc = 0x2AA13Cu;
    // 0x2aa13c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2aa13cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aa140: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aa140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa144: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2aa144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2aa148: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2aa148u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2aa14c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2aa14cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2aa150: 0x2406025c  addiu       $a2, $zero, 0x25C
    ctx->pc = 0x2aa150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
    // 0x2aa154: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2aa154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa158: 0xc0be8c0  jal         func_2FA300
    ctx->pc = 0x2AA158u;
    SET_GPR_U32(ctx, 31, 0x2AA160u);
    ctx->pc = 0x2AA15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA158u;
    // 0x2aa15c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2AA158u, 0x2AA160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA160u;
label_2aa160:
    // 0x2aa160: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x2AA160u;
    {
        const bool branch_taken_0x2aa160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA160u;
        // 0x2aa164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa160) {
            ctx->pc = 0x2AA46Cu;
            goto label_2aa46c;
        }
    }
    ctx->pc = 0x2AA168u;
label_2aa168:
    // 0x2aa168: 0x146200a1  bne         $v1, $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2AA168u;
    {
        const bool branch_taken_0x2aa168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AA16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA168u;
        // 0x2aa16c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa168) {
            ctx->pc = 0x2AA3F0u;
            goto label_2aa3f0;
        }
    }
    ctx->pc = 0x2AA170u;
    // 0x2aa170: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2aa170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2aa174: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2aa174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2aa178: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x2aa178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
    // 0x2aa17c: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x2aa17cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2aa180: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2aa180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aa184: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x2aa184u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x2aa188: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aa188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aa18c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2aa18cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2aa190: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2aa190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2aa194: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2aa194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aa198: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2aa198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2aa19c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2aa19cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2aa1a0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2aa1a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2aa1a4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2aa1a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2aa1a8: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2aa1a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2aa1ac: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2aa1acu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2aa1b0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2aa1b0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2aa1b4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2aa1b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2aa1b8: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2aa1b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2aa1bc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2aa1bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2aa1c0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2aa1c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2aa1c4: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2aa1c4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x2aa1c8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2aa1c8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2aa1cc: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2aa1ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2aa1d0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2aa1d0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2aa1d4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2aa1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2aa1d8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2aa1d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2aa1dc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2aa1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2aa1e0: 0x0  nop
    ctx->pc = 0x2aa1e0u;
    // NOP
    // 0x2aa1e4: 0x0  nop
    ctx->pc = 0x2aa1e4u;
    // NOP
    // 0x2aa1e8: 0x460d2803  div.s       $f0, $f5, $f13
    ctx->pc = 0x2aa1e8u;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[5], ctx->f[13]); }
    // 0x2aa1ec: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x2aa1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x2aa1f0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2aa1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2aa1f4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2aa1f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2aa1f8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2aa1f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2aa1fc: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x2aa1fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2aa200: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2aa200u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2aa204: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2aa204u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2aa208: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2aa208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x2aa20c: 0x8ca2026c  lw          $v0, 0x26C($a1)
    ctx->pc = 0x2aa20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 620)));
    // 0x2aa210: 0x14460040  bne         $v0, $a2, . + 4 + (0x40 << 2)
    ctx->pc = 0x2AA210u;
    {
        const bool branch_taken_0x2aa210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x2AA214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA210u;
        // 0x2aa214: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa210) {
            ctx->pc = 0x2AA314u;
            goto label_2aa314;
        }
    }
    ctx->pc = 0x2AA218u;
    // 0x2aa218: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2aa218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa21c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2aa21cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2aa220: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2aa220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa224: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2aa224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2aa228: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2aa228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa22c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2aa22cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2aa230: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x2aa230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x2aa234: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2aa234u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2aa238: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2aa238u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2aa23c: 0xc7a4001c  lwc1        $f4, 0x1C($sp)
    ctx->pc = 0x2aa23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2aa240: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x2aa240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aa244: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2aa244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2aa248: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2aa248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2aa24c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aa24cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa250: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2aa250u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2aa254: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x2aa254u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x2aa258: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x2aa258u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2aa25c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2aa25cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa260: 0xe7a400ac  swc1        $f4, 0xAC($sp)
    ctx->pc = 0x2aa260u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2aa264: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2aa264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2aa268: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aa268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa26c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x2aa26cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2aa270: 0x8c6447c4  lw          $a0, 0x47C4($v1)
    ctx->pc = 0x2aa270u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5147C4u));
    // 0x2aa274: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2aa274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2aa278: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x2aa278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x2aa27c: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x2aa27cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2aa280: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x2AA280u;
    SET_GPR_U32(ctx, 31, 0x2AA288u);
    ctx->pc = 0x2AA284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA280u;
    // 0x2aa284: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x2AA280u, 0x2AA288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA288u;
label_2aa288:
    // 0x2aa288: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2aa288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2aa28c: 0x14400077  bnez        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x2AA28Cu;
    {
        const bool branch_taken_0x2aa28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA28Cu;
        // 0x2aa290: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa28c) {
            ctx->pc = 0x2AA46Cu;
            goto label_2aa46c;
        }
    }
    ctx->pc = 0x2AA294u;
    // 0x2aa294: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2aa294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2aa298: 0x2405007d  addiu       $a1, $zero, 0x7D
    ctx->pc = 0x2aa298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x2aa29c: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2aa29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2aa2a0: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2AA2A0u;
    SET_GPR_U32(ctx, 31, 0x2AA2A8u);
    ctx->pc = 0x2AA2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA2A0u;
    // 0x2aa2a4: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2AA2A0u, 0x2AA2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA2A8u;
label_2aa2a8:
    // 0x2aa2a8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2aa2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aa2ac: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2AA2ACu;
    SET_GPR_U32(ctx, 31, 0x2AA2B4u);
    ctx->pc = 0x2AA2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA2ACu;
    // 0x2aa2b0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2AA2ACu, 0x2AA2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA2B4u;
label_2aa2b4:
    // 0x2aa2b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2aa2b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa2b8: 0x1260006c  beqz        $s3, . + 4 + (0x6C << 2)
    ctx->pc = 0x2AA2B8u;
    {
        const bool branch_taken_0x2aa2b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA2B8u;
        // 0x2aa2bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa2b8) {
            ctx->pc = 0x2AA46Cu;
            goto label_2aa46c;
        }
    }
    ctx->pc = 0x2AA2C0u;
    // 0x2aa2c0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2aa2c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa2c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aa2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa2c8: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2aa2c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa2cc: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x2aa2ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2aa2d0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2aa2d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2aa2d4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2aa2d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2aa2d8: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2aa2d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2aa2dc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2aa2dcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2aa2e0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2aa2e0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2aa2e4: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x2aa2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x2aa2e8: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2aa2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2aa2ec: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x2AA2ECu;
    SET_GPR_U32(ctx, 31, 0x2AA2F4u);
    ctx->pc = 0x2AA2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA2ECu;
    // 0x2aa2f0: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2AA2ECu, 0x2AA2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA2F4u;
label_2aa2f4:
    // 0x2aa2f4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2aa2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aa2f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2aa2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa2fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2aa2fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa300: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2aa300u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2aa304: 0xc0bf800  jal         func_2FE000
    ctx->pc = 0x2AA304u;
    SET_GPR_U32(ctx, 31, 0x2AA30Cu);
    ctx->pc = 0x2AA308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA304u;
    // 0x2aa308: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2AA304u, 0x2AA30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA30Cu;
label_2aa30c:
    // 0x2aa30c: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x2AA30Cu;
    {
        const bool branch_taken_0x2aa30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA30Cu;
        // 0x2aa310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa30c) {
            ctx->pc = 0x2AA46Cu;
            goto label_2aa46c;
        }
    }
    ctx->pc = 0x2AA314u;
label_2aa314:
    // 0x2aa314: 0x14470055  bne         $v0, $a3, . + 4 + (0x55 << 2)
    ctx->pc = 0x2AA314u;
    {
        const bool branch_taken_0x2aa314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x2AA318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA314u;
        // 0x2aa318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa314) {
            ctx->pc = 0x2AA46Cu;
            goto label_2aa46c;
        }
    }
    ctx->pc = 0x2AA31Cu;
    // 0x2aa31c: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x2aa31cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x2aa320: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2aa320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2aa324: 0x0  nop
    ctx->pc = 0x2aa324u;
    // NOP
    // 0x2aa328: 0x460d6034  c.lt.s      $f12, $f13
    ctx->pc = 0x2aa328u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aa32c: 0x0  nop
    ctx->pc = 0x2aa32cu;
    // NOP
    // 0x2aa330: 0x4500004e  bc1f        . + 4 + (0x4E << 2)
    ctx->pc = 0x2AA330u;
    {
        const bool branch_taken_0x2aa330 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AA334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA330u;
        // 0x2aa334: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa330) {
            ctx->pc = 0x2AA46Cu;
            goto label_2aa46c;
        }
    }
    ctx->pc = 0x2AA338u;
    // 0x2aa338: 0x2610b880  addiu       $s0, $s0, -0x4780
    ctx->pc = 0x2aa338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948992));
    // 0x2aa33c: 0xc0cd508  jal         func_335420
    ctx->pc = 0x2AA33Cu;
    SET_GPR_U32(ctx, 31, 0x2AA344u);
    ctx->pc = 0x2AA340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA33Cu;
    // 0x2aa340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2AA33Cu, 0x2AA344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA344u;
label_2aa344:
    // 0x2aa344: 0x240601f4  addiu       $a2, $zero, 0x1F4
    ctx->pc = 0x2aa344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x2aa348: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2aa348u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2aa34c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aa34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa350: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2AA350u;
    SET_GPR_U32(ctx, 31, 0x2AA358u);
    ctx->pc = 0x2AA354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA350u;
    // 0x2aa354: 0x2405007d  addiu       $a1, $zero, 0x7D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2AA350u, 0x2AA358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA358u;
label_2aa358:
    // 0x2aa358: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2aa358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aa35c: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2AA35Cu;
    SET_GPR_U32(ctx, 31, 0x2AA364u);
    ctx->pc = 0x2AA360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA35Cu;
    // 0x2aa360: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2AA35Cu, 0x2AA364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA364u;
label_2aa364:
    // 0x2aa364: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2aa364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa368: 0x10c00040  beqz        $a2, . + 4 + (0x40 << 2)
    ctx->pc = 0x2AA368u;
    {
        const bool branch_taken_0x2aa368 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA368u;
        // 0x2aa36c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa368) {
            ctx->pc = 0x2AA46Cu;
            goto label_2aa46c;
        }
    }
    ctx->pc = 0x2AA370u;
    // 0x2aa370: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x2aa370u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2aa374: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2aa374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2aa378: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2aa378u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa37c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2aa37cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa380: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2aa380u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2aa384: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2aa384u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2aa388: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2aa388u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2aa38c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2aa38cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2aa390: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2aa390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aa394: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x2aa394u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa398: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2aa398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aa39c: 0x8c8abd30  lw          $t2, -0x42D0($a0)
    ctx->pc = 0x2aa39cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950192)));
    // 0x2aa3a0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2aa3a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2aa3a4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2aa3a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2aa3a8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2aa3a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2aa3ac: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2aa3acu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2aa3b0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2aa3b0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2aa3b4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2aa3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa3b8: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2aa3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x2aa3bc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2aa3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2aa3c0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2aa3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2aa3c4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2aa3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2aa3c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2aa3c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2aa3cc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2aa3ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa3d0: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2aa3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2aa3d4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2aa3d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa3d8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2aa3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2aa3dc: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2aa3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x2aa3e0: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2AA3E0u;
    SET_GPR_U32(ctx, 31, 0x2AA3E8u);
    ctx->pc = 0x2AA3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA3E0u;
    // 0x2aa3e4: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2AA3E0u, 0x2AA3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA3E8u;
label_2aa3e8:
    // 0x2aa3e8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2AA3E8u;
    {
        const bool branch_taken_0x2aa3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA3E8u;
        // 0x2aa3ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa3e8) {
            ctx->pc = 0x2AA46Cu;
            goto label_2aa46c;
        }
    }
    ctx->pc = 0x2AA3F0u;
label_2aa3f0:
    // 0x2aa3f0: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2AA3F0u;
    {
        const bool branch_taken_0x2aa3f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AA3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA3F0u;
        // 0x2aa3f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa3f0) {
            ctx->pc = 0x2AA46Cu;
            goto label_2aa46c;
        }
    }
    ctx->pc = 0x2AA3F8u;
    // 0x2aa3f8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2aa3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2aa3fc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2aa3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aa400: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2aa400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2aa404: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2aa404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aa408: 0x8c82026c  lw          $v0, 0x26C($a0)
    ctx->pc = 0x2aa408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 620)));
    // 0x2aa40c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA40Cu;
    {
        const bool branch_taken_0x2aa40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2AA410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA40Cu;
        // 0x2aa410: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa40c) {
            ctx->pc = 0x2AA420u;
            goto label_2aa420;
        }
    }
    ctx->pc = 0x2AA414u;
    // 0x2aa414: 0x14470015  bne         $v0, $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x2AA414u;
    {
        const bool branch_taken_0x2aa414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x2AA418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA414u;
        // 0x2aa418: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa414) {
            ctx->pc = 0x2AA46Cu;
            goto label_2aa46c;
        }
    }
    ctx->pc = 0x2AA41Cu;
    // 0x2aa41c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2aa41cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2aa420:
    // 0x2aa420: 0x2405007d  addiu       $a1, $zero, 0x7D
    ctx->pc = 0x2aa420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x2aa424: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2aa424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2aa428: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2AA428u;
    SET_GPR_U32(ctx, 31, 0x2AA430u);
    ctx->pc = 0x2AA42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA428u;
    // 0x2aa42c: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2AA428u, 0x2AA430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA430u;
label_2aa430:
    // 0x2aa430: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2aa430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aa434: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2AA434u;
    SET_GPR_U32(ctx, 31, 0x2AA43Cu);
    ctx->pc = 0x2AA438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA434u;
    // 0x2aa438: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2AA434u, 0x2AA43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA43Cu;
label_2aa43c:
    // 0x2aa43c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2AA43Cu;
    {
        const bool branch_taken_0x2aa43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa43c) {
            ctx->pc = 0x2AA440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA43Cu;
            // 0x2aa440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA46Cu;
            goto label_2aa46c;
        }
    }
    ctx->pc = 0x2AA444u;
    // 0x2aa444: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2aa444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aa448: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aa448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa44c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2aa44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2aa450: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2aa450u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2aa454: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2aa454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2aa458: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2aa458u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa45c: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2aa45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x2aa460: 0xc0be8c0  jal         func_2FA300
    ctx->pc = 0x2AA460u;
    SET_GPR_U32(ctx, 31, 0x2AA468u);
    ctx->pc = 0x2AA464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA460u;
    // 0x2aa464: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2AA460u, 0x2AA468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA468u;
label_2aa468:
    // 0x2aa468: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2aa468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa46c:
    // 0x2aa46c: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x2aa46cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2aa470: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x2aa470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2aa474: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x2aa474u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2aa478: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x2aa478u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2aa47c: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x2aa47cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2aa480: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2aa480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2aa484: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x2aa484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2aa488: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA488u;
        // 0x2aa48c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA490u;
}
