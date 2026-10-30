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

// Function: sub_0019EF80
// Address: 0x19ef80 - 0x19f0f8
void sub_0019EF80_0x19ef80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EF80_0x19ef80");
#endif

    switch (ctx->pc) {
        case 0x19eff0u: goto label_19eff0;
        case 0x19f038u: goto label_19f038;
        case 0x19f048u: goto label_19f048;
        case 0x19f05cu: goto label_19f05c;
        case 0x19f094u: goto label_19f094;
        case 0x19f0a4u: goto label_19f0a4;
        default: break;
    }

    ctx->pc = 0x19ef80u;

    // 0x19ef80: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x19ef80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x19ef84: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x19ef84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x19ef88: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x19ef88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x19ef8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ef8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef90: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x19ef90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x19ef94: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x19ef94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19ef98: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x19ef98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x19ef9c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x19ef9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19efa0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x19efa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x19efa4: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x19efa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19efa8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x19efa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x19efac: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x19efacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19efb0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19efb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x19efb4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x19efb4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19efb8: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x19efb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x19efbc: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x19efbcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19efc0: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x19efc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x19efc4: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x19efc4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19efc8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19efc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19efcc: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x19efccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19efd0: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x19efd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x19efd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19efd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19efd8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x19efd8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x19efdc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19efdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19efe0: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x19efe0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x19efe4: 0x26110480  addiu       $s1, $s0, 0x480
    ctx->pc = 0x19efe4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x19efe8: 0xc048b52  jal         func_122D48
    ctx->pc = 0x19EFE8u;
    SET_GPR_U32(ctx, 31, 0x19EFF0u);
    ctx->pc = 0x19EFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EFE8u;
    // 0x19efec: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x19EFE8u, 0x19EFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EFF0u;
label_19eff0:
    // 0x19eff0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x19eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x19eff4: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x19eff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
    // 0x19eff8: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x19eff8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
    // 0x19effc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x19effcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x19f000: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x19f000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x19f004: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x19f004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19f008: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x19f008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x19f00c: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x19f00cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f010: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x19f010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x19f014: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19f014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f018: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x19f018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x19f01c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x19f01cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f020: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19f020u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f024: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x19f024u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19f028: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19f028u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x19f02c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19f02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f030: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x19F030u;
    SET_GPR_U32(ctx, 31, 0x19F038u);
    ctx->pc = 0x19F034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F030u;
    // 0x19f034: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x19F030u, 0x19F038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F038u;
label_19f038:
    // 0x19f038: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x19f038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19f03c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19f03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f040: 0xc068818  jal         func_1A2060
    ctx->pc = 0x19F040u;
    SET_GPR_U32(ctx, 31, 0x19F048u);
    ctx->pc = 0x19F044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F040u;
    // 0x19f044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x19F040u, 0x19F048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F048u;
label_19f048:
    // 0x19f048: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19f048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f04c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19f04cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x19f050: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x19f050u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x19f054: 0xc068848  jal         func_1A2120
    ctx->pc = 0x19F054u;
    SET_GPR_U32(ctx, 31, 0x19F05Cu);
    ctx->pc = 0x19F058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F054u;
    // 0x19f058: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x19F054u, 0x19F05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F05Cu;
label_19f05c:
    // 0x19f05c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x19f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x19f060: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19f060u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x19f064: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19f064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19f068: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x19f068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x19f06c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x19f06cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f070: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x19f070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x19f074: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x19f074u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f078: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x19f078u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f07c: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x19f07cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f080: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x19f080u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f084: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x19f084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19f088: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x19f088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f08c: 0xc06e424  jal         func_1B9090
    ctx->pc = 0x19F08Cu;
    SET_GPR_U32(ctx, 31, 0x19F094u);
    ctx->pc = 0x19F090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F08Cu;
    // 0x19f090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x19F08Cu, 0x19F094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F094u;
label_19f094:
    // 0x19f094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f098: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x19f098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19f09c: 0xc079bd4  jal         func_1E6F50
    ctx->pc = 0x19F09Cu;
    SET_GPR_U32(ctx, 31, 0x19F0A4u);
    ctx->pc = 0x19F0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F09Cu;
    // 0x19f0a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6F50u, 0x19F09Cu, 0x19F0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F0A4u;
label_19f0a4:
    // 0x19f0a4: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x19f0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19f0a8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x19f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x19f0ac: 0xe6000464  swc1        $f0, 0x464($s0)
    ctx->pc = 0x19f0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1124), bits); }
    // 0x19f0b0: 0xae020468  sw          $v0, 0x468($s0)
    ctx->pc = 0x19f0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1128), GPR_U32(ctx, 2));
    // 0x19f0b4: 0xae000580  sw          $zero, 0x580($s0)
    ctx->pc = 0x19f0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1408), GPR_U32(ctx, 0));
    // 0x19f0b8: 0xae00046c  sw          $zero, 0x46C($s0)
    ctx->pc = 0x19f0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1132), GPR_U32(ctx, 0));
    // 0x19f0bc: 0xae000470  sw          $zero, 0x470($s0)
    ctx->pc = 0x19f0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1136), GPR_U32(ctx, 0));
    // 0x19f0c0: 0xae000584  sw          $zero, 0x584($s0)
    ctx->pc = 0x19f0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1412), GPR_U32(ctx, 0));
    // 0x19f0c4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x19f0c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19f0c8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x19f0c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19f0cc: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x19f0ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19f0d0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x19f0d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19f0d4: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x19f0d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19f0d8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x19f0d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19f0dc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x19f0dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19f0e0: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x19f0e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19f0e4: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x19f0e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f0e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19f0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f0ec: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x19f0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19f0f0: 0x3e00008  jr          $ra
    ctx->pc = 0x19F0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F0F0u;
        // 0x19f0f4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F0F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F0F8u;
}
