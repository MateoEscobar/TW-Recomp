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

// Function: sub_0048DB20
// Address: 0x48db20 - 0x48dd00
void sub_0048DB20_0x48db20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048DB20_0x48db20");
#endif

    switch (ctx->pc) {
        case 0x48db48u: goto label_48db48;
        case 0x48db7cu: goto label_48db7c;
        case 0x48dc10u: goto label_48dc10;
        case 0x48dc38u: goto label_48dc38;
        case 0x48dc5cu: goto label_48dc5c;
        case 0x48dca0u: goto label_48dca0;
        case 0x48dcdcu: goto label_48dcdc;
        default: break;
    }

    ctx->pc = 0x48db20u;

    // 0x48db20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x48db20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x48db24: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x48db24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x48db28: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x48db28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x48db2c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x48db2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x48db30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48db30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x48db34: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x48db34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x48db38: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x48db38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x48db3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48db3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48db40: 0xc123024  jal         func_48C090
    ctx->pc = 0x48DB40u;
    SET_GPR_U32(ctx, 31, 0x48DB48u);
    ctx->pc = 0x48C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C090u, 0x48DB40u, 0x48DB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DB48u;
label_48db48:
    // 0x48db48: 0x8f8289b8  lw          $v0, -0x7648($gp)
    ctx->pc = 0x48db48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937016)));
    // 0x48db4c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x48DB4Cu;
    {
        const bool branch_taken_0x48db4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48DB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DB4Cu;
        // 0x48db50: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48db4c) {
            ctx->pc = 0x48DBECu;
            goto label_48dbec;
        }
    }
    ctx->pc = 0x48DB54u;
    // 0x48db54: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x48db54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x48db58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x48db58u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x48db5c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x48db5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x48db60: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x48DB60u;
    {
        const bool branch_taken_0x48db60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DB60u;
        // 0x48db64: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48db60) {
            ctx->pc = 0x48DB98u;
            goto label_48db98;
        }
    }
    ctx->pc = 0x48DB68u;
    // 0x48db68: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x48db68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x48db6c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x48db6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x48db70: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x48db70u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x48db74: 0xf  sync
    ctx->pc = 0x48db74u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48db78: 0x40f  sync.p
    ctx->pc = 0x48db78u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_48db7c:
    // 0x48db7c: 0x0  nop
    ctx->pc = 0x48db7cu;
    // NOP
    // 0x48db80: 0x0  nop
    ctx->pc = 0x48db80u;
    // NOP
    // 0x48db84: 0x0  nop
    ctx->pc = 0x48db84u;
    // NOP
    // 0x48db88: 0x0  nop
    ctx->pc = 0x48db88u;
    // NOP
    // 0x48db8c: 0x0  nop
    ctx->pc = 0x48db8cu;
    // NOP
    // 0x48db90: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x48DB90u;
    {
        const bool branch_taken_0x48db90 = (false);
        if (branch_taken_0x48db90) {
            ctx->pc = 0x48DB7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48db7c;
        }
    }
    ctx->pc = 0x48DB98u;
label_48db98:
    // 0x48db98: 0x8f8789b4  lw          $a3, -0x764C($gp)
    ctx->pc = 0x48db98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937012)));
    // 0x48db9c: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x48DB9Cu;
    {
        const bool branch_taken_0x48db9c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x48DBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DB9Cu;
        // 0x48dba0: 0x8f8289bc  lw          $v0, -0x7644($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48db9c) {
            ctx->pc = 0x48DBCCu;
            goto label_48dbcc;
        }
    }
    ctx->pc = 0x48DBA4u;
    // 0x48dba4: 0x24041121  addiu       $a0, $zero, 0x1121
    ctx->pc = 0x48dba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4385));
    // 0x48dba8: 0x8f8589b0  lw          $a1, -0x7650($gp)
    ctx->pc = 0x48dba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937008)));
    // 0x48dbac: 0x24060122  addiu       $a2, $zero, 0x122
    ctx->pc = 0x48dbacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x48dbb0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x48dbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x48dbb4: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x48dbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x48dbb8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x48dbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x48dbbc: 0xaf8389bc  sw          $v1, -0x7644($gp)
    ctx->pc = 0x48dbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937020), GPR_U32(ctx, 3));
    // 0x48dbc0: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x48dbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x48dbc4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x48DBC4u;
    {
        const bool branch_taken_0x48dbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48DBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DBC4u;
        // 0x48dbc8: 0xac670004  sw          $a3, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48dbc4) {
            ctx->pc = 0x48DBDCu;
            goto label_48dbdc;
        }
    }
    ctx->pc = 0x48DBCCu;
label_48dbcc:
    // 0x48dbcc: 0x8f8389b8  lw          $v1, -0x7648($gp)
    ctx->pc = 0x48dbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937016)));
    // 0x48dbd0: 0x8f8489b0  lw          $a0, -0x7650($gp)
    ctx->pc = 0x48dbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937008)));
    // 0x48dbd4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x48dbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x48dbd8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x48dbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_48dbdc:
    // 0x48dbdc: 0xaf8089b0  sw          $zero, -0x7650($gp)
    ctx->pc = 0x48dbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937008), GPR_U32(ctx, 0));
    // 0x48dbe0: 0xaf8089b4  sw          $zero, -0x764C($gp)
    ctx->pc = 0x48dbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937012), GPR_U32(ctx, 0));
    // 0x48dbe4: 0xaf8089b8  sw          $zero, -0x7648($gp)
    ctx->pc = 0x48dbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937016), GPR_U32(ctx, 0));
    // 0x48dbe8: 0xaf8089bc  sw          $zero, -0x7644($gp)
    ctx->pc = 0x48dbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937020), GPR_U32(ctx, 0));
label_48dbec:
    // 0x48dbec: 0x97848a10  lhu         $a0, -0x75F0($gp)
    ctx->pc = 0x48dbecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x48dbf0: 0x279589c0  addiu       $s5, $gp, -0x7640
    ctx->pc = 0x48dbf0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937024));
    // 0x48dbf4: 0x97948a12  lhu         $s4, -0x75EE($gp)
    ctx->pc = 0x48dbf4u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937106)));
    // 0x48dbf8: 0x10940021  beq         $a0, $s4, . + 4 + (0x21 << 2)
    ctx->pc = 0x48DBF8u;
    {
        const bool branch_taken_0x48dbf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x48DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DBF8u;
        // 0x48dbfc: 0x938289cc  lbu         $v0, -0x7634($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48dbf8) {
            ctx->pc = 0x48DC80u;
            goto label_48dc80;
        }
    }
    ctx->pc = 0x48DC00u;
    // 0x48dc00: 0xa7808a10  sh          $zero, -0x75F0($gp)
    ctx->pc = 0x48dc00u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937104), (uint16_t)GPR_U32(ctx, 0));
    // 0x48dc04: 0xa7808a12  sh          $zero, -0x75EE($gp)
    ctx->pc = 0x48dc04u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937106), (uint16_t)GPR_U32(ctx, 0));
    // 0x48dc08: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x48dc08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x48dc0c: 0x0  nop
    ctx->pc = 0x48dc0cu;
    // NOP
label_48dc10:
    // 0x48dc10: 0x8f828a0c  lw          $v0, -0x75F4($gp)
    ctx->pc = 0x48dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937100)));
    // 0x48dc14: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x48dc14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48dc18: 0x24930001  addiu       $s3, $a0, 0x1
    ctx->pc = 0x48dc18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x48dc1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48dc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48dc20: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x48dc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48dc24: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x48dc24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x48dc28: 0x1a00000e  blez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x48DC28u;
    {
        const bool branch_taken_0x48dc28 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x48DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DC28u;
        // 0x48dc2c: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48dc28) {
            ctx->pc = 0x48DC64u;
            goto label_48dc64;
        }
    }
    ctx->pc = 0x48DC30u;
    // 0x48dc30: 0x3411ffff  ori         $s1, $zero, 0xFFFF
    ctx->pc = 0x48dc30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x48dc34: 0x8f828a0c  lw          $v0, -0x75F4($gp)
    ctx->pc = 0x48dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937100)));
label_48dc38:
    // 0x48dc38: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x48dc38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x48dc3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x48dc3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48dc40: 0x203280a  movz        $a1, $s0, $v1
    ctx->pc = 0x48dc40u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
    // 0x48dc44: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x48dc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x48dc48: 0x52b00  sll         $a1, $a1, 12
    ctx->pc = 0x48dc48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 12));
    // 0x48dc4c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48dc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48dc50: 0x34a50042  ori         $a1, $a1, 0x42
    ctx->pc = 0x48dc50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)66);
    // 0x48dc54: 0xc1231de  jal         func_48C778
    ctx->pc = 0x48DC54u;
    SET_GPR_U32(ctx, 31, 0x48DC5Cu);
    ctx->pc = 0x48DC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DC54u;
    // 0x48dc58: 0x2118023  subu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C778u, 0x48DC54u, 0x48DC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DC5Cu;
label_48dc5c:
    // 0x48dc5c: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x48DC5Cu;
    {
        const bool branch_taken_0x48dc5c = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x48DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DC5Cu;
        // 0x48dc60: 0x8f828a0c  lw          $v0, -0x75F4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48dc5c) {
            ctx->pc = 0x48DC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48dc38;
        }
    }
    ctx->pc = 0x48DC64u;
label_48dc64:
    // 0x48dc64: 0x97828682  lhu         $v0, -0x797E($gp)
    ctx->pc = 0x48dc64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936194)));
    // 0x48dc68: 0x3264ffff  andi        $a0, $s3, 0xFFFF
    ctx->pc = 0x48dc68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x48dc6c: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x48dc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x48dc70: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x48dc70u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x48dc74: 0x1494ffe6  bne         $a0, $s4, . + 4 + (-0x1A << 2)
    ctx->pc = 0x48DC74u;
    {
        const bool branch_taken_0x48dc74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        ctx->pc = 0x48DC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DC74u;
        // 0x48dc78: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48dc74) {
            ctx->pc = 0x48DC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48dc10;
        }
    }
    ctx->pc = 0x48DC7Cu;
    // 0x48dc7c: 0x938289cc  lbu         $v0, -0x7634($gp)
    ctx->pc = 0x48dc7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937036)));
label_48dc80:
    // 0x48dc80: 0x8f8489e4  lw          $a0, -0x761C($gp)
    ctx->pc = 0x48dc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937060)));
    // 0x48dc84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x48dc88: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x48dc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x48dc8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x48dc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48dc90: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48DC90u;
    {
        const bool branch_taken_0x48dc90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x48dc90) {
            ctx->pc = 0x48DCA0u;
            goto label_48dca0;
        }
    }
    ctx->pc = 0x48DC98u;
    // 0x48dc98: 0xc123142  jal         func_48C508
    ctx->pc = 0x48DC98u;
    SET_GPR_U32(ctx, 31, 0x48DCA0u);
    ctx->pc = 0x48C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C508u, 0x48DC98u, 0x48DCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DCA0u;
label_48dca0:
    // 0x48dca0: 0x938289f8  lbu         $v0, -0x7608($gp)
    ctx->pc = 0x48dca0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937080)));
    // 0x48dca4: 0x0  nop
    ctx->pc = 0x48dca4u;
    // NOP
    // 0x48dca8: 0x0  nop
    ctx->pc = 0x48dca8u;
    // NOP
    // 0x48dcac: 0x0  nop
    ctx->pc = 0x48dcacu;
    // NOP
    // 0x48dcb0: 0x0  nop
    ctx->pc = 0x48dcb0u;
    // NOP
    // 0x48dcb4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x48DCB4u;
    {
        const bool branch_taken_0x48dcb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48dcb4) {
            ctx->pc = 0x48DCA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48dca0;
        }
    }
    ctx->pc = 0x48DCBCu;
    // 0x48dcbc: 0x9382899b  lbu         $v0, -0x7665($gp)
    ctx->pc = 0x48dcbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936987)));
    // 0x48dcc0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x48DCC0u;
    {
        const bool branch_taken_0x48dcc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48dcc0) {
            ctx->pc = 0x48DCA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48dca0;
        }
    }
    ctx->pc = 0x48DCC8u;
    // 0x48dcc8: 0x938289f8  lbu         $v0, -0x7608($gp)
    ctx->pc = 0x48dcc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937080)));
    // 0x48dccc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x48DCCCu;
    {
        const bool branch_taken_0x48dccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48dccc) {
            ctx->pc = 0x48DCA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48dca0;
        }
    }
    ctx->pc = 0x48DCD4u;
    // 0x48dcd4: 0xc12384c  jal         func_48E130
    ctx->pc = 0x48DCD4u;
    SET_GPR_U32(ctx, 31, 0x48DCDCu);
    ctx->pc = 0x48E130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E130u, 0x48DCD4u, 0x48DCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DCDCu;
label_48dcdc:
    // 0x48dcdc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x48dcdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48dce0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x48dce0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48dce4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x48dce4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48dce8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48dce8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48dcec: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x48dcecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48dcf0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x48dcf0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48dcf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48dcf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48dcf8: 0x3e00008  jr          $ra
    ctx->pc = 0x48DCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48DCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DCF8u;
        // 0x48dcfc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48DCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48DD00u;
}
