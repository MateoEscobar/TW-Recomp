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

// Function: sub_0018DAC0
// Address: 0x18dac0 - 0x18dcc0
void sub_0018DAC0_0x18dac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DAC0_0x18dac0");
#endif

    switch (ctx->pc) {
        case 0x18daf0u: goto label_18daf0;
        case 0x18db00u: goto label_18db00;
        case 0x18db38u: goto label_18db38;
        case 0x18db58u: goto label_18db58;
        case 0x18db70u: goto label_18db70;
        case 0x18dbb4u: goto label_18dbb4;
        case 0x18dbbcu: goto label_18dbbc;
        case 0x18dbdcu: goto label_18dbdc;
        case 0x18dbe4u: goto label_18dbe4;
        case 0x18dbfcu: goto label_18dbfc;
        case 0x18dc08u: goto label_18dc08;
        case 0x18dc10u: goto label_18dc10;
        case 0x18dc1cu: goto label_18dc1c;
        case 0x18dc38u: goto label_18dc38;
        case 0x18dc44u: goto label_18dc44;
        case 0x18dc50u: goto label_18dc50;
        case 0x18dc5cu: goto label_18dc5c;
        case 0x18dc68u: goto label_18dc68;
        case 0x18dc70u: goto label_18dc70;
        case 0x18dc80u: goto label_18dc80;
        case 0x18dc90u: goto label_18dc90;
        default: break;
    }

    ctx->pc = 0x18dac0u;

    // 0x18dac0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18dac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18dac4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18dac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x18dac8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x18dac8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x18dacc: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x18daccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x18dad0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18dad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18dad4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x18dad4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x18dad8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18dad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18dadc: 0x2611deb8  addiu       $s1, $s0, -0x2148
    ctx->pc = 0x18dadcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958776));
    // 0x18dae0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x18dae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x18dae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18dae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18dae8: 0xc047ab8  jal         func_11EAE0
    ctx->pc = 0x18DAE8u;
    SET_GPR_U32(ctx, 31, 0x18DAF0u);
    ctx->pc = 0x18DAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DAE8u;
    // 0x18daec: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x18DAE8u, 0x18DAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DAF0u;
label_18daf0:
    // 0x18daf0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x18daf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18daf4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18daf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18daf8: 0xc0636a0  jal         func_18DA80
    ctx->pc = 0x18DAF8u;
    SET_GPR_U32(ctx, 31, 0x18DB00u);
    ctx->pc = 0x18DAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DAF8u;
    // 0x18dafc: 0x8e05deb8  lw          $a1, -0x2148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294958776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DA80u, 0x18DAF8u, 0x18DB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DB00u;
label_18db00:
    // 0x18db00: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x18db00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x18db04: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x18db04u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x18db08: 0x84820224  lh          $v0, 0x224($a0)
    ctx->pc = 0x18db08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x18db0c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x18db0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x18db10: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x18db10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x18db14: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x18DB14u;
    {
        const bool branch_taken_0x18db14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB14u;
        // 0x18db18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db14) {
            ctx->pc = 0x18DC24u;
            goto label_18dc24;
        }
    }
    ctx->pc = 0x18DB1Cu;
    // 0x18db1c: 0x16420041  bne         $s2, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x18DB1Cu;
    {
        const bool branch_taken_0x18db1c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x18DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB1Cu;
        // 0x18db20: 0x8e64deb8  lw          $a0, -0x2148($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294958776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db1c) {
            ctx->pc = 0x18DC24u;
            goto label_18dc24;
        }
    }
    ctx->pc = 0x18DB24u;
    // 0x18db24: 0x8c8201f8  lw          $v0, 0x1F8($a0)
    ctx->pc = 0x18db24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 504)));
    // 0x18db28: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18DB28u;
    {
        const bool branch_taken_0x18db28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18db28) {
            ctx->pc = 0x18DB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DB28u;
            // 0x18db2c: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DB40u;
            goto label_18db40;
        }
    }
    ctx->pc = 0x18DB30u;
    // 0x18db30: 0xc063474  jal         func_18D1D0
    ctx->pc = 0x18DB30u;
    SET_GPR_U32(ctx, 31, 0x18DB38u);
    ctx->pc = 0x18DB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DB30u;
    // 0x18db34: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D1D0u, 0x18DB30u, 0x18DB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DB38u;
label_18db38:
    // 0x18db38: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18DB38u;
    {
        const bool branch_taken_0x18db38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB38u;
        // 0x18db3c: 0x8e64deb8  lw          $a0, -0x2148($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294958776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db38) {
            ctx->pc = 0x18DB64u;
            goto label_18db64;
        }
    }
    ctx->pc = 0x18DB40u;
label_18db40:
    // 0x18db40: 0x8c6201f8  lw          $v0, 0x1F8($v1)
    ctx->pc = 0x18db40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 504)));
    // 0x18db44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18DB44u;
    {
        const bool branch_taken_0x18db44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB44u;
        // 0x18db48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db44) {
            ctx->pc = 0x18DB60u;
            goto label_18db60;
        }
    }
    ctx->pc = 0x18DB4Cu;
    // 0x18db4c: 0xa4600212  sh          $zero, 0x212($v1)
    ctx->pc = 0x18db4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 530), (uint16_t)GPR_U32(ctx, 0));
    // 0x18db50: 0xc063474  jal         func_18D1D0
    ctx->pc = 0x18DB50u;
    SET_GPR_U32(ctx, 31, 0x18DB58u);
    ctx->pc = 0x18DB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DB50u;
    // 0x18db54: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D1D0u, 0x18DB50u, 0x18DB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DB58u;
label_18db58:
    // 0x18db58: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x18db58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18db5c: 0xa4520212  sh          $s2, 0x212($v0)
    ctx->pc = 0x18db5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 530), (uint16_t)GPR_U32(ctx, 18));
label_18db60:
    // 0x18db60: 0x8e64deb8  lw          $a0, -0x2148($s3)
    ctx->pc = 0x18db60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294958776)));
label_18db64:
    // 0x18db64: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18db64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x18db68: 0xc063644  jal         func_18D910
    ctx->pc = 0x18DB68u;
    SET_GPR_U32(ctx, 31, 0x18DB70u);
    ctx->pc = 0x18DB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DB68u;
    // 0x18db6c: 0x2670deb8  addiu       $s0, $s3, -0x2148 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D910u, 0x18DB68u, 0x18DB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DB70u;
label_18db70:
    // 0x18db70: 0x8e64deb8  lw          $a0, -0x2148($s3)
    ctx->pc = 0x18db70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294958776)));
    // 0x18db74: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18db74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18db78: 0x8c850198  lw          $a1, 0x198($a0)
    ctx->pc = 0x18db78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
    // 0x18db7c: 0x10a6000b  beq         $a1, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x18DB7Cu;
    {
        const bool branch_taken_0x18db7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x18db7c) {
            ctx->pc = 0x18DBACu;
            goto label_18dbac;
        }
    }
    ctx->pc = 0x18DB84u;
    // 0x18db84: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x18db84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18db88: 0x8c620198  lw          $v0, 0x198($v1)
    ctx->pc = 0x18db88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 408)));
    // 0x18db8c: 0x1046000f  beq         $v0, $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x18DB8Cu;
    {
        const bool branch_taken_0x18db8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x18DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB8Cu;
        // 0x18db90: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db8c) {
            ctx->pc = 0x18DBCCu;
            goto label_18dbcc;
        }
    }
    ctx->pc = 0x18DB94u;
    // 0x18db94: 0x10a60005  beq         $a1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x18DB94u;
    {
        const bool branch_taken_0x18db94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x18db94) {
            ctx->pc = 0x18DBACu;
            goto label_18dbac;
        }
    }
    ctx->pc = 0x18DB9Cu;
    // 0x18db9c: 0x5046000c  beql        $v0, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x18DB9Cu;
    {
        const bool branch_taken_0x18db9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x18db9c) {
            ctx->pc = 0x18DBA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DB9Cu;
            // 0x18dba0: 0xa4600212  sh          $zero, 0x212($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 530), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DBD0u;
            goto label_18dbd0;
        }
    }
    ctx->pc = 0x18DBA4u;
    // 0x18dba4: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x18DBA4u;
    {
        const bool branch_taken_0x18dba4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x18dba4) {
            ctx->pc = 0x18DBC4u;
            goto label_18dbc4;
        }
    }
    ctx->pc = 0x18DBACu;
label_18dbac:
    // 0x18dbac: 0xc063294  jal         func_18CA50
    ctx->pc = 0x18DBACu;
    SET_GPR_U32(ctx, 31, 0x18DBB4u);
    ctx->pc = 0x18DBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DBACu;
    // 0x18dbb0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CA50u, 0x18DBACu, 0x18DBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DBB4u;
label_18dbb4:
    // 0x18dbb4: 0xc063102  jal         func_18C408
    ctx->pc = 0x18DBB4u;
    SET_GPR_U32(ctx, 31, 0x18DBBCu);
    ctx->pc = 0x18DBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DBB4u;
    // 0x18dbb8: 0x8e64deb8  lw          $a0, -0x2148($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294958776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C408u, 0x18DBB4u, 0x18DBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DBBCu;
label_18dbbc:
    // 0x18dbbc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x18DBBCu;
    {
        const bool branch_taken_0x18dbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DBBCu;
        // 0x18dbc0: 0x8e64deb8  lw          $a0, -0x2148($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294958776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dbbc) {
            ctx->pc = 0x18DC14u;
            goto label_18dc14;
        }
    }
    ctx->pc = 0x18DBC4u;
label_18dbc4:
    // 0x18dbc4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18DBC4u;
    {
        const bool branch_taken_0x18dbc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18dbc4) {
            ctx->pc = 0x18DBF4u;
            goto label_18dbf4;
        }
    }
    ctx->pc = 0x18DBCCu;
label_18dbcc:
    // 0x18dbcc: 0xa4600212  sh          $zero, 0x212($v1)
    ctx->pc = 0x18dbccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 530), (uint16_t)GPR_U32(ctx, 0));
label_18dbd0:
    // 0x18dbd0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18dbd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x18dbd4: 0xc063294  jal         func_18CA50
    ctx->pc = 0x18DBD4u;
    SET_GPR_U32(ctx, 31, 0x18DBDCu);
    ctx->pc = 0x18DBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DBD4u;
    // 0x18dbd8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CA50u, 0x18DBD4u, 0x18DBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DBDCu;
label_18dbdc:
    // 0x18dbdc: 0xc063102  jal         func_18C408
    ctx->pc = 0x18DBDCu;
    SET_GPR_U32(ctx, 31, 0x18DBE4u);
    ctx->pc = 0x18DBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DBDCu;
    // 0x18dbe0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C408u, 0x18DBDCu, 0x18DBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DBE4u;
label_18dbe4:
    // 0x18dbe4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x18dbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18dbe8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18dbec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18DBECu;
    {
        const bool branch_taken_0x18dbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DBECu;
        // 0x18dbf0: 0xa4620212  sh          $v0, 0x212($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 530), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dbec) {
            ctx->pc = 0x18DC10u;
            goto label_18dc10;
        }
    }
    ctx->pc = 0x18DBF4u;
label_18dbf4:
    // 0x18dbf4: 0xc063474  jal         func_18D1D0
    ctx->pc = 0x18DBF4u;
    SET_GPR_U32(ctx, 31, 0x18DBFCu);
    ctx->pc = 0x18DBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DBF4u;
    // 0x18dbf8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D1D0u, 0x18DBF4u, 0x18DBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DBFCu;
label_18dbfc:
    // 0x18dbfc: 0x8e64deb8  lw          $a0, -0x2148($s3)
    ctx->pc = 0x18dbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294958776)));
    // 0x18dc00: 0xc063294  jal         func_18CA50
    ctx->pc = 0x18DC00u;
    SET_GPR_U32(ctx, 31, 0x18DC08u);
    ctx->pc = 0x18DC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC00u;
    // 0x18dc04: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CA50u, 0x18DC00u, 0x18DC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DC08u;
label_18dc08:
    // 0x18dc08: 0xc063102  jal         func_18C408
    ctx->pc = 0x18DC08u;
    SET_GPR_U32(ctx, 31, 0x18DC10u);
    ctx->pc = 0x18DC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC08u;
    // 0x18dc0c: 0x8e64deb8  lw          $a0, -0x2148($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294958776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C408u, 0x18DC08u, 0x18DC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DC10u;
label_18dc10:
    // 0x18dc10: 0x8e64deb8  lw          $a0, -0x2148($s3)
    ctx->pc = 0x18dc10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294958776)));
label_18dc14:
    // 0x18dc14: 0xc063396  jal         func_18CE58
    ctx->pc = 0x18DC14u;
    SET_GPR_U32(ctx, 31, 0x18DC1Cu);
    ctx->pc = 0x18DC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC14u;
    // 0x18dc18: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CE58u, 0x18DC14u, 0x18DC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DC1Cu;
label_18dc1c:
    // 0x18dc1c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x18DC1Cu;
    {
        const bool branch_taken_0x18dc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC1Cu;
        // 0x18dc20: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc1c) {
            ctx->pc = 0x18DCA4u;
            goto label_18dca4;
        }
    }
    ctx->pc = 0x18DC24u;
label_18dc24:
    // 0x18dc24: 0x1240001e  beqz        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x18DC24u;
    {
        const bool branch_taken_0x18dc24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC24u;
        // 0x18dc28: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc24) {
            ctx->pc = 0x18DCA0u;
            goto label_18dca0;
        }
    }
    ctx->pc = 0x18DC2Cu;
    // 0x18dc2c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x18dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x18dc30: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x18dc30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18dc34: 0x2450deb8  addiu       $s0, $v0, -0x2148
    ctx->pc = 0x18dc34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
label_18dc38:
    // 0x18dc38: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18dc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18dc3c: 0xc063474  jal         func_18D1D0
    ctx->pc = 0x18DC3Cu;
    SET_GPR_U32(ctx, 31, 0x18DC44u);
    ctx->pc = 0x18DC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC3Cu;
    // 0x18dc40: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D1D0u, 0x18DC3Cu, 0x18DC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DC44u;
label_18dc44:
    // 0x18dc44: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18dc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18dc48: 0xc063294  jal         func_18CA50
    ctx->pc = 0x18DC48u;
    SET_GPR_U32(ctx, 31, 0x18DC50u);
    ctx->pc = 0x18DC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC48u;
    // 0x18dc4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CA50u, 0x18DC48u, 0x18DC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DC50u;
label_18dc50:
    // 0x18dc50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18dc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18dc54: 0xc063396  jal         func_18CE58
    ctx->pc = 0x18DC54u;
    SET_GPR_U32(ctx, 31, 0x18DC5Cu);
    ctx->pc = 0x18DC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC54u;
    // 0x18dc58: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CE58u, 0x18DC54u, 0x18DC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DC5Cu;
label_18dc5c:
    // 0x18dc5c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18dc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18dc60: 0xc063644  jal         func_18D910
    ctx->pc = 0x18DC60u;
    SET_GPR_U32(ctx, 31, 0x18DC68u);
    ctx->pc = 0x18DC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC60u;
    // 0x18dc64: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D910u, 0x18DC60u, 0x18DC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DC68u;
label_18dc68:
    // 0x18dc68: 0xc07f89a  jal         func_1FE268
    ctx->pc = 0x18DC68u;
    SET_GPR_U32(ctx, 31, 0x18DC70u);
    ctx->pc = 0x1FE268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE268u, 0x18DC68u, 0x18DC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DC70u;
label_18dc70:
    // 0x18dc70: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x18DC70u;
    {
        const bool branch_taken_0x18dc70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18dc70) {
            ctx->pc = 0x18DC74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DC70u;
            // 0x18dc74: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DC94u;
            goto label_18dc94;
        }
    }
    ctx->pc = 0x18DC78u;
    // 0x18dc78: 0xc080ffa  jal         func_203FE8
    ctx->pc = 0x18DC78u;
    SET_GPR_U32(ctx, 31, 0x18DC80u);
    ctx->pc = 0x203FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FE8u, 0x18DC78u, 0x18DC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DC80u;
label_18dc80:
    // 0x18dc80: 0x54530004  bnel        $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x18DC80u;
    {
        const bool branch_taken_0x18dc80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x18dc80) {
            ctx->pc = 0x18DC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DC80u;
            // 0x18dc84: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DC94u;
            goto label_18dc94;
        }
    }
    ctx->pc = 0x18DC88u;
    // 0x18dc88: 0xc063102  jal         func_18C408
    ctx->pc = 0x18DC88u;
    SET_GPR_U32(ctx, 31, 0x18DC90u);
    ctx->pc = 0x18DC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC88u;
    // 0x18dc8c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C408u, 0x18DC88u, 0x18DC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DC90u;
label_18dc90:
    // 0x18dc90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18dc90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_18dc94:
    // 0x18dc94: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x18dc94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x18dc98: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x18DC98u;
    {
        const bool branch_taken_0x18dc98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC98u;
        // 0x18dc9c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc98) {
            ctx->pc = 0x18DC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18dc38;
        }
    }
    ctx->pc = 0x18DCA0u;
label_18dca0:
    // 0x18dca0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18dca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18dca4:
    // 0x18dca4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18dca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18dca8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18dca8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18dcac: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x18dcacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18dcb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18dcb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18dcb4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x18dcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18dcb8: 0x3e00008  jr          $ra
    ctx->pc = 0x18DCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCB8u;
        // 0x18dcbc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DCB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DCC0u;
}
