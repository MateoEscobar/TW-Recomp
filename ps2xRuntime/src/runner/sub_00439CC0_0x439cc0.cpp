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

// Function: sub_00439CC0
// Address: 0x439cc0 - 0x43a108
void sub_00439CC0_0x439cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00439CC0_0x439cc0");
#endif

    switch (ctx->pc) {
        case 0x439d64u: goto label_439d64;
        case 0x439d74u: goto label_439d74;
        case 0x439d80u: goto label_439d80;
        case 0x439dd8u: goto label_439dd8;
        case 0x439e00u: goto label_439e00;
        case 0x439e50u: goto label_439e50;
        case 0x439e80u: goto label_439e80;
        case 0x439f50u: goto label_439f50;
        case 0x439fe0u: goto label_439fe0;
        default: break;
    }

    ctx->pc = 0x439cc0u;

    // 0x439cc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x439cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x439cc4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x439cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x439cc8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x439cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x439ccc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x439cccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439cd0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x439cd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439cd4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x439cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x439cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x439cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x439cdc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x439cdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439ce0: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x439ce0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x439ce4: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x439ce4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x439ce8: 0x2383f  dsra32      $a3, $v0, 0
    ctx->pc = 0x439ce8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x439cec: 0x100702d  daddu       $t6, $t0, $zero
    ctx->pc = 0x439cecu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439cf0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x439cf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439cf4: 0x2503c  dsll32      $t2, $v0, 0
    ctx->pc = 0x439cf4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 0));
    // 0x439cf8: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x439cf8u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x439cfc: 0x2483f  dsra32      $t1, $v0, 0
    ctx->pc = 0x439cfcu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x439d00: 0x140782d  daddu       $t7, $t2, $zero
    ctx->pc = 0x439d00u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439d04: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x439d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x439d08: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x439d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x439d0c: 0xe36824  and         $t5, $a3, $v1
    ctx->pc = 0x439d0cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x439d10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x439d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x439d14: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x439d14u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x439d18: 0x12a1825  or          $v1, $t1, $t2
    ctx->pc = 0x439d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x439d1c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x439D1Cu;
    {
        const bool branch_taken_0x439d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x439D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439D1Cu;
        // 0x439d20: 0xed3826  xor         $a3, $a3, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439d1c) {
            ctx->pc = 0x439D58u;
            goto label_439d58;
        }
    }
    ctx->pc = 0x439D24u;
    // 0x439d24: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x439d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x439d28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x439d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x439d2c: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x439d2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x439d30: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x439D30u;
    {
        const bool branch_taken_0x439d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x439D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439D30u;
        // 0x439d34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439d30) {
            ctx->pc = 0x439D5Cu;
            goto label_439d5c;
        }
    }
    ctx->pc = 0x439D38u;
    // 0x439d38: 0xa1023  negu        $v0, $t2
    ctx->pc = 0x439d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
    // 0x439d3c: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x439d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x439d40: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x439d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x439d44: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x439d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x439d48: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x439d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x439d4c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x439d4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x439d50: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x439D50u;
    {
        const bool branch_taken_0x439d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x439D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439D50u;
        // 0x439d54: 0x127102a  slt         $v0, $t1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x439d50) {
            ctx->pc = 0x439D88u;
            goto label_439d88;
        }
    }
    ctx->pc = 0x439D58u;
label_439d58:
    // 0x439d58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x439d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_439d5c:
    // 0x439d5c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x439D5Cu;
    SET_GPR_U32(ctx, 31, 0x439D64u);
    ctx->pc = 0x439D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x439D5Cu;
    // 0x439d60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x439D5Cu, 0x439D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x439D64u;
label_439d64:
    // 0x439d64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x439d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439d68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x439d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439d6c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x439D6Cu;
    SET_GPR_U32(ctx, 31, 0x439D74u);
    ctx->pc = 0x439D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x439D6Cu;
    // 0x439d70: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x439D6Cu, 0x439D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x439D74u;
label_439d74:
    // 0x439d74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x439d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439d78: 0xc10b000  jal         func_42C000
    ctx->pc = 0x439D78u;
    SET_GPR_U32(ctx, 31, 0x439D80u);
    ctx->pc = 0x439D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x439D78u;
    // 0x439d7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x439D78u, 0x439D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x439D80u;
label_439d80:
    // 0x439d80: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x439D80u;
    {
        const bool branch_taken_0x439d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439D80u;
        // 0x439d84: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439d80) {
            ctx->pc = 0x43A0F0u;
            goto label_43a0f0;
        }
    }
    ctx->pc = 0x439D88u;
label_439d88:
    // 0x439d88: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x439D88u;
    {
        const bool branch_taken_0x439d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x439D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439D88u;
        // 0x439d8c: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439d88) {
            ctx->pc = 0x439DB4u;
            goto label_439db4;
        }
    }
    ctx->pc = 0x439D90u;
    // 0x439d90: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x439d90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x439d94: 0x144000d5  bnez        $v0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x439D94u;
    {
        const bool branch_taken_0x439d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x439D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439D94u;
        // 0x439d98: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439d94) {
            ctx->pc = 0x43A0ECu;
            goto label_43a0ec;
        }
    }
    ctx->pc = 0x439D9Cu;
    // 0x439d9c: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x439d9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x439da0: 0x544000d2  bnel        $v0, $zero, . + 4 + (0xD2 << 2)
    ctx->pc = 0x439DA0u;
    {
        const bool branch_taken_0x439da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x439da0) {
            ctx->pc = 0x439DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x439DA0u;
            // 0x439da4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43A0ECu;
            goto label_43a0ec;
        }
    }
    ctx->pc = 0x439DA8u;
    // 0x439da8: 0x110a00ba  beq         $t0, $t2, . + 4 + (0xBA << 2)
    ctx->pc = 0x439DA8u;
    {
        const bool branch_taken_0x439da8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 10));
        ctx->pc = 0x439DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439DA8u;
        // 0x439dac: 0xd1fc2  srl         $v1, $t5, 31 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439da8) {
            ctx->pc = 0x43A094u;
            goto label_43a094;
        }
    }
    ctx->pc = 0x439DB0u;
    // 0x439db0: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x439db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_439db4:
    // 0x439db4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x439db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x439db8: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x439db8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x439dbc: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x439DBCu;
    {
        const bool branch_taken_0x439dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x439dbc) {
            ctx->pc = 0x439DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x439DBCu;
            // 0x439dc0: 0x71503  sra         $v0, $a3, 20 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x439E20u;
            goto label_439e20;
        }
    }
    ctx->pc = 0x439DC4u;
    // 0x439dc4: 0x14e0000c  bnez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x439DC4u;
    {
        const bool branch_taken_0x439dc4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x439DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439DC4u;
        // 0x439dc8: 0x712c0  sll         $v0, $a3, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439dc4) {
            ctx->pc = 0x439DF8u;
            goto label_439df8;
        }
    }
    ctx->pc = 0x439DCCu;
    // 0x439dcc: 0x2405fbed  addiu       $a1, $zero, -0x413
    ctx->pc = 0x439dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966253));
    // 0x439dd0: 0x19c00014  blez        $t6, . + 4 + (0x14 << 2)
    ctx->pc = 0x439DD0u;
    {
        const bool branch_taken_0x439dd0 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x439DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439DD0u;
        // 0x439dd4: 0x1c0102d  daddu       $v0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439dd0) {
            ctx->pc = 0x439E24u;
            goto label_439e24;
        }
    }
    ctx->pc = 0x439DD8u;
label_439dd8:
    // 0x439dd8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x439dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x439ddc: 0x0  nop
    ctx->pc = 0x439ddcu;
    // NOP
    // 0x439de0: 0x0  nop
    ctx->pc = 0x439de0u;
    // NOP
    // 0x439de4: 0x0  nop
    ctx->pc = 0x439de4u;
    // NOP
    // 0x439de8: 0x1c40fffb  bgtz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x439DE8u;
    {
        const bool branch_taken_0x439de8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x439DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439DE8u;
        // 0x439dec: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439de8) {
            ctx->pc = 0x439DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_439dd8;
        }
    }
    ctx->pc = 0x439DF0u;
    // 0x439df0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x439DF0u;
    {
        const bool branch_taken_0x439df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439DF0u;
        // 0x439df4: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439df0) {
            ctx->pc = 0x439E28u;
            goto label_439e28;
        }
    }
    ctx->pc = 0x439DF8u;
label_439df8:
    // 0x439df8: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x439DF8u;
    {
        const bool branch_taken_0x439df8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x439DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439DF8u;
        // 0x439dfc: 0x2405fc02  addiu       $a1, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439df8) {
            ctx->pc = 0x439E24u;
            goto label_439e24;
        }
    }
    ctx->pc = 0x439E00u;
label_439e00:
    // 0x439e00: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x439e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x439e04: 0x0  nop
    ctx->pc = 0x439e04u;
    // NOP
    // 0x439e08: 0x0  nop
    ctx->pc = 0x439e08u;
    // NOP
    // 0x439e0c: 0x0  nop
    ctx->pc = 0x439e0cu;
    // NOP
    // 0x439e10: 0x1c40fffb  bgtz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x439E10u;
    {
        const bool branch_taken_0x439e10 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x439E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439E10u;
        // 0x439e14: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439e10) {
            ctx->pc = 0x439E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_439e00;
        }
    }
    ctx->pc = 0x439E18u;
    // 0x439e18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x439E18u;
    {
        const bool branch_taken_0x439e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439E18u;
        // 0x439e1c: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439e18) {
            ctx->pc = 0x439E28u;
            goto label_439e28;
        }
    }
    ctx->pc = 0x439E20u;
label_439e20:
    // 0x439e20: 0x2445fc01  addiu       $a1, $v0, -0x3FF
    ctx->pc = 0x439e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966273));
label_439e24:
    // 0x439e24: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x439e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_439e28:
    // 0x439e28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x439e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x439e2c: 0x49102a  slt         $v0, $v0, $t1
    ctx->pc = 0x439e2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x439e30: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x439E30u;
    {
        const bool branch_taken_0x439e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x439E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439E30u;
        // 0x439e34: 0x91503  sra         $v0, $t1, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439e30) {
            ctx->pc = 0x439EA0u;
            goto label_439ea0;
        }
    }
    ctx->pc = 0x439E38u;
    // 0x439e38: 0x1520000d  bnez        $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x439E38u;
    {
        const bool branch_taken_0x439e38 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x439E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439E38u;
        // 0x439e3c: 0x2404fc02  addiu       $a0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439e38) {
            ctx->pc = 0x439E70u;
            goto label_439e70;
        }
    }
    ctx->pc = 0x439E40u;
    // 0x439e40: 0x2404fbed  addiu       $a0, $zero, -0x413
    ctx->pc = 0x439e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966253));
    // 0x439e44: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x439e44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439e48: 0x19e00017  blez        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x439E48u;
    {
        const bool branch_taken_0x439e48 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x439E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439E48u;
        // 0x439e4c: 0x28a3fc02  slti        $v1, $a1, -0x3FE (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294966274) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x439e48) {
            ctx->pc = 0x439EA8u;
            goto label_439ea8;
        }
    }
    ctx->pc = 0x439E50u;
label_439e50:
    // 0x439e50: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x439e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x439e54: 0x0  nop
    ctx->pc = 0x439e54u;
    // NOP
    // 0x439e58: 0x0  nop
    ctx->pc = 0x439e58u;
    // NOP
    // 0x439e5c: 0x0  nop
    ctx->pc = 0x439e5cu;
    // NOP
    // 0x439e60: 0x1c40fffb  bgtz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x439E60u;
    {
        const bool branch_taken_0x439e60 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x439E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439E60u;
        // 0x439e64: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439e60) {
            ctx->pc = 0x439E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_439e50;
        }
    }
    ctx->pc = 0x439E68u;
    // 0x439e68: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x439E68u;
    {
        const bool branch_taken_0x439e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x439e68) {
            ctx->pc = 0x439EA8u;
            goto label_439ea8;
        }
    }
    ctx->pc = 0x439E70u;
label_439e70:
    // 0x439e70: 0x912c0  sll         $v0, $t1, 11
    ctx->pc = 0x439e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 11));
    // 0x439e74: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x439E74u;
    {
        const bool branch_taken_0x439e74 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x439E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439E74u;
        // 0x439e78: 0x28a3fc02  slti        $v1, $a1, -0x3FE (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294966274) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x439e74) {
            ctx->pc = 0x439EA8u;
            goto label_439ea8;
        }
    }
    ctx->pc = 0x439E7Cu;
    // 0x439e7c: 0x0  nop
    ctx->pc = 0x439e7cu;
    // NOP
label_439e80:
    // 0x439e80: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x439e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x439e84: 0x0  nop
    ctx->pc = 0x439e84u;
    // NOP
    // 0x439e88: 0x0  nop
    ctx->pc = 0x439e88u;
    // NOP
    // 0x439e8c: 0x0  nop
    ctx->pc = 0x439e8cu;
    // NOP
    // 0x439e90: 0x1c40fffb  bgtz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x439E90u;
    {
        const bool branch_taken_0x439e90 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x439E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439E90u;
        // 0x439e94: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439e90) {
            ctx->pc = 0x439E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_439e80;
        }
    }
    ctx->pc = 0x439E98u;
    // 0x439e98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x439E98u;
    {
        const bool branch_taken_0x439e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x439e98) {
            ctx->pc = 0x439EA8u;
            goto label_439ea8;
        }
    }
    ctx->pc = 0x439EA0u;
label_439ea0:
    // 0x439ea0: 0x28a3fc02  slti        $v1, $a1, -0x3FE
    ctx->pc = 0x439ea0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x439ea4: 0x2444fc01  addiu       $a0, $v0, -0x3FF
    ctx->pc = 0x439ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966273));
label_439ea8:
    // 0x439ea8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x439EA8u;
    {
        const bool branch_taken_0x439ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x439EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439EA8u;
        // 0x439eac: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439ea8) {
            ctx->pc = 0x439EC8u;
            goto label_439ec8;
        }
    }
    ctx->pc = 0x439EB0u;
    // 0x439eb0: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x439eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x439eb4: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x439eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x439eb8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x439eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x439ebc: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x439ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x439ec0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x439EC0u;
    {
        const bool branch_taken_0x439ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439EC0u;
        // 0x439ec4: 0x433825  or          $a3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439ec0) {
            ctx->pc = 0x439EF4u;
            goto label_439ef4;
        }
    }
    ctx->pc = 0x439EC8u;
label_439ec8:
    // 0x439ec8: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x439ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x439ecc: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x439eccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x439ed0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x439ED0u;
    {
        const bool branch_taken_0x439ed0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x439ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439ED0u;
        // 0x439ed4: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439ed0) {
            ctx->pc = 0x439EECu;
            goto label_439eec;
        }
    }
    ctx->pc = 0x439ED8u;
    // 0x439ed8: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x439ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x439edc: 0x4e1006  srlv        $v0, $t6, $v0
    ctx->pc = 0x439edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 14), GPR_U32(ctx, 2) & 0x1F));
    // 0x439ee0: 0xce4004  sllv        $t0, $t6, $a2
    ctx->pc = 0x439ee0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 6) & 0x1F));
    // 0x439ee4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x439EE4u;
    {
        const bool branch_taken_0x439ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439EE4u;
        // 0x439ee8: 0x623825  or          $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439ee4) {
            ctx->pc = 0x439EF4u;
            goto label_439ef4;
        }
    }
    ctx->pc = 0x439EECu;
label_439eec:
    // 0x439eec: 0xce3804  sllv        $a3, $t6, $a2
    ctx->pc = 0x439eecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 6) & 0x1F));
    // 0x439ef0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x439ef0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_439ef4:
    // 0x439ef4: 0x2882fc02  slti        $v0, $a0, -0x3FE
    ctx->pc = 0x439ef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x439ef8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x439EF8u;
    {
        const bool branch_taken_0x439ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x439EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439EF8u;
        // 0x439efc: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439ef8) {
            ctx->pc = 0x439F18u;
            goto label_439f18;
        }
    }
    ctx->pc = 0x439F00u;
    // 0x439f00: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x439f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x439f04: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x439f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x439f08: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x439f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x439f0c: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x439f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x439f10: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x439F10u;
    {
        const bool branch_taken_0x439f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439F10u;
        // 0x439f14: 0x434825  or          $t1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439f10) {
            ctx->pc = 0x439F44u;
            goto label_439f44;
        }
    }
    ctx->pc = 0x439F18u;
label_439f18:
    // 0x439f18: 0x443023  subu        $a2, $v0, $a0
    ctx->pc = 0x439f18u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x439f1c: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x439f1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x439f20: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x439F20u;
    {
        const bool branch_taken_0x439f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x439F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439F20u;
        // 0x439f24: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439f20) {
            ctx->pc = 0x439F3Cu;
            goto label_439f3c;
        }
    }
    ctx->pc = 0x439F28u;
    // 0x439f28: 0xc91804  sllv        $v1, $t1, $a2
    ctx->pc = 0x439f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x439f2c: 0x4f1006  srlv        $v0, $t7, $v0
    ctx->pc = 0x439f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 15), GPR_U32(ctx, 2) & 0x1F));
    // 0x439f30: 0xcf5004  sllv        $t2, $t7, $a2
    ctx->pc = 0x439f30u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 6) & 0x1F));
    // 0x439f34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x439F34u;
    {
        const bool branch_taken_0x439f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439F34u;
        // 0x439f38: 0x624825  or          $t1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439f34) {
            ctx->pc = 0x439F44u;
            goto label_439f44;
        }
    }
    ctx->pc = 0x439F3Cu;
label_439f3c:
    // 0x439f3c: 0xcf4804  sllv        $t1, $t7, $a2
    ctx->pc = 0x439f3cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 6) & 0x1F));
    // 0x439f40: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x439f40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_439f44:
    // 0x439f44: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x439F44u;
    {
        const bool branch_taken_0x439f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439F44u;
        // 0x439f48: 0xa43023  subu        $a2, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439f44) {
            ctx->pc = 0x439F90u;
            goto label_439f90;
        }
    }
    ctx->pc = 0x439F4Cu;
    // 0x439f4c: 0x0  nop
    ctx->pc = 0x439f4cu;
    // NOP
label_439f50:
    // 0x439f50: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x439f50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x439f54: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x439f54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x439f58: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x439f58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x439f5c: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x439F5Cu;
    {
        const bool branch_taken_0x439f5c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x439F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439F5Cu;
        // 0x439f60: 0x10a2823  subu        $a1, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439f5c) {
            ctx->pc = 0x439F78u;
            goto label_439f78;
        }
    }
    ctx->pc = 0x439F64u;
    // 0x439f64: 0x817c2  srl         $v0, $t0, 31
    ctx->pc = 0x439f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x439f68: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x439f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x439f6c: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x439f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x439f70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x439F70u;
    {
        const bool branch_taken_0x439f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439F70u;
        // 0x439f74: 0x84040  sll         $t0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439f70) {
            ctx->pc = 0x439F90u;
            goto label_439f90;
        }
    }
    ctx->pc = 0x439F78u;
label_439f78:
    // 0x439f78: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x439f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x439f7c: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x439F7Cu;
    {
        const bool branch_taken_0x439f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x439F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439F7Cu;
        // 0x439f80: 0x31840  sll         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439f7c) {
            ctx->pc = 0x43A090u;
            goto label_43a090;
        }
    }
    ctx->pc = 0x439F84u;
    // 0x439f84: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x439f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x439f88: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x439f88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x439f8c: 0x54040  sll         $t0, $a1, 1
    ctx->pc = 0x439f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_439f90:
    // 0x439f90: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x439f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439f94: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x439F94u;
    {
        const bool branch_taken_0x439f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x439F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439F94u;
        // 0x439f98: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439f94) {
            ctx->pc = 0x439F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_439f50;
        }
    }
    ctx->pc = 0x439F9Cu;
    // 0x439f9c: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x439f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x439fa0: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x439fa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x439fa4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x439fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x439fa8: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x439FA8u;
    {
        const bool branch_taken_0x439fa8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x439FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439FA8u;
        // 0x439fac: 0x10a2823  subu        $a1, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439fa8) {
            ctx->pc = 0x439FB8u;
            goto label_439fb8;
        }
    }
    ctx->pc = 0x439FB0u;
    // 0x439fb0: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x439fb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439fb4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x439fb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_439fb8:
    // 0x439fb8: 0xe81025  or          $v0, $a3, $t0
    ctx->pc = 0x439fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x439fbc: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x439FBCu;
    {
        const bool branch_taken_0x439fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x439FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439FBCu;
        // 0x439fc0: 0xd1fc2  srl         $v1, $t5, 31 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439fbc) {
            ctx->pc = 0x43A094u;
            goto label_43a094;
        }
    }
    ctx->pc = 0x439FC4u;
    // 0x439fc4: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x439fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x439fc8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x439fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x439fcc: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x439fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x439fd0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x439FD0u;
    {
        const bool branch_taken_0x439fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x439FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439FD0u;
        // 0x439fd4: 0x2882fc02  slti        $v0, $a0, -0x3FE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294966274) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x439fd0) {
            ctx->pc = 0x43A000u;
            goto label_43a000;
        }
    }
    ctx->pc = 0x439FD8u;
    // 0x439fd8: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x439fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x439fdc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x439fdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_439fe0:
    // 0x439fe0: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x439fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x439fe4: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x439fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x439fe8: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x439fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x439fec: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x439fecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x439ff0: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x439ff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x439ff4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x439FF4u;
    {
        const bool branch_taken_0x439ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x439FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439FF4u;
        // 0x439ff8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439ff4) {
            ctx->pc = 0x439FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_439fe0;
        }
    }
    ctx->pc = 0x439FFCu;
    // 0x439ffc: 0x2882fc02  slti        $v0, $a0, -0x3FE
    ctx->pc = 0x439ffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294966274) ? 1 : 0);
label_43a000:
    // 0x43a000: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x43A000u;
    {
        const bool branch_taken_0x43a000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A000u;
        // 0x43a004: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a000) {
            ctx->pc = 0x43A050u;
            goto label_43a050;
        }
    }
    ctx->pc = 0x43A008u;
    // 0x43a008: 0x248403ff  addiu       $a0, $a0, 0x3FF
    ctx->pc = 0x43a008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1023));
    // 0x43a00c: 0x3c03fff0  lui         $v1, 0xFFF0
    ctx->pc = 0x43a00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
    // 0x43a010: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x43a010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x43a014: 0x42500  sll         $a0, $a0, 20
    ctx->pc = 0x43a014u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 20));
    // 0x43a018: 0x643825  or          $a3, $v1, $a0
    ctx->pc = 0x43a018u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x43a01c: 0xed1025  or          $v0, $a3, $t5
    ctx->pc = 0x43a01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
    // 0x43a020: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x43a020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43a024: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x43a024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x43a028: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43a028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x43a02c: 0x1645824  and         $t3, $t3, $a0
    ctx->pc = 0x43a02cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
    // 0x43a030: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x43a030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
    // 0x43a034: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x43a034u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x43a038: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x43a038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43a03c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x43a03cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x43a040: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x43a040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x43a044: 0x1645824  and         $t3, $t3, $a0
    ctx->pc = 0x43a044u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
    // 0x43a048: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x43A048u;
    {
        const bool branch_taken_0x43a048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A048u;
        // 0x43a04c: 0x1638825  or          $s1, $t3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a048) {
            ctx->pc = 0x43A0E8u;
            goto label_43a0e8;
        }
    }
    ctx->pc = 0x43A050u;
label_43a050:
    // 0x43a050: 0x443023  subu        $a2, $v0, $a0
    ctx->pc = 0x43a050u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x43a054: 0x28c30015  slti        $v1, $a2, 0x15
    ctx->pc = 0x43a054u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x43a058: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x43A058u;
    {
        const bool branch_taken_0x43a058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A058u;
        // 0x43a05c: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a058) {
            ctx->pc = 0x43A074u;
            goto label_43a074;
        }
    }
    ctx->pc = 0x43A060u;
    // 0x43a060: 0xc81806  srlv        $v1, $t0, $a2
    ctx->pc = 0x43a060u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x43a064: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x43a064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x43a068: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x43a068u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x43a06c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x43A06Cu;
    {
        const bool branch_taken_0x43a06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A06Cu;
        // 0x43a070: 0xc73807  srav        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a06c) {
            ctx->pc = 0x43A0B4u;
            goto label_43a0b4;
        }
    }
    ctx->pc = 0x43A074u;
label_43a074:
    // 0x43a074: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x43a074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x43a078: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x43A078u;
    {
        const bool branch_taken_0x43a078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A078u;
        // 0x43a07c: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a078) {
            ctx->pc = 0x43A0ACu;
            goto label_43a0ac;
        }
    }
    ctx->pc = 0x43A080u;
    // 0x43a080: 0xc81806  srlv        $v1, $t0, $a2
    ctx->pc = 0x43a080u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x43a084: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x43a084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x43a088: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x43A088u;
    {
        const bool branch_taken_0x43a088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A088u;
        // 0x43a08c: 0x434025  or          $t0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a088) {
            ctx->pc = 0x43A0B0u;
            goto label_43a0b0;
        }
    }
    ctx->pc = 0x43A090u;
label_43a090:
    // 0x43a090: 0xd1fc2  srl         $v1, $t5, 31
    ctx->pc = 0x43a090u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
label_43a094:
    // 0x43a094: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x43a094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x43a098: 0x2442d108  addiu       $v0, $v0, -0x2EF8
    ctx->pc = 0x43a098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955272));
    // 0x43a09c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x43a09cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x43a0a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x43a0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x43a0a4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x43A0A4u;
    {
        const bool branch_taken_0x43a0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A0A4u;
        // 0x43a0a8: 0xdc620000  ld          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a0a4) {
            ctx->pc = 0x43A0ECu;
            goto label_43a0ec;
        }
    }
    ctx->pc = 0x43A0ACu;
label_43a0ac:
    // 0x43a0ac: 0xc74007  srav        $t0, $a3, $a2
    ctx->pc = 0x43a0acu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
label_43a0b0:
    // 0x43a0b0: 0x1a0382d  daddu       $a3, $t5, $zero
    ctx->pc = 0x43a0b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_43a0b4:
    // 0x43a0b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x43a0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43a0b8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x43a0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x43a0bc: 0xed1025  or          $v0, $a3, $t5
    ctx->pc = 0x43a0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
    // 0x43a0c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43a0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x43a0c4: 0x1836024  and         $t4, $t4, $v1
    ctx->pc = 0x43a0c4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 3));
    // 0x43a0c8: 0x1826025  or          $t4, $t4, $v0
    ctx->pc = 0x43a0c8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x43a0cc: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x43a0ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
    // 0x43a0d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x43a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43a0d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43a0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x43a0d8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x43a0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x43a0dc: 0x1826024  and         $t4, $t4, $v0
    ctx->pc = 0x43a0dcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x43a0e0: 0x1838825  or          $s1, $t4, $v1
    ctx->pc = 0x43a0e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
    // 0x43a0e4: 0x0  nop
    ctx->pc = 0x43a0e4u;
    // NOP
label_43a0e8:
    // 0x43a0e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x43a0e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43a0ec:
    // 0x43a0ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x43a0ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_43a0f0:
    // 0x43a0f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x43a0f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43a0f4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x43a0f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43a0f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43a0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43a0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x43A0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43A100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A0FCu;
        // 0x43a100: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43A0FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43A104u;
    // 0x43a104: 0x0  nop
    ctx->pc = 0x43a104u;
    // NOP
    ctx->pc = 0x43a108u;
}
