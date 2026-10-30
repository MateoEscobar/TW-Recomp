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

// Function: sub_00333CE0
// Address: 0x333ce0 - 0x333e20
void sub_00333CE0_0x333ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333CE0_0x333ce0");
#endif

    switch (ctx->pc) {
        case 0x333d08u: goto label_333d08;
        case 0x333d14u: goto label_333d14;
        case 0x333d70u: goto label_333d70;
        case 0x333d94u: goto label_333d94;
        case 0x333e04u: goto label_333e04;
        default: break;
    }

    ctx->pc = 0x333ce0u;

    // 0x333ce0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x333ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x333ce4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x333ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x333ce8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x333ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x333cec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x333cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333cf0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x333cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x333cf4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x333cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x333cf8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x333cf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333cfc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x333cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x333d00: 0xc0cc710  jal         func_331C40
    ctx->pc = 0x333D00u;
    SET_GPR_U32(ctx, 31, 0x333D08u);
    ctx->pc = 0x333D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333D00u;
    // 0x333d04: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C40u, 0x333D00u, 0x333D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333D08u;
label_333d08:
    // 0x333d08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x333d08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333d0c: 0xc0cc9e6  jal         func_332798
    ctx->pc = 0x333D0Cu;
    SET_GPR_U32(ctx, 31, 0x333D14u);
    ctx->pc = 0x333D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333D0Cu;
    // 0x333d10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332798u, 0x333D0Cu, 0x333D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333D14u;
label_333d14:
    // 0x333d14: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x333d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x333d18: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x333d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x333d1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x333d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333d20: 0x8c530010  lw          $s3, 0x10($v0)
    ctx->pc = 0x333d20u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x333d24: 0x16600019  bnez        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x333D24u;
    {
        const bool branch_taken_0x333d24 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x333D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333D24u;
        // 0x333d28: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333d24) {
            ctx->pc = 0x333D8Cu;
            goto label_333d8c;
        }
    }
    ctx->pc = 0x333D2Cu;
    // 0x333d2c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x333d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x333d30: 0x24425af0  addiu       $v0, $v0, 0x5AF0
    ctx->pc = 0x333d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23280));
    // 0x333d34: 0x52220008  beql        $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x333D34u;
    {
        const bool branch_taken_0x333d34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x333d34) {
            ctx->pc = 0x333D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333D34u;
            // 0x333d38: 0x8e050044  lw          $a1, 0x44($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333D58u;
            goto label_333d58;
        }
    }
    ctx->pc = 0x333D3Cu;
    // 0x333d3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x333d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333d40: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x333d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x333d44: 0xdc437ff0  ld          $v1, 0x7FF0($v0)
    ctx->pc = 0x333d44u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 32752)));
    // 0x333d48: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x333d48u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x333d4c: 0xdc447ff8  ld          $a0, 0x7FF8($v0)
    ctx->pc = 0x333d4cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 32760)));
    // 0x333d50: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x333D50u;
    {
        const bool branch_taken_0x333d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333D50u;
        // 0x333d54: 0xfe240008  sd          $a0, 0x8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333d50) {
            ctx->pc = 0x333E04u;
            goto label_333e04;
        }
    }
    ctx->pc = 0x333D58u;
label_333d58:
    // 0x333d58: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x333d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x333d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x333d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333d60: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x333d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x333d64: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x333d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x333d68: 0xc0cc862  jal         func_332188
    ctx->pc = 0x333D68u;
    SET_GPR_U32(ctx, 31, 0x333D70u);
    ctx->pc = 0x333D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333D68u;
    // 0x333d6c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332188u, 0x333D68u, 0x333D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333D70u;
label_333d70:
    // 0x333d70: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x333d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333d74: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x333d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x333d78: 0xdc647ff0  ld          $a0, 0x7FF0($v1)
    ctx->pc = 0x333d78u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 32752)));
    // 0x333d7c: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x333d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x333d80: 0xdc657ff8  ld          $a1, 0x7FF8($v1)
    ctx->pc = 0x333d80u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 32760)));
    // 0x333d84: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x333D84u;
    {
        const bool branch_taken_0x333d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333D84u;
        // 0x333d88: 0xfc450008  sd          $a1, 0x8($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333d84) {
            ctx->pc = 0x333E04u;
            goto label_333e04;
        }
    }
    ctx->pc = 0x333D8Cu;
label_333d8c:
    // 0x333d8c: 0xc0ca1dc  jal         func_328770
    ctx->pc = 0x333D8Cu;
    SET_GPR_U32(ctx, 31, 0x333D94u);
    ctx->pc = 0x333D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333D8Cu;
    // 0x333d90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328770u, 0x333D8Cu, 0x333D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333D94u;
label_333d94:
    // 0x333d94: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x333d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333d98: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x333d98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x333d9c: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x333d9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x333da0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x333da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333da4: 0x24a78000  addiu       $a3, $a1, -0x8000
    ctx->pc = 0x333da4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x333da8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x333da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333dac: 0xdce27ff0  ld          $v0, 0x7FF0($a3)
    ctx->pc = 0x333dacu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 32752)));
    // 0x333db0: 0xfca20020  sd          $v0, 0x20($a1)
    ctx->pc = 0x333db0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 2));
    // 0x333db4: 0xdce37ff8  ld          $v1, 0x7FF8($a3)
    ctx->pc = 0x333db4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 32760)));
    // 0x333db8: 0xfca30028  sd          $v1, 0x28($a1)
    ctx->pc = 0x333db8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 3));
    // 0x333dbc: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x333dbcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x333dc0: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x333dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333dc4: 0xfce20010  sd          $v0, 0x10($a3)
    ctx->pc = 0x333dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 2));
    // 0x333dc8: 0xde230008  ld          $v1, 0x8($s1)
    ctx->pc = 0x333dc8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x333dcc: 0xfce30018  sd          $v1, 0x18($a3)
    ctx->pc = 0x333dccu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 3));
    // 0x333dd0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x333dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333dd4: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x333dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x333dd8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x333dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333ddc: 0xac720008  sw          $s2, 0x8($v1)
    ctx->pc = 0x333ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 18));
    // 0x333de0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x333de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333de4: 0xac49fff0  sw          $t1, -0x10($v0)
    ctx->pc = 0x333de4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967280), GPR_U32(ctx, 9));
    // 0x333de8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x333de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333dec: 0xac73fff8  sw          $s3, -0x8($v1)
    ctx->pc = 0x333decu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), GPR_U32(ctx, 19));
    // 0x333df0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x333df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333df4: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x333df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x333df8: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x333df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x333dfc: 0xc0ca2d0  jal         func_328B40
    ctx->pc = 0x333DFCu;
    SET_GPR_U32(ctx, 31, 0x333E04u);
    ctx->pc = 0x333E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333DFCu;
    // 0x333e00: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328B40u, 0x333DFCu, 0x333E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333E04u;
label_333e04:
    // 0x333e04: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x333e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x333e08: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x333e08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x333e0c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x333e0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x333e10: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x333e10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x333e14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x333e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x333e18: 0x3e00008  jr          $ra
    ctx->pc = 0x333E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333E18u;
        // 0x333e1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333E20u;
}
