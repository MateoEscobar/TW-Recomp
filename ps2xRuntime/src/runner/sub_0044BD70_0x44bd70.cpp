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

// Function: sub_0044BD70
// Address: 0x44bd70 - 0x44c020
void sub_0044BD70_0x44bd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044BD70_0x44bd70");
#endif

    switch (ctx->pc) {
        case 0x44bd94u: goto label_44bd94;
        case 0x44bdc4u: goto label_44bdc4;
        case 0x44bdd0u: goto label_44bdd0;
        case 0x44bdf4u: goto label_44bdf4;
        case 0x44be04u: goto label_44be04;
        case 0x44be28u: goto label_44be28;
        case 0x44be4cu: goto label_44be4c;
        case 0x44be58u: goto label_44be58;
        case 0x44be6cu: goto label_44be6c;
        case 0x44be74u: goto label_44be74;
        case 0x44beb8u: goto label_44beb8;
        case 0x44bed4u: goto label_44bed4;
        case 0x44bee8u: goto label_44bee8;
        case 0x44bef4u: goto label_44bef4;
        case 0x44bf04u: goto label_44bf04;
        case 0x44bf2cu: goto label_44bf2c;
        case 0x44bf50u: goto label_44bf50;
        case 0x44bf58u: goto label_44bf58;
        case 0x44bf6cu: goto label_44bf6c;
        case 0x44bf74u: goto label_44bf74;
        case 0x44bfbcu: goto label_44bfbc;
        case 0x44bfe0u: goto label_44bfe0;
        case 0x44bff4u: goto label_44bff4;
        case 0x44bffcu: goto label_44bffc;
        case 0x44c004u: goto label_44c004;
        default: break;
    }

    ctx->pc = 0x44bd70u;

    // 0x44bd70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x44bd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x44bd74: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x44bd74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x44bd78: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x44bd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x44bd7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44bd7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bd80: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x44bd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x44bd84: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x44bd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x44bd88: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x44bd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x44bd8c: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44BD8Cu;
    SET_GPR_U32(ctx, 31, 0x44BD94u);
    ctx->pc = 0x44BD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BD8Cu;
    // 0x44bd90: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44BD8Cu, 0x44BD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BD94u;
label_44bd94:
    // 0x44bd94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x44bd94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bd98: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x44bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x44bd9c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x44bd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x44bda0: 0x31d02  srl         $v1, $v1, 20
    ctx->pc = 0x44bda0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 20));
    // 0x44bda4: 0xae230134  sw          $v1, 0x134($s1)
    ctx->pc = 0x44bda4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 3));
    // 0x44bda8: 0x28440af1  slti        $a0, $v0, 0xAF1
    ctx->pc = 0x44bda8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2801) ? 1 : 0);
    // 0x44bdac: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x44BDACu;
    {
        const bool branch_taken_0x44bdac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x44BDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BDACu;
        // 0x44bdb0: 0xae220138  sw          $v0, 0x138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bdac) {
            ctx->pc = 0x44BDC4u;
            goto label_44bdc4;
        }
    }
    ctx->pc = 0x44BDB4u;
    // 0x44bdb4: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x44bdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x44bdb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44bdb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bdbc: 0xc111f76  jal         func_447DD8
    ctx->pc = 0x44BDBCu;
    SET_GPR_U32(ctx, 31, 0x44BDC4u);
    ctx->pc = 0x44BDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BDBCu;
    // 0x44bdc0: 0x24a5e368  addiu       $a1, $a1, -0x1C98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447DD8u, 0x44BDBCu, 0x44BDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BDC4u;
label_44bdc4:
    // 0x44bdc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44bdc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bdc8: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44BDC8u;
    SET_GPR_U32(ctx, 31, 0x44BDD0u);
    ctx->pc = 0x44BDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BDC8u;
    // 0x44bdcc: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44BDC8u, 0x44BDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BDD0u;
label_44bdd0:
    // 0x44bdd0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x44bdd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bdd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44bdd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bdd8: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x44bdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x44bddc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x44bddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44bde0: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x44bde0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x44bde4: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x44bde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x44bde8: 0xae230144  sw          $v1, 0x144($s1)
    ctx->pc = 0x44bde8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 3));
    // 0x44bdec: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44BDECu;
    SET_GPR_U32(ctx, 31, 0x44BDF4u);
    ctx->pc = 0x44BDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BDECu;
    // 0x44bdf0: 0xae220148  sw          $v0, 0x148($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44BDECu, 0x44BDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BDF4u;
label_44bdf4:
    // 0x44bdf4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x44BDF4u;
    {
        const bool branch_taken_0x44bdf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BDF4u;
        // 0x44bdf8: 0xae220850  sw          $v0, 0x850($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bdf4) {
            ctx->pc = 0x44BE30u;
            goto label_44be30;
        }
    }
    ctx->pc = 0x44BDFCu;
    // 0x44bdfc: 0xc11320a  jal         func_44C828
    ctx->pc = 0x44BDFCu;
    SET_GPR_U32(ctx, 31, 0x44BE04u);
    ctx->pc = 0x44BE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BDFCu;
    // 0x44be00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C828u, 0x44BDFCu, 0x44BE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BE04u;
label_44be04:
    // 0x44be04: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x44be04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x44be08: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x44be08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x44be0c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x44be0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x44be10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x44be10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44be14: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x44be14u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x44be18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44be18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44be1c: 0xae23082c  sw          $v1, 0x82C($s1)
    ctx->pc = 0x44be1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 3));
    // 0x44be20: 0xc11320a  jal         func_44C828
    ctx->pc = 0x44BE20u;
    SET_GPR_U32(ctx, 31, 0x44BE28u);
    ctx->pc = 0x44BE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BE20u;
    // 0x44be24: 0xae250828  sw          $a1, 0x828($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C828u, 0x44BE20u, 0x44BE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BE28u;
label_44be28:
    // 0x44be28: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x44BE28u;
    {
        const bool branch_taken_0x44be28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BE28u;
        // 0x44be2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44be28) {
            ctx->pc = 0x44BEECu;
            goto label_44beec;
        }
    }
    ctx->pc = 0x44BE30u;
label_44be30:
    // 0x44be30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x44be30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x44be34: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x44be34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x44be38: 0x3c100052  lui         $s0, 0x52
    ctx->pc = 0x44be38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)82 << 16));
    // 0x44be3c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x44be3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x44be40: 0x2610a680  addiu       $s0, $s0, -0x5980
    ctx->pc = 0x44be40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944384));
    // 0x44be44: 0xc111982  jal         func_446608
    ctx->pc = 0x44BE44u;
    SET_GPR_U32(ctx, 31, 0x44BE4Cu);
    ctx->pc = 0x44BE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BE44u;
    // 0x44be48: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446608u, 0x44BE44u, 0x44BE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BE4Cu;
label_44be4c:
    // 0x44be4c: 0x3c125000  lui         $s2, 0x5000
    ctx->pc = 0x44be4cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)20480 << 16));
    // 0x44be50: 0xc11320a  jal         func_44C828
    ctx->pc = 0x44BE50u;
    SET_GPR_U32(ctx, 31, 0x44BE58u);
    ctx->pc = 0x44BE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BE50u;
    // 0x44be54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C828u, 0x44BE50u, 0x44BE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BE58u;
label_44be58:
    // 0x44be58: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x44be58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x44be5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44be5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44be60: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x44be60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x44be64: 0xc11320a  jal         func_44C828
    ctx->pc = 0x44BE64u;
    SET_GPR_U32(ctx, 31, 0x44BE6Cu);
    ctx->pc = 0x44BE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BE64u;
    // 0x44be68: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C828u, 0x44BE64u, 0x44BE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BE6Cu;
label_44be6c:
    // 0x44be6c: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x44BE6Cu;
    SET_GPR_U32(ctx, 31, 0x44BE74u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x44BE6Cu, 0x44BE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BE74u;
label_44be74:
    // 0x44be74: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x44be74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x44be78: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x44be78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x44be7c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x44be7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x44be80: 0x3484b410  ori         $a0, $a0, 0xB410
    ctx->pc = 0x44be80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46096);
    // 0x44be84: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x44be84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x44be88: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x44be88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x44be8c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x44be8cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x44be90: 0x34a5b420  ori         $a1, $a1, 0xB420
    ctx->pc = 0x44be90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46112);
    // 0x44be94: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x44be94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x44be98: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x44be98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x44be9c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x44be9cu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x44bea0: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x44bea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x44bea4: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x44bea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x44bea8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x44BEA8u;
    {
        const bool branch_taken_0x44bea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BEA8u;
        // 0x44beac: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bea8) {
            ctx->pc = 0x44BEB8u;
            goto label_44beb8;
        }
    }
    ctx->pc = 0x44BEB0u;
    // 0x44beb0: 0xc110cc4  jal         func_443310
    ctx->pc = 0x44BEB0u;
    SET_GPR_U32(ctx, 31, 0x44BEB8u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x44BEB0u, 0x44BEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BEB8u;
label_44beb8:
    // 0x44beb8: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x44beb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x44bebc: 0xac322000  sw          $s2, 0x2000($at)
    ctx->pc = 0x44bebcu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 18)); // MMIO: 0x10002000
    // 0x44bec0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44bec4: 0xae32082c  sw          $s2, 0x82C($s1)
    ctx->pc = 0x44bec4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 18));
    // 0x44bec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44bec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44becc: 0xc11320a  jal         func_44C828
    ctx->pc = 0x44BECCu;
    SET_GPR_U32(ctx, 31, 0x44BED4u);
    ctx->pc = 0x44BED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BECCu;
    // 0x44bed0: 0xae220828  sw          $v0, 0x828($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C828u, 0x44BECCu, 0x44BED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BED4u;
label_44bed4:
    // 0x44bed4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x44bed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x44bed8: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x44bed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x44bedc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x44bedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x44bee0: 0xc111982  jal         func_446608
    ctx->pc = 0x44BEE0u;
    SET_GPR_U32(ctx, 31, 0x44BEE8u);
    ctx->pc = 0x44BEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BEE0u;
    // 0x44bee4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446608u, 0x44BEE0u, 0x44BEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BEE8u;
label_44bee8:
    // 0x44bee8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44bee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44beec:
    // 0x44beec: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44BEECu;
    SET_GPR_U32(ctx, 31, 0x44BEF4u);
    ctx->pc = 0x44BEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BEECu;
    // 0x44bef0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44BEECu, 0x44BEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BEF4u;
label_44bef4:
    // 0x44bef4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x44BEF4u;
    {
        const bool branch_taken_0x44bef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BEF4u;
        // 0x44bef8: 0xae220854  sw          $v0, 0x854($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bef4) {
            ctx->pc = 0x44BF34u;
            goto label_44bf34;
        }
    }
    ctx->pc = 0x44BEFCu;
    // 0x44befc: 0xc11320a  jal         func_44C828
    ctx->pc = 0x44BEFCu;
    SET_GPR_U32(ctx, 31, 0x44BF04u);
    ctx->pc = 0x44BF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BEFCu;
    // 0x44bf00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C828u, 0x44BEFCu, 0x44BF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BF04u;
label_44bf04:
    // 0x44bf04: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x44bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x44bf08: 0x3c035800  lui         $v1, 0x5800
    ctx->pc = 0x44bf08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22528 << 16));
    // 0x44bf0c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x44bf0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x44bf10: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x44bf10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x44bf14: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x44bf14u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x44bf18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x44bf18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44bf1c: 0xae24082c  sw          $a0, 0x82C($s1)
    ctx->pc = 0x44bf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 4));
    // 0x44bf20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44bf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bf24: 0xc11320a  jal         func_44C828
    ctx->pc = 0x44BF24u;
    SET_GPR_U32(ctx, 31, 0x44BF2Cu);
    ctx->pc = 0x44BF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BF24u;
    // 0x44bf28: 0xae250828  sw          $a1, 0x828($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C828u, 0x44BF24u, 0x44BF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BF2Cu;
label_44bf2c:
    // 0x44bf2c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x44BF2Cu;
    {
        const bool branch_taken_0x44bf2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44bf2c) {
            ctx->pc = 0x44BFF4u;
            goto label_44bff4;
        }
    }
    ctx->pc = 0x44BF34u;
label_44bf34:
    // 0x44bf34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x44bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x44bf38: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x44bf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x44bf3c: 0x3c100052  lui         $s0, 0x52
    ctx->pc = 0x44bf3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)82 << 16));
    // 0x44bf40: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x44bf40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x44bf44: 0x2610a6c0  addiu       $s0, $s0, -0x5940
    ctx->pc = 0x44bf44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944448));
    // 0x44bf48: 0xc111982  jal         func_446608
    ctx->pc = 0x44BF48u;
    SET_GPR_U32(ctx, 31, 0x44BF50u);
    ctx->pc = 0x44BF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BF48u;
    // 0x44bf4c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446608u, 0x44BF48u, 0x44BF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BF50u;
label_44bf50:
    // 0x44bf50: 0xc11320a  jal         func_44C828
    ctx->pc = 0x44BF50u;
    SET_GPR_U32(ctx, 31, 0x44BF58u);
    ctx->pc = 0x44BF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BF50u;
    // 0x44bf54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C828u, 0x44BF50u, 0x44BF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BF58u;
label_44bf58:
    // 0x44bf58: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x44bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x44bf5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44bf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bf60: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x44bf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x44bf64: 0xc11320a  jal         func_44C828
    ctx->pc = 0x44BF64u;
    SET_GPR_U32(ctx, 31, 0x44BF6Cu);
    ctx->pc = 0x44BF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BF64u;
    // 0x44bf68: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C828u, 0x44BF64u, 0x44BF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BF6Cu;
label_44bf6c:
    // 0x44bf6c: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x44BF6Cu;
    SET_GPR_U32(ctx, 31, 0x44BF74u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x44BF6Cu, 0x44BF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BF74u;
label_44bf74:
    // 0x44bf74: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x44bf74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x44bf78: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x44bf78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x44bf7c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x44bf7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x44bf80: 0x3484b410  ori         $a0, $a0, 0xB410
    ctx->pc = 0x44bf80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46096);
    // 0x44bf84: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x44bf84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x44bf88: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x44bf88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x44bf8c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x44bf8cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x44bf90: 0x34a5b420  ori         $a1, $a1, 0xB420
    ctx->pc = 0x44bf90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46112);
    // 0x44bf94: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x44bf94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x44bf98: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x44bf98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x44bf9c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x44bf9cu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x44bfa0: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x44bfa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x44bfa4: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x44bfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x44bfa8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x44bfa8u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x44bfac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x44BFACu;
    {
        const bool branch_taken_0x44bfac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BFACu;
        // 0x44bfb0: 0x3c025800  lui         $v0, 0x5800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22528 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bfac) {
            ctx->pc = 0x44BFC0u;
            goto label_44bfc0;
        }
    }
    ctx->pc = 0x44BFB4u;
    // 0x44bfb4: 0xc110cc4  jal         func_443310
    ctx->pc = 0x44BFB4u;
    SET_GPR_U32(ctx, 31, 0x44BFBCu);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x44BFB4u, 0x44BFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BFBCu;
label_44bfbc:
    // 0x44bfbc: 0x3c025800  lui         $v0, 0x5800
    ctx->pc = 0x44bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22528 << 16));
label_44bfc0:
    // 0x44bfc0: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x44bfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x44bfc4: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x44bfc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x44bfc8: 0xac222000  sw          $v0, 0x2000($at)
    ctx->pc = 0x44bfc8u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 2)); // MMIO: 0x10002000
    // 0x44bfcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44bfccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bfd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44bfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44bfd4: 0xae23082c  sw          $v1, 0x82C($s1)
    ctx->pc = 0x44bfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 3));
    // 0x44bfd8: 0xc11320a  jal         func_44C828
    ctx->pc = 0x44BFD8u;
    SET_GPR_U32(ctx, 31, 0x44BFE0u);
    ctx->pc = 0x44BFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BFD8u;
    // 0x44bfdc: 0xae220828  sw          $v0, 0x828($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C828u, 0x44BFD8u, 0x44BFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BFE0u;
label_44bfe0:
    // 0x44bfe0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x44bfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x44bfe4: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x44bfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x44bfe8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x44bfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x44bfec: 0xc111982  jal         func_446608
    ctx->pc = 0x44BFECu;
    SET_GPR_U32(ctx, 31, 0x44BFF4u);
    ctx->pc = 0x44BFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BFECu;
    // 0x44bff0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446608u, 0x44BFECu, 0x44BFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BFF4u;
label_44bff4:
    // 0x44bff4: 0xc113196  jal         func_44C658
    ctx->pc = 0x44BFF4u;
    SET_GPR_U32(ctx, 31, 0x44BFFCu);
    ctx->pc = 0x44BFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BFF4u;
    // 0x44bff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C658u, 0x44BFF4u, 0x44BFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BFFCu;
label_44bffc:
    // 0x44bffc: 0xc112e96  jal         func_44BA58
    ctx->pc = 0x44BFFCu;
    SET_GPR_U32(ctx, 31, 0x44C004u);
    ctx->pc = 0x44C000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BFFCu;
    // 0x44c000: 0x8e240868  lw          $a0, 0x868($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44BA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44BA58u, 0x44BFFCu, 0x44C004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C004u;
label_44c004:
    // 0x44c004: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x44c004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x44c008: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x44c008u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x44c00c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x44c00cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44c010: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x44c010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44c014: 0x3e00008  jr          $ra
    ctx->pc = 0x44C014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44C018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C014u;
        // 0x44c018: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44C014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44C01Cu;
    // 0x44c01c: 0x0  nop
    ctx->pc = 0x44c01cu;
    // NOP
    ctx->pc = 0x44c020u;
}
