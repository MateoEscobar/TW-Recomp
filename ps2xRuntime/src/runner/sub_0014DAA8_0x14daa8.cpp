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

// Function: sub_0014DAA8
// Address: 0x14daa8 - 0x14dc88
void sub_0014DAA8_0x14daa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DAA8_0x14daa8");
#endif

    switch (ctx->pc) {
        case 0x14dae8u: goto label_14dae8;
        case 0x14daf4u: goto label_14daf4;
        case 0x14db00u: goto label_14db00;
        case 0x14db48u: goto label_14db48;
        case 0x14db54u: goto label_14db54;
        case 0x14db60u: goto label_14db60;
        case 0x14db70u: goto label_14db70;
        case 0x14db78u: goto label_14db78;
        case 0x14db90u: goto label_14db90;
        case 0x14dbb0u: goto label_14dbb0;
        case 0x14dbc4u: goto label_14dbc4;
        case 0x14dc20u: goto label_14dc20;
        default: break;
    }

    ctx->pc = 0x14daa8u;

    // 0x14daa8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14daa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14daac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14daacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14dab0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x14dab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x14dab4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x14dab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14dab8: 0x8c43c4fc  lw          $v1, -0x3B04($v0)
    ctx->pc = 0x14dab8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50C4FCu));
    // 0x14dabc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x14dabcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dac0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x14dac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x14dac4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x14dac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x14dac8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x14dac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x14dacc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14daccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14dad0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x14dad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x14dad4: 0x1464000c  bne         $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x14DAD4u;
    {
        const bool branch_taken_0x14dad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x14DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DAD4u;
        // 0x14dad8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dad4) {
            ctx->pc = 0x14DB08u;
            goto label_14db08;
        }
    }
    ctx->pc = 0x14DADCu;
    // 0x14dadc: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14dadcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14dae0: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14DAE0u;
    SET_GPR_U32(ctx, 31, 0x14DAE8u);
    ctx->pc = 0x14DAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DAE0u;
    // 0x14dae4: 0x2484b850  addiu       $a0, $a0, -0x47B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14DAE0u, 0x14DAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DAE8u;
label_14dae8:
    // 0x14dae8: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14dae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14daec: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14DAECu;
    SET_GPR_U32(ctx, 31, 0x14DAF4u);
    ctx->pc = 0x14DAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DAECu;
    // 0x14daf0: 0x2484b870  addiu       $a0, $a0, -0x4790 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14DAECu, 0x14DAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DAF4u;
label_14daf4:
    // 0x14daf4: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14daf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14daf8: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14DAF8u;
    SET_GPR_U32(ctx, 31, 0x14DB00u);
    ctx->pc = 0x14DAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DAF8u;
    // 0x14dafc: 0x2484b8b0  addiu       $a0, $a0, -0x4750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14DAF8u, 0x14DB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DB00u;
label_14db00:
    // 0x14db00: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x14DB00u;
    {
        const bool branch_taken_0x14db00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB00u;
        // 0x14db04: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db00) {
            ctx->pc = 0x14DC68u;
            goto label_14dc68;
        }
    }
    ctx->pc = 0x14DB08u;
label_14db08:
    // 0x14db08: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14db08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14db0c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x14db0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x14db10: 0x8c62bd14  lw          $v0, -0x42EC($v1)
    ctx->pc = 0x14db10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50BD14u));
    // 0x14db14: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x14db14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14db18: 0x8c83c4f8  lw          $v1, -0x3B08($a0)
    ctx->pc = 0x14db18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50C4F8u));
    // 0x14db1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14db1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14db20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14db20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14db24: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x14db24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x14db28: 0x2c420800  sltiu       $v0, $v0, 0x800
    ctx->pc = 0x14db28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2048) ? 1 : 0);
    // 0x14db2c: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x14DB2Cu;
    {
        const bool branch_taken_0x14db2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB2Cu;
        // 0x14db30: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db2c) {
            ctx->pc = 0x14DBC4u;
            goto label_14dbc4;
        }
    }
    ctx->pc = 0x14DB34u;
    // 0x14db34: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14db34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14db38: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x14db38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x14db3c: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x14db3cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x14db40: 0xc043e74  jal         func_10F9D0
    ctx->pc = 0x14DB40u;
    SET_GPR_U32(ctx, 31, 0x14DB48u);
    ctx->pc = 0x14DB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DB40u;
    // 0x14db44: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F9D0u, 0x14DB40u, 0x14DB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DB48u;
label_14db48:
    // 0x14db48: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14db48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14db4c: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14DB4Cu;
    SET_GPR_U32(ctx, 31, 0x14DB54u);
    ctx->pc = 0x14DB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DB4Cu;
    // 0x14db50: 0x2484b8c8  addiu       $a0, $a0, -0x4738 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14DB4Cu, 0x14DB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DB54u;
label_14db54:
    // 0x14db54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14db54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14db58: 0xc054660  jal         func_151980
    ctx->pc = 0x14DB58u;
    SET_GPR_U32(ctx, 31, 0x14DB60u);
    ctx->pc = 0x14DB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DB58u;
    // 0x14db5c: 0xa202c210  sb          $v0, -0x3DF0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294951440), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x14DB58u, 0x14DB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DB60u;
label_14db60:
    // 0x14db60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14db60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14db64: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14DB64u;
    {
        const bool branch_taken_0x14db64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14db64) {
            ctx->pc = 0x14DB88u;
            goto label_14db88;
        }
    }
    ctx->pc = 0x14DB6Cu;
    // 0x14db6c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x14db6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14db70:
    // 0x14db70: 0xc054660  jal         func_151980
    ctx->pc = 0x14DB70u;
    SET_GPR_U32(ctx, 31, 0x14DB78u);
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x14DB70u, 0x14DB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DB78u;
label_14db78:
    // 0x14db78: 0x0  nop
    ctx->pc = 0x14db78u;
    // NOP
    // 0x14db7c: 0x0  nop
    ctx->pc = 0x14db7cu;
    // NOP
    // 0x14db80: 0x1050fffb  beq         $v0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14DB80u;
    {
        const bool branch_taken_0x14db80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x14db80) {
            ctx->pc = 0x14DB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14db70;
        }
    }
    ctx->pc = 0x14DB88u;
label_14db88:
    // 0x14db88: 0xc053eba  jal         func_14FAE8
    ctx->pc = 0x14DB88u;
    SET_GPR_U32(ctx, 31, 0x14DB90u);
    ctx->pc = 0x14DB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DB88u;
    // 0x14db8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FAE8u, 0x14DB88u, 0x14DB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DB90u;
label_14db90:
    // 0x14db90: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x14db90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14db94: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14DB94u;
    {
        const bool branch_taken_0x14db94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14DB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB94u;
        // 0x14db98: 0xa240c210  sb          $zero, -0x3DF0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 4294951440), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db94) {
            ctx->pc = 0x14DBB8u;
            goto label_14dbb8;
        }
    }
    ctx->pc = 0x14DB9Cu;
    // 0x14db9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14dba0: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14dba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14dba4: 0xa662c238  sh          $v0, -0x3DC8($s3)
    ctx->pc = 0x14dba4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4294951480), (uint16_t)GPR_U32(ctx, 2));
    // 0x14dba8: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14DBA8u;
    SET_GPR_U32(ctx, 31, 0x14DBB0u);
    ctx->pc = 0x14DBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DBA8u;
    // 0x14dbac: 0x2484b900  addiu       $a0, $a0, -0x4700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14DBA8u, 0x14DBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DBB0u;
label_14dbb0:
    // 0x14dbb0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x14DBB0u;
    {
        const bool branch_taken_0x14dbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DBB0u;
        // 0x14dbb4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dbb0) {
            ctx->pc = 0x14DC68u;
            goto label_14dc68;
        }
    }
    ctx->pc = 0x14DBB8u;
label_14dbb8:
    // 0x14dbb8: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14dbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14dbbc: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14DBBCu;
    SET_GPR_U32(ctx, 31, 0x14DBC4u);
    ctx->pc = 0x14DBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DBBCu;
    // 0x14dbc0: 0x2484b930  addiu       $a0, $a0, -0x46D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14DBBCu, 0x14DBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DBC4u;
label_14dbc4:
    // 0x14dbc4: 0x8e86bd14  lw          $a2, -0x42EC($s4)
    ctx->pc = 0x14dbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950164)));
    // 0x14dbc8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x14dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x14dbcc: 0x2448fdc0  addiu       $t0, $v0, -0x240
    ctx->pc = 0x14dbccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966720));
    // 0x14dbd0: 0x96a5c4fc  lhu         $a1, -0x3B04($s5)
    ctx->pc = 0x14dbd0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4294952188)));
    // 0x14dbd4: 0x24c20002  addiu       $v0, $a2, 0x2
    ctx->pc = 0x14dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x14dbd8: 0x24c30003  addiu       $v1, $a2, 0x3
    ctx->pc = 0x14dbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x14dbdc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x14dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x14dbe0: 0xa660c238  sh          $zero, -0x3DC8($s3)
    ctx->pc = 0x14dbe0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4294951480), (uint16_t)GPR_U32(ctx, 0));
    // 0x14dbe4: 0x9624c4f8  lhu         $a0, -0x3B08($s1)
    ctx->pc = 0x14dbe4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294952184)));
    // 0x14dbe8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x14dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x14dbec: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14dbecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x14dbf0: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x14dbf0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x14dbf4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x14dbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x14dbf8: 0x8e27c4f8  lw          $a3, -0x3B08($s1)
    ctx->pc = 0x14dbf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952184)));
    // 0x14dbfc: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x14dbfcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
    // 0x14dc00: 0x18e0000d  blez        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x14DC00u;
    {
        const bool branch_taken_0x14dc00 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x14DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DC00u;
        // 0x14dc04: 0xa4640000  sh          $a0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dc00) {
            ctx->pc = 0x14DC38u;
            goto label_14dc38;
        }
    }
    ctx->pc = 0x14DC08u;
    // 0x14dc08: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x14dc08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x14dc0c: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x14dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x14dc10: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x14dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x14dc14: 0x24651dc0  addiu       $a1, $v1, 0x1DC0
    ctx->pc = 0x14dc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 7616));
    // 0x14dc18: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x14dc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x14dc1c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x14dc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_14dc20:
    // 0x14dc20: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x14dc20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14dc24: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x14dc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x14dc28: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x14dc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x14dc2c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x14dc2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x14dc30: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14DC30u;
    {
        const bool branch_taken_0x14dc30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DC30u;
        // 0x14dc34: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dc30) {
            ctx->pc = 0x14DC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14dc20;
        }
    }
    ctx->pc = 0x14DC38u;
label_14dc38:
    // 0x14dc38: 0x8e82bd14  lw          $v0, -0x42EC($s4)
    ctx->pc = 0x14dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950164)));
    // 0x14dc3c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14dc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14dc40: 0x8e24c4f8  lw          $a0, -0x3B08($s1)
    ctx->pc = 0x14dc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952184)));
    // 0x14dc44: 0x8d23c500  lw          $v1, -0x3B00($t1)
    ctx->pc = 0x14dc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294952192)));
    // 0x14dc48: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x14dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x14dc4c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14dc50: 0xaea5c4fc  sw          $a1, -0x3B04($s5)
    ctx->pc = 0x14dc50u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294952188), GPR_U32(ctx, 5));
    // 0x14dc54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14dc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14dc58: 0xae82bd14  sw          $v0, -0x42EC($s4)
    ctx->pc = 0x14dc58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294950164), GPR_U32(ctx, 2));
    // 0x14dc5c: 0xad23c500  sw          $v1, -0x3B00($t1)
    ctx->pc = 0x14dc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294952192), GPR_U32(ctx, 3));
    // 0x14dc60: 0xae20c4f8  sw          $zero, -0x3B08($s1)
    ctx->pc = 0x14dc60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952184), GPR_U32(ctx, 0));
    // 0x14dc64: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x14dc64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_14dc68:
    // 0x14dc68: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x14dc68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14dc6c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x14dc6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14dc70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14dc70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14dc74: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x14dc74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14dc78: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x14dc78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14dc7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14dc7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14dc80: 0x3e00008  jr          $ra
    ctx->pc = 0x14DC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DC80u;
        // 0x14dc84: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DC88u;
}
