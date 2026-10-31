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

// Function: sub_00426E70
// Address: 0x426e70 - 0x4273e8
void sub_00426E70_0x426e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00426E70_0x426e70");
#endif

    switch (ctx->pc) {
        case 0x426f3cu: goto label_426f3c;
        case 0x4270b8u: goto label_4270b8;
        case 0x4270c8u: goto label_4270c8;
        case 0x4270dcu: goto label_4270dc;
        case 0x427108u: goto label_427108;
        case 0x427230u: goto label_427230;
        case 0x427240u: goto label_427240;
        case 0x427264u: goto label_427264;
        default: break;
    }

    ctx->pc = 0x426e70u;

    // 0x426e70: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x426e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x426e74: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x426e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x426e78: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x426e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x426e7c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x426e7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426e80: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x426e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x426e84: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x426e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x426e88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x426e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x426e8c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x426e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x426e90: 0x8e530008  lw          $s3, 0x8($s2)
    ctx->pc = 0x426e90u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x426e94: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x426e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x426e98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x426e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x426e9c: 0x8cc30054  lw          $v1, 0x54($a2)
    ctx->pc = 0x426e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x426ea0: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x426ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x426ea4: 0x8cc40018  lw          $a0, 0x18($a2)
    ctx->pc = 0x426ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x426ea8: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x426EA8u;
    {
        const bool branch_taken_0x426ea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x426EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426EA8u;
        // 0x426eac: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426ea8) {
            ctx->pc = 0x426EF4u;
            goto label_426ef4;
        }
    }
    ctx->pc = 0x426EB0u;
    // 0x426eb0: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x426eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x426eb4: 0x8cc50054  lw          $a1, 0x54($a2)
    ctx->pc = 0x426eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x426eb8: 0x8c627004  lw          $v0, 0x7004($v1)
    ctx->pc = 0x426eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x597004u));
    // 0x426ebc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x426ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426ec0: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x426ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x426ec4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x426ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x426ec8: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x426EC8u;
    {
        const bool branch_taken_0x426ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x426ec8) {
            ctx->pc = 0x426ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x426EC8u;
            // 0x426ecc: 0x8cc47004  lw          $a0, 0x7004($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28676)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x426EE8u;
            goto label_426ee8;
        }
    }
    ctx->pc = 0x426ED0u;
    // 0x426ed0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x426ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x426ed4: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x426ed4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x426ed8: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x426ED8u;
    {
        const bool branch_taken_0x426ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x426EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426ED8u;
        // 0x426edc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426ed8) {
            ctx->pc = 0x426F3Cu;
            goto label_426f3c;
        }
    }
    ctx->pc = 0x426EE0u;
    // 0x426ee0: 0x8cc47004  lw          $a0, 0x7004($a2)
    ctx->pc = 0x426ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28676)));
    // 0x426ee4: 0x0  nop
    ctx->pc = 0x426ee4u;
    // NOP
label_426ee8:
    // 0x426ee8: 0x94a50004  lhu         $a1, 0x4($a1)
    ctx->pc = 0x426ee8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x426eec: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x426EECu;
    {
        const bool branch_taken_0x426eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x426EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426EECu;
        // 0x426ef0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426eec) {
            ctx->pc = 0x426F34u;
            goto label_426f34;
        }
    }
    ctx->pc = 0x426EF4u;
label_426ef4:
    // 0x426ef4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x426ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x426ef8: 0x8c627000  lw          $v0, 0x7000($v1)
    ctx->pc = 0x426ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x597000u));
    // 0x426efc: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x426efcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426f00: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x426f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x426f04: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x426f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x426f08: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x426F08u;
    {
        const bool branch_taken_0x426f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x426F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426F08u;
        // 0x426f0c: 0x8cc50054  lw          $a1, 0x54($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426f08) {
            ctx->pc = 0x426F28u;
            goto label_426f28;
        }
    }
    ctx->pc = 0x426F10u;
    // 0x426f10: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x426f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x426f14: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x426f14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x426f18: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x426F18u;
    {
        const bool branch_taken_0x426f18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x426f18) {
            ctx->pc = 0x426F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x426F18u;
            // 0x426f1c: 0x8ce47000  lw          $a0, 0x7000($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x426F2Cu;
            goto label_426f2c;
        }
    }
    ctx->pc = 0x426F20u;
    // 0x426f20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x426F20u;
    {
        const bool branch_taken_0x426f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x426F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426F20u;
        // 0x426f24: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426f20) {
            ctx->pc = 0x426F3Cu;
            goto label_426f3c;
        }
    }
    ctx->pc = 0x426F28u;
label_426f28:
    // 0x426f28: 0x8ce47000  lw          $a0, 0x7000($a3)
    ctx->pc = 0x426f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28672)));
label_426f2c:
    // 0x426f2c: 0x94a50004  lhu         $a1, 0x4($a1)
    ctx->pc = 0x426f2cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x426f30: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x426f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_426f34:
    // 0x426f34: 0xc11d5b0  jal         func_4756C0
    ctx->pc = 0x426F34u;
    SET_GPR_U32(ctx, 31, 0x426F3Cu);
    ctx->pc = 0x4756C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4756C0u, 0x426F34u, 0x426F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426F3Cu;
label_426f3c:
    // 0x426f3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x426f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x426f40: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x426f40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x426f44: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x426f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x426f48: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x426f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x426f4c: 0x28640002  slti        $a0, $v1, 0x2
    ctx->pc = 0x426f4cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x426f50: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x426F50u;
    {
        const bool branch_taken_0x426f50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x426F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426F50u;
        // 0x426f54: 0xae430020  sw          $v1, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426f50) {
            ctx->pc = 0x426F70u;
            goto label_426f70;
        }
    }
    ctx->pc = 0x426F58u;
    // 0x426f58: 0x2662004c  addiu       $v0, $s3, 0x4C
    ctx->pc = 0x426f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 76));
    // 0x426f5c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x426f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x426f60: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x426f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x426f64: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x426f64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x426f68: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x426f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x426f6c: 0x0  nop
    ctx->pc = 0x426f6cu;
    // NOP
label_426f70:
    // 0x426f70: 0x8e680018  lw          $t0, 0x18($s3)
    ctx->pc = 0x426f70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x426f74: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x426f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x426f78: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x426f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x426f7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x426f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x426f80: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x426F80u;
    {
        const bool branch_taken_0x426f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x426F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426F80u;
        // 0x426f84: 0x2407fffe  addiu       $a3, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426f80) {
            ctx->pc = 0x427088u;
            goto label_427088;
        }
    }
    ctx->pc = 0x426F88u;
    // 0x426f88: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x426f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x426f8c: 0x91020008  lbu         $v0, 0x8($t0)
    ctx->pc = 0x426f8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x426f90: 0x94a30006  lhu         $v1, 0x6($a1)
    ctx->pc = 0x426f90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x426f94: 0x91040018  lbu         $a0, 0x18($t0)
    ctx->pc = 0x426f94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x426f98: 0x3042009f  andi        $v0, $v0, 0x9F
    ctx->pc = 0x426f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)159);
    // 0x426f9c: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x426f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x426fa0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x426fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x426fa4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x426fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x426fa8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x426fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x426fac: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x426facu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x426fb0: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x426fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x426fb4: 0x643825  or          $a3, $v1, $a0
    ctx->pc = 0x426fb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x426fb8: 0xae450014  sw          $a1, 0x14($s2)
    ctx->pc = 0x426fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 5));
    // 0x426fbc: 0xae470018  sw          $a3, 0x18($s2)
    ctx->pc = 0x426fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 7));
    // 0x426fc0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x426fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x426fc4: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x426FC4u;
    {
        const bool branch_taken_0x426fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x426FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426FC4u;
        // 0x426fc8: 0x24490018  addiu       $t1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426fc4) {
            ctx->pc = 0x427088u;
            goto label_427088;
        }
    }
    ctx->pc = 0x426FCCu;
    // 0x426fcc: 0x8d240010  lw          $a0, 0x10($t1)
    ctx->pc = 0x426fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x426fd0: 0x10e4000e  beq         $a3, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x426FD0u;
    {
        const bool branch_taken_0x426fd0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x426FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426FD0u;
        // 0x426fd4: 0x2666004c  addiu       $a2, $s3, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426fd0) {
            ctx->pc = 0x42700Cu;
            goto label_42700c;
        }
    }
    ctx->pc = 0x426FD8u;
    // 0x426fd8: 0x71c02  srl         $v1, $a3, 16
    ctx->pc = 0x426fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x426fdc: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x426fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x426fe0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x426fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x426fe4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x426fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x426fe8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x426FE8u;
    {
        const bool branch_taken_0x426fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x426FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426FE8u;
        // 0x426fec: 0x34a20008  ori         $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x426fe8) {
            ctx->pc = 0x427008u;
            goto label_427008;
        }
    }
    ctx->pc = 0x426FF0u;
    // 0x426ff0: 0x71e02  srl         $v1, $a3, 24
    ctx->pc = 0x426ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x426ff4: 0x41602  srl         $v0, $a0, 24
    ctx->pc = 0x426ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x426ff8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x426FF8u;
    {
        const bool branch_taken_0x426ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x426FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426FF8u;
        // 0x426ffc: 0x34a20008  ori         $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x426ff8) {
            ctx->pc = 0x427008u;
            goto label_427008;
        }
    }
    ctx->pc = 0x427000u;
    // 0x427000: 0x34a20004  ori         $v0, $a1, 0x4
    ctx->pc = 0x427000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x427004: 0x0  nop
    ctx->pc = 0x427004u;
    // NOP
label_427008:
    // 0x427008: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x427008u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_42700c:
    // 0x42700c: 0x9502000c  lhu         $v0, 0xC($t0)
    ctx->pc = 0x42700cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x427010: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x427010u;
    {
        const bool branch_taken_0x427010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x427014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427010u;
        // 0x427014: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x427010) {
            ctx->pc = 0x427048u;
            goto label_427048;
        }
    }
    ctx->pc = 0x427018u;
    // 0x427018: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x427018u;
    {
        const bool branch_taken_0x427018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x427018) {
            ctx->pc = 0x42701Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x427018u;
            // 0x42701c: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x427030u;
            goto label_427030;
        }
    }
    ctx->pc = 0x427020u;
    // 0x427020: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x427020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x427024: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x427024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x427028: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x427028u;
    {
        const bool branch_taken_0x427028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427028u;
        // 0x42702c: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427028) {
            ctx->pc = 0x427048u;
            goto label_427048;
        }
    }
    ctx->pc = 0x427030u;
label_427030:
    // 0x427030: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x427030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x427034: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x427034u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x427038: 0x9502000c  lhu         $v0, 0xC($t0)
    ctx->pc = 0x427038u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x42703c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x42703cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x427040: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x427040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x427044: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x427044u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
label_427048:
    // 0x427048: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x427048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x42704c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x42704cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x427050: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x427050u;
    {
        const bool branch_taken_0x427050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x427050) {
            ctx->pc = 0x427054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x427050u;
            // 0x427054: 0x8e630018  lw          $v1, 0x18($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x427090u;
            goto label_427090;
        }
    }
    ctx->pc = 0x427058u;
    // 0x427058: 0x84c30006  lh          $v1, 0x6($a2)
    ctx->pc = 0x427058u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x42705c: 0x8d220028  lw          $v0, 0x28($t1)
    ctx->pc = 0x42705cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x427060: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x427060u;
    {
        const bool branch_taken_0x427060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x427060) {
            ctx->pc = 0x427064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x427060u;
            // 0x427064: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x427080u;
            goto label_427080;
        }
    }
    ctx->pc = 0x427068u;
    // 0x427068: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x427068u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x42706c: 0x8d220024  lw          $v0, 0x24($t1)
    ctx->pc = 0x42706cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 36)));
    // 0x427070: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x427070u;
    {
        const bool branch_taken_0x427070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x427070) {
            ctx->pc = 0x427074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x427070u;
            // 0x427074: 0x8e630018  lw          $v1, 0x18($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x427090u;
            goto label_427090;
        }
    }
    ctx->pc = 0x427078u;
    // 0x427078: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x427078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x42707c: 0x0  nop
    ctx->pc = 0x42707cu;
    // NOP
label_427080:
    // 0x427080: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x427080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x427084: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x427084u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_427088:
    // 0x427088: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x427088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x42708c: 0x0  nop
    ctx->pc = 0x42708cu;
    // NOP
label_427090:
    // 0x427090: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x427090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x427094: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x427094u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x427098: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x427098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x42709c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x42709cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4270a0: 0xae62004c  sw          $v0, 0x4C($s3)
    ctx->pc = 0x4270a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 2));
    // 0x4270a4: 0x3c110071  lui         $s1, 0x71
    ctx->pc = 0x4270a4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
    // 0x4270a8: 0x8e30ad18  lw          $s0, -0x52E8($s1)
    ctx->pc = 0x4270a8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x70AD18u));
    // 0x4270ac: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x4270acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4270b0: 0xc12104a  jal         func_484128
    ctx->pc = 0x4270B0u;
    SET_GPR_U32(ctx, 31, 0x4270B8u);
    ctx->pc = 0x4270B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4270B0u;
    // 0x4270b4: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484128u, 0x4270B0u, 0x4270B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4270B8u;
label_4270b8:
    // 0x4270b8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4270b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4270bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4270bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4270c0: 0xc11f4a0  jal         func_47D280
    ctx->pc = 0x4270C0u;
    SET_GPR_U32(ctx, 31, 0x4270C8u);
    ctx->pc = 0x4270C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4270C0u;
    // 0x4270c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D280u, 0x4270C0u, 0x4270C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4270C8u;
label_4270c8:
    // 0x4270c8: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x4270c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4270cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4270ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4270d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4270d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4270d4: 0xc11a45e  jal         func_469178
    ctx->pc = 0x4270D4u;
    SET_GPR_U32(ctx, 31, 0x4270DCu);
    ctx->pc = 0x4270D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4270D4u;
    // 0x4270d8: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469178u, 0x4270D4u, 0x4270DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4270DCu;
label_4270dc:
    // 0x4270dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4270dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4270e0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4270e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x4270e4: 0x8e23ad18  lw          $v1, -0x52E8($s1)
    ctx->pc = 0x4270e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946072)));
    // 0x4270e8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4270e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4270ec: 0x8c827114  lw          $v0, 0x7114($a0)
    ctx->pc = 0x4270ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x597114u));
    // 0x4270f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4270f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4270f4: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x4270f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x4270f8: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4270f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x4270fc: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x4270fcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
    // 0x427100: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x427100u;
    {
        const bool branch_taken_0x427100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x427104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427100u;
        // 0x427104: 0x3c140059  lui         $s4, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427100) {
            ctx->pc = 0x42710Cu;
            goto label_42710c;
        }
    }
    ctx->pc = 0x427108u;
label_427108:
    // 0x427108: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x427108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_42710c:
    // 0x42710c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x42710cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x427110: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x427110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x427114: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x427114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x427118: 0x50c20017  beql        $a2, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x427118u;
    {
        const bool branch_taken_0x427118 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x427118) {
            ctx->pc = 0x42711Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x427118u;
            // 0x42711c: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x427178u;
            goto label_427178;
        }
    }
    ctx->pc = 0x427120u;
    // 0x427120: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x427120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x427124: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x427124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x427128: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x427128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x42712c: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x42712cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x427130: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x427130u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x427134: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x427134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x427138: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x427138u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x42713c: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x42713cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x427140: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x427140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x427144: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x427144u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x427148: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x427148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x42714c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x42714cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x427150: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x427150u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x427154: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x427154u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x427158: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x427158u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x42715c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x42715cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x427160: 0x0  nop
    ctx->pc = 0x427160u;
    // NOP
    // 0x427164: 0x4500ffe8  bc1f        . + 4 + (-0x18 << 2)
    ctx->pc = 0x427164u;
    {
        const bool branch_taken_0x427164 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x427168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427164u;
        // 0x427168: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427164) {
            ctx->pc = 0x427108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_427108;
        }
    }
    ctx->pc = 0x42716Cu;
    // 0x42716c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x42716cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x427170: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x427170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x427174: 0x0  nop
    ctx->pc = 0x427174u;
    // NOP
label_427178:
    // 0x427178: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x427178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x42717c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x42717cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x427180: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x427180u;
    {
        const bool branch_taken_0x427180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x427184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427180u;
        // 0x427184: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427180) {
            ctx->pc = 0x4271BCu;
            goto label_4271bc;
        }
    }
    ctx->pc = 0x427188u;
    // 0x427188: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x427188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x42718c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x42718Cu;
    {
        const bool branch_taken_0x42718c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42718c) {
            ctx->pc = 0x427190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42718Cu;
            // 0x427190: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4271A4u;
            goto label_4271a4;
        }
    }
    ctx->pc = 0x427194u;
    // 0x427194: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x427194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x427198: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x427198u;
    {
        const bool branch_taken_0x427198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x427198) {
            ctx->pc = 0x42719Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x427198u;
            // 0x42719c: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4271B4u;
            goto label_4271b4;
        }
    }
    ctx->pc = 0x4271A0u;
    // 0x4271a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4271a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4271a4:
    // 0x4271a4: 0xa2430029  sb          $v1, 0x29($s2)
    ctx->pc = 0x4271a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x4271a8: 0x90826e70  lbu         $v0, 0x6E70($a0)
    ctx->pc = 0x4271a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28272)));
    // 0x4271ac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x4271ACu;
    {
        const bool branch_taken_0x4271ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4271B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4271ACu;
        // 0x4271b0: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4271ac) {
            ctx->pc = 0x4271F8u;
            goto label_4271f8;
        }
    }
    ctx->pc = 0x4271B4u;
label_4271b4:
    // 0x4271b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4271B4u;
    {
        const bool branch_taken_0x4271b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4271B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4271B4u;
        // 0x4271b8: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4271b4) {
            ctx->pc = 0x4271D0u;
            goto label_4271d0;
        }
    }
    ctx->pc = 0x4271BCu;
label_4271bc:
    // 0x4271bc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4271bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4271c0: 0xa2420029  sb          $v0, 0x29($s2)
    ctx->pc = 0x4271c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x4271c4: 0x90836e70  lbu         $v1, 0x6E70($a0)
    ctx->pc = 0x4271c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28272)));
    // 0x4271c8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4271C8u;
    {
        const bool branch_taken_0x4271c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4271CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4271C8u;
        // 0x4271cc: 0xa2430028  sb          $v1, 0x28($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4271c8) {
            ctx->pc = 0x4271FCu;
            goto label_4271fc;
        }
    }
    ctx->pc = 0x4271D0u;
label_4271d0:
    // 0x4271d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4271D0u;
    {
        const bool branch_taken_0x4271d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4271D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4271D0u;
        // 0x4271d4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4271d0) {
            ctx->pc = 0x4271E8u;
            goto label_4271e8;
        }
    }
    ctx->pc = 0x4271D8u;
    // 0x4271d8: 0xa2430029  sb          $v1, 0x29($s2)
    ctx->pc = 0x4271d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x4271dc: 0x90826e70  lbu         $v0, 0x6E70($a0)
    ctx->pc = 0x4271dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28272)));
    // 0x4271e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4271E0u;
    {
        const bool branch_taken_0x4271e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4271E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4271E0u;
        // 0x4271e4: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4271e0) {
            ctx->pc = 0x4271F8u;
            goto label_4271f8;
        }
    }
    ctx->pc = 0x4271E8u;
label_4271e8:
    // 0x4271e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4271e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4271ec: 0xa2430029  sb          $v1, 0x29($s2)
    ctx->pc = 0x4271ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x4271f0: 0x90826e70  lbu         $v0, 0x6E70($a0)
    ctx->pc = 0x4271f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28272)));
    // 0x4271f4: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x4271f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
label_4271f8:
    // 0x4271f8: 0xa2420028  sb          $v0, 0x28($s2)
    ctx->pc = 0x4271f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
label_4271fc:
    // 0x4271fc: 0x38a20002  xori        $v0, $a1, 0x2
    ctx->pc = 0x4271fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x427200: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x427200u;
    {
        const bool branch_taken_0x427200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x427200) {
            ctx->pc = 0x427204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x427200u;
            // 0x427204: 0x8e630018  lw          $v1, 0x18($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x427218u;
            goto label_427218;
        }
    }
    ctx->pc = 0x427208u;
    // 0x427208: 0x92420028  lbu         $v0, 0x28($s2)
    ctx->pc = 0x427208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x42720c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x42720cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x427210: 0xa2420028  sb          $v0, 0x28($s2)
    ctx->pc = 0x427210u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x427214: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x427214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_427218:
    // 0x427218: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x427218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x42721c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x42721cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x427220: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x427220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x427224: 0xa242002a  sb          $v0, 0x2A($s2)
    ctx->pc = 0x427224u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 42), (uint8_t)GPR_U32(ctx, 2));
    // 0x427228: 0xc12104a  jal         func_484128
    ctx->pc = 0x427228u;
    SET_GPR_U32(ctx, 31, 0x427230u);
    ctx->pc = 0x42722Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x427228u;
    // 0x42722c: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484128u, 0x427228u, 0x427230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x427230u;
label_427230:
    // 0x427230: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x427230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427234: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x427234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427238: 0xc11f332  jal         func_47CCC8
    ctx->pc = 0x427238u;
    SET_GPR_U32(ctx, 31, 0x427240u);
    ctx->pc = 0x42723Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x427238u;
    // 0x42723c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47CCC8u, 0x427238u, 0x427240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x427240u;
label_427240:
    // 0x427240: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x427240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x427244: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x427244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x427248: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x427248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x42724c: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x42724Cu;
    {
        const bool branch_taken_0x42724c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x427250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42724Cu;
        // 0x427250: 0xc7a10020  lwc1        $f1, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x42724c) {
            ctx->pc = 0x42727Cu;
            goto label_42727c;
        }
    }
    ctx->pc = 0x427254u;
    // 0x427254: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x427254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x427258: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x427258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x42725c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x42725Cu;
    {
        const bool branch_taken_0x42725c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x427260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42725Cu;
        // 0x427260: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42725c) {
            ctx->pc = 0x4272C0u;
            goto label_4272c0;
        }
    }
    ctx->pc = 0x427264u;
label_427264:
    // 0x427264: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x427264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x427268: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x427268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x42726c: 0x0  nop
    ctx->pc = 0x42726cu;
    // NOP
    // 0x427270: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x427270u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x427274: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x427274u;
    {
        const bool branch_taken_0x427274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x427278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427274u;
        // 0x427278: 0x8e226ff8  lw          $v0, 0x6FF8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427274) {
            ctx->pc = 0x4272C8u;
            goto label_4272c8;
        }
    }
    ctx->pc = 0x42727Cu;
label_42727c:
    // 0x42727c: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x42727cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x427280: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x427280u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x427284: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x427284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x427288: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x427288u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x42728c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x42728cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x427290: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x427290u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x427294: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x427294u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x427298: 0x0  nop
    ctx->pc = 0x427298u;
    // NOP
    // 0x42729c: 0x0  nop
    ctx->pc = 0x42729cu;
    // NOP
    // 0x4272a0: 0x46010044  c1          0x10044
    ctx->pc = 0x4272a0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x4272a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4272a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4272a8: 0x0  nop
    ctx->pc = 0x4272a8u;
    // NOP
    // 0x4272ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4272acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4272b0: 0x0  nop
    ctx->pc = 0x4272b0u;
    // NOP
    // 0x4272b4: 0x4501ffeb  bc1t        . + 4 + (-0x15 << 2)
    ctx->pc = 0x4272B4u;
    {
        const bool branch_taken_0x4272b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4272B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4272B4u;
        // 0x4272b8: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4272b4) {
            ctx->pc = 0x427264u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_427264;
        }
    }
    ctx->pc = 0x4272BCu;
    // 0x4272bc: 0x0  nop
    ctx->pc = 0x4272bcu;
    // NOP
label_4272c0:
    // 0x4272c0: 0x8e226ff8  lw          $v0, 0x6FF8($s1)
    ctx->pc = 0x4272c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28664)));
    // 0x4272c4: 0x0  nop
    ctx->pc = 0x4272c4u;
    // NOP
label_4272c8:
    // 0x4272c8: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4272c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4272cc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x4272ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4272d0: 0x34e7fffb  ori         $a3, $a3, 0xFFFB
    ctx->pc = 0x4272d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65531);
    // 0x4272d4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x4272d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4272d8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4272d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4272dc: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x4272dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4272e0: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x4272e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4272e4: 0xae226ff8  sw          $v0, 0x6FF8($s1)
    ctx->pc = 0x4272e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28664), GPR_U32(ctx, 2));
    // 0x4272e8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x4272e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x4272ec: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x4272ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4272f0: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x4272f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x4272f4: 0xae236ff8  sw          $v1, 0x6FF8($s1)
    ctx->pc = 0x4272f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28664), GPR_U32(ctx, 3));
    // 0x4272f8: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x4272f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4272fc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x4272fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x427300: 0x24430014  addiu       $v1, $v0, 0x14
    ctx->pc = 0x427300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x427304: 0x24480018  addiu       $t0, $v0, 0x18
    ctx->pc = 0x427304u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x427308: 0x2449001c  addiu       $t1, $v0, 0x1C
    ctx->pc = 0x427308u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x42730c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x42730cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x427310: 0x244a0020  addiu       $t2, $v0, 0x20
    ctx->pc = 0x427310u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x427314: 0xae246ff8  sw          $a0, 0x6FF8($s1)
    ctx->pc = 0x427314u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28664), GPR_U32(ctx, 4));
    // 0x427318: 0x244b0024  addiu       $t3, $v0, 0x24
    ctx->pc = 0x427318u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x42731c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x42731cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x427320: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x427320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x427324: 0xae256ff8  sw          $a1, 0x6FF8($s1)
    ctx->pc = 0x427324u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28664), GPR_U32(ctx, 5));
    // 0x427328: 0x244c002c  addiu       $t4, $v0, 0x2C
    ctx->pc = 0x427328u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x42732c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x42732cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x427330: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x427330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x427334: 0x244d0034  addiu       $t5, $v0, 0x34
    ctx->pc = 0x427334u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x427338: 0x244e0038  addiu       $t6, $v0, 0x38
    ctx->pc = 0x427338u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x42733c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x42733cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x427340: 0x244f003c  addiu       $t7, $v0, 0x3C
    ctx->pc = 0x427340u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x427344: 0xae266ff8  sw          $a2, 0x6FF8($s1)
    ctx->pc = 0x427344u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28664), GPR_U32(ctx, 6));
    // 0x427348: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x427348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x42734c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x42734cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x427350: 0xae236ff8  sw          $v1, 0x6FF8($s1)
    ctx->pc = 0x427350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28664), GPR_U32(ctx, 3));
    // 0x427354: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x427354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x427358: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x427358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x42735c: 0xae286ff8  sw          $t0, 0x6FF8($s1)
    ctx->pc = 0x42735cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28664), GPR_U32(ctx, 8));
    // 0x427360: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x427360u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x427364: 0xae296ff8  sw          $t1, 0x6FF8($s1)
    ctx->pc = 0x427364u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28664), GPR_U32(ctx, 9));
    // 0x427368: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x427368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x42736c: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x42736cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x427370: 0xae2a6ff8  sw          $t2, 0x6FF8($s1)
    ctx->pc = 0x427370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28664), GPR_U32(ctx, 10));
    // 0x427374: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x427374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x427378: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x427378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x42737c: 0xae2b6ff8  sw          $t3, 0x6FF8($s1)
    ctx->pc = 0x42737cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28664), GPR_U32(ctx, 11));
    // 0x427380: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x427380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x427384: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x427384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x427388: 0xae246ff8  sw          $a0, 0x6FF8($s1)
    ctx->pc = 0x427388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28664), GPR_U32(ctx, 4));
    // 0x42738c: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x42738cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x427390: 0xae2c6ff8  sw          $t4, 0x6FF8($s1)
    ctx->pc = 0x427390u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28664), GPR_U32(ctx, 12));
    // 0x427394: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x427394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x427398: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x427398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x42739c: 0xae256ff8  sw          $a1, 0x6FF8($s1)
    ctx->pc = 0x42739cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28664), GPR_U32(ctx, 5));
    // 0x4273a0: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x4273a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4273a4: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x4273a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x4273a8: 0xae2d6ff8  sw          $t5, 0x6FF8($s1)
    ctx->pc = 0x4273a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28664), GPR_U32(ctx, 13));
    // 0x4273ac: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x4273acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4273b0: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x4273b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x4273b4: 0xae2e6ff8  sw          $t6, 0x6FF8($s1)
    ctx->pc = 0x4273b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28664), GPR_U32(ctx, 14));
    // 0x4273b8: 0xe4420038  swc1        $f2, 0x38($v0)
    ctx->pc = 0x4273b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x4273bc: 0xae2f6ff8  sw          $t7, 0x6FF8($s1)
    ctx->pc = 0x4273bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28664), GPR_U32(ctx, 15));
    // 0x4273c0: 0xae876ffc  sw          $a3, 0x6FFC($s4)
    ctx->pc = 0x4273c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28668), GPR_U32(ctx, 7));
    // 0x4273c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4273c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4273c8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x4273c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4273cc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x4273ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4273d0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x4273d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4273d4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x4273d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4273d8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4273d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4273dc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4273dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4273e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4273E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4273E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4273E0u;
        // 0x4273e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4273E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4273E8u;
}
