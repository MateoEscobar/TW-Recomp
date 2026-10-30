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

// Function: sub_004B7A48
// Address: 0x4b7a48 - 0x4b7c20
void sub_004B7A48_0x4b7a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7A48_0x4b7a48");
#endif

    switch (ctx->pc) {
        case 0x4b7ad0u: goto label_4b7ad0;
        case 0x4b7b1cu: goto label_4b7b1c;
        case 0x4b7b30u: goto label_4b7b30;
        case 0x4b7b7cu: goto label_4b7b7c;
        case 0x4b7bc8u: goto label_4b7bc8;
        case 0x4b7becu: goto label_4b7bec;
        default: break;
    }

    ctx->pc = 0x4b7a48u;

    // 0x4b7a48: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4b7a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4b7a4c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4b7a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4b7a50: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b7a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4b7a54: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4b7a54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7a58: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x4b7a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x4b7a5c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4b7a5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7a60: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x4b7a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x4b7a64: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4b7a64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7a68: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x4b7a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x4b7a6c: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x4b7a6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7a70: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4b7a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4b7a74: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4b7a74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7a78: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4b7a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x4b7a7c: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x4b7a7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7a80: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B7A80u;
    {
        const bool branch_taken_0x4b7a80 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B7A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7A80u;
        // 0x4b7a84: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7a80) {
            ctx->pc = 0x4B7A90u;
            goto label_4b7a90;
        }
    }
    ctx->pc = 0x4B7A88u;
    // 0x4b7a88: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x4B7A88u;
    {
        const bool branch_taken_0x4b7a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7A88u;
        // 0x4b7a8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7a88) {
            ctx->pc = 0x4B7BF4u;
            goto label_4b7bf4;
        }
    }
    ctx->pc = 0x4B7A90u;
label_4b7a90:
    // 0x4b7a90: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x4b7a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x4b7a94: 0x24040a00  addiu       $a0, $zero, 0xA00
    ctx->pc = 0x4b7a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2560));
    // 0x4b7a98: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x4b7a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x4b7a9c: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x4b7a9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b7aa0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4b7aa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7aa4: 0x30420a00  andi        $v0, $v0, 0xA00
    ctx->pc = 0x4b7aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2560);
    // 0x4b7aa8: 0x14440011  bne         $v0, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4B7AA8u;
    {
        const bool branch_taken_0x4b7aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x4B7AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7AA8u;
        // 0x4b7aac: 0x658023  subu        $s0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7aa8) {
            ctx->pc = 0x4B7AF0u;
            goto label_4b7af0;
        }
    }
    ctx->pc = 0x4B7AB0u;
    // 0x4b7ab0: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x4b7ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x4b7ab4: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x4b7ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4b7ab8: 0x214182b  sltu        $v1, $s0, $s4
    ctx->pc = 0x4b7ab8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x4b7abc: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x4B7ABCu;
    {
        const bool branch_taken_0x4b7abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B7AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7ABCu;
        // 0x4b7ac0: 0x2b41821  addu        $v1, $s5, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7abc) {
            ctx->pc = 0x4B7AF0u;
            goto label_4b7af0;
        }
    }
    ctx->pc = 0x4B7AC4u;
    // 0x4b7ac4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x4b7ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4b7ac8: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x4b7ac8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4b7acc: 0x0  nop
    ctx->pc = 0x4b7accu;
    // NOP
label_4b7ad0:
    // 0x4b7ad0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B7AD0u;
    {
        const bool branch_taken_0x4b7ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7AD0u;
        // 0x4b7ad4: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7ad0) {
            ctx->pc = 0x4B7AF0u;
            goto label_4b7af0;
        }
    }
    ctx->pc = 0x4B7AD8u;
    // 0x4b7ad8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x4b7ad8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b7adc: 0x1444fffc  bne         $v0, $a0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x4B7ADCu;
    {
        const bool branch_taken_0x4b7adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x4B7AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7ADCu;
        // 0x4b7ae0: 0x223102b  sltu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7adc) {
            ctx->pc = 0x4B7AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b7ad0;
        }
    }
    ctx->pc = 0x4B7AE4u;
    // 0x4b7ae4: 0x711023  subu        $v0, $v1, $s1
    ctx->pc = 0x4b7ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x4b7ae8: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x4b7ae8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b7aec: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x4b7aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4b7af0:
    // 0x4b7af0: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x4B7AF0u;
    {
        const bool branch_taken_0x4b7af0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7AF0u;
        // 0x4b7af4: 0x290102b  sltu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7af0) {
            ctx->pc = 0x4B7B64u;
            goto label_4b7b64;
        }
    }
    ctx->pc = 0x4B7AF8u;
    // 0x4b7af8: 0x282800b  movn        $s0, $s4, $v0
    ctx->pc = 0x4b7af8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 20));
    // 0x4b7afc: 0x2e030015  sltiu       $v1, $s0, 0x15
    ctx->pc = 0x4b7afcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x4b7b00: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B7B00u;
    {
        const bool branch_taken_0x4b7b00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B7B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7B00u;
        // 0x4b7b04: 0x2603ffff  addiu       $v1, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7b00) {
            ctx->pc = 0x4B7B24u;
            goto label_4b7b24;
        }
    }
    ctx->pc = 0x4B7B08u;
    // 0x4b7b08: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4b7b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7b0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4b7b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7b10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4b7b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7b14: 0xc10c190  jal         func_430640
    ctx->pc = 0x4B7B14u;
    SET_GPR_U32(ctx, 31, 0x4B7B1Cu);
    ctx->pc = 0x4B7B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7B14u;
    // 0x4b7b18: 0x230a821  addu        $s5, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4B7B14u, 0x4B7B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7B1Cu;
label_4b7b1c:
    // 0x4b7b1c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4B7B1Cu;
    {
        const bool branch_taken_0x4b7b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7B1Cu;
        // 0x4b7b20: 0x8e650014  lw          $a1, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7b1c) {
            ctx->pc = 0x4B7B54u;
            goto label_4b7b54;
        }
    }
    ctx->pc = 0x4B7B24u;
label_4b7b24:
    // 0x4b7b24: 0x460000b  bltz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x4B7B24u;
    {
        const bool branch_taken_0x4b7b24 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4B7B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7B24u;
        // 0x4b7b28: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7b24) {
            ctx->pc = 0x4B7B54u;
            goto label_4b7b54;
        }
    }
    ctx->pc = 0x4B7B2Cu;
    // 0x4b7b2c: 0x2903023  subu        $a2, $s4, $s0
    ctx->pc = 0x4b7b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_4b7b30:
    // 0x4b7b30: 0x92a20000  lbu         $v0, 0x0($s5)
    ctx->pc = 0x4b7b30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b7b34: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4b7b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4b7b38: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x4b7b38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x4b7b3c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x4b7b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4b7b40: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4b7b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4b7b44: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4B7B44u;
    {
        const bool branch_taken_0x4b7b44 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x4b7b44) {
            ctx->pc = 0x4B7B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b7b30;
        }
    }
    ctx->pc = 0x4B7B4Cu;
    // 0x4b7b4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B7B4Cu;
    {
        const bool branch_taken_0x4b7b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7B4Cu;
        // 0x4b7b50: 0x8e650014  lw          $a1, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7b4c) {
            ctx->pc = 0x4B7B58u;
            goto label_4b7b58;
        }
    }
    ctx->pc = 0x4B7B54u;
label_4b7b54:
    // 0x4b7b54: 0x2903023  subu        $a2, $s4, $s0
    ctx->pc = 0x4b7b54u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_4b7b58:
    // 0x4b7b58: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x4b7b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x4b7b5c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4b7b5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7b60: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x4b7b60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_4b7b64:
    // 0x4b7b64: 0x2561021  addu        $v0, $s2, $s6
    ctx->pc = 0x4b7b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x4b7b68: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x4B7B68u;
    {
        const bool branch_taken_0x4b7b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7B68u;
        // 0x4b7b6c: 0x2921023  subu        $v0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7b68) {
            ctx->pc = 0x4B7BF4u;
            goto label_4b7bf4;
        }
    }
    ctx->pc = 0x4B7B70u;
    // 0x4b7b70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b7b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7b74: 0xc12c2b4  jal         func_4B0AD0
    ctx->pc = 0x4B7B74u;
    SET_GPR_U32(ctx, 31, 0x4B7B7Cu);
    ctx->pc = 0x4B7B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7B74u;
    // 0x4b7b78: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0AD0u, 0x4B7B74u, 0x4B7B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7B7Cu;
label_4b7b7c:
    // 0x4b7b7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b7b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b7b80: 0x1043001c  beq         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x4B7B80u;
    {
        const bool branch_taken_0x4b7b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4B7B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7B80u;
        // 0x4b7b84: 0x2921023  subu        $v0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7b80) {
            ctx->pc = 0x4B7BF4u;
            goto label_4b7bf4;
        }
    }
    ctx->pc = 0x4B7B88u;
    // 0x4b7b88: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x4b7b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x4b7b8c: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x4b7b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x4b7b90: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x4b7b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b7b94: 0x2c640080  sltiu       $a0, $v1, 0x80
    ctx->pc = 0x4b7b94u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x4b7b98: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B7B98u;
    {
        const bool branch_taken_0x4b7b98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B7B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7B98u;
        // 0x4b7b9c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7b98) {
            ctx->pc = 0x4B7BB4u;
            goto label_4b7bb4;
        }
    }
    ctx->pc = 0x4B7BA0u;
    // 0x4b7ba0: 0x243001b  divu        $zero, $s2, $v1
    ctx->pc = 0x4b7ba0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
    // 0x4b7ba4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4B7BA4u;
    {
        const bool branch_taken_0x4b7ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b7ba4) {
            ctx->pc = 0x4B7BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B7BA4u;
            // 0x4b7ba8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B7BACu;
            goto label_4b7bac;
        }
    }
    ctx->pc = 0x4B7BACu;
label_4b7bac:
    // 0x4b7bac: 0x1010  mfhi        $v0
    ctx->pc = 0x4b7bacu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x4b7bb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4b7bb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b7bb4:
    // 0x4b7bb4: 0x2518023  subu        $s0, $s2, $s1
    ctx->pc = 0x4b7bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x4b7bb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b7bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7bbc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4b7bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7bc0: 0xc12dc58  jal         func_4B7160
    ctx->pc = 0x4B7BC0u;
    SET_GPR_U32(ctx, 31, 0x4B7BC8u);
    ctx->pc = 0x4B7BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7BC0u;
    // 0x4b7bc4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B7160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B7160u, 0x4B7BC0u, 0x4B7BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7BC8u;
label_4b7bc8:
    // 0x4b7bc8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b7bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b7bcc: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B7BCCu;
    {
        const bool branch_taken_0x4b7bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4B7BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7BCCu;
        // 0x4b7bd0: 0x2921023  subu        $v0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7bcc) {
            ctx->pc = 0x4B7BF4u;
            goto label_4b7bf4;
        }
    }
    ctx->pc = 0x4B7BD4u;
    // 0x4b7bd4: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x4b7bd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7bd8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B7BD8u;
    {
        const bool branch_taken_0x4b7bd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7BD8u;
        // 0x4b7bdc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7bd8) {
            ctx->pc = 0x4B7BF0u;
            goto label_4b7bf0;
        }
    }
    ctx->pc = 0x4B7BE0u;
    // 0x4b7be0: 0x2b02821  addu        $a1, $s5, $s0
    ctx->pc = 0x4b7be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x4b7be4: 0xc12c3e4  jal         func_4B0F90
    ctx->pc = 0x4B7BE4u;
    SET_GPR_U32(ctx, 31, 0x4B7BECu);
    ctx->pc = 0x4B7BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7BE4u;
    // 0x4b7be8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0F90u, 0x4B7BE4u, 0x4B7BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7BECu;
label_4b7bec:
    // 0x4b7bec: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x4b7becu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4b7bf0:
    // 0x4b7bf0: 0x2921023  subu        $v0, $s4, $s2
    ctx->pc = 0x4b7bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_4b7bf4:
    // 0x4b7bf4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4b7bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4b7bf8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x4b7bf8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4b7bfc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x4b7bfcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b7c00: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4b7c00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b7c04: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x4b7c04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b7c08: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b7c08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b7c0c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b7c0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b7c10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b7c10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b7c14: 0x3e00008  jr          $ra
    ctx->pc = 0x4B7C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B7C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7C14u;
        // 0x4b7c18: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B7C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B7C1Cu;
    // 0x4b7c1c: 0x0  nop
    ctx->pc = 0x4b7c1cu;
    // NOP
    ctx->pc = 0x4b7c20u;
}
