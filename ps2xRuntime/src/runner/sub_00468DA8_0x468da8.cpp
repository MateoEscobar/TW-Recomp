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

// Function: sub_00468DA8
// Address: 0x468da8 - 0x469008
void sub_00468DA8_0x468da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00468DA8_0x468da8");
#endif

    switch (ctx->pc) {
        case 0x468de8u: goto label_468de8;
        case 0x468e34u: goto label_468e34;
        case 0x468e58u: goto label_468e58;
        case 0x468e8cu: goto label_468e8c;
        case 0x468eb4u: goto label_468eb4;
        case 0x468ed0u: goto label_468ed0;
        case 0x468ee0u: goto label_468ee0;
        case 0x468f10u: goto label_468f10;
        case 0x468f24u: goto label_468f24;
        case 0x468f40u: goto label_468f40;
        case 0x468f5cu: goto label_468f5c;
        case 0x468f64u: goto label_468f64;
        case 0x468f84u: goto label_468f84;
        case 0x468fb4u: goto label_468fb4;
        case 0x468fd4u: goto label_468fd4;
        case 0x468fe0u: goto label_468fe0;
        default: break;
    }

    ctx->pc = 0x468da8u;

    // 0x468da8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x468da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x468dac: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x468dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x468db0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x468db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x468db4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x468db4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468db8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x468db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x468dbc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x468dbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468dc0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x468dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x468dc4: 0x27b40024  addiu       $s4, $sp, 0x24
    ctx->pc = 0x468dc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x468dc8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x468dc8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468dcc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x468dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x468dd0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x468dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x468dd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x468dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x468dd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x468dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x468ddc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x468ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x468de0: 0xc11eeae  jal         func_47BAB8
    ctx->pc = 0x468DE0u;
    SET_GPR_U32(ctx, 31, 0x468DE8u);
    ctx->pc = 0x468DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468DE0u;
    // 0x468de4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x468DE0u, 0x468DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468DE8u;
label_468de8:
    // 0x468de8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x468DE8u;
    {
        const bool branch_taken_0x468de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x468DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468DE8u;
        // 0x468dec: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468de8) {
            ctx->pc = 0x468E08u;
            goto label_468e08;
        }
    }
    ctx->pc = 0x468DF0u;
    // 0x468df0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x468df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x468df4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x468df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x468df8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x468df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x468dfc: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x468DFCu;
    {
        const bool branch_taken_0x468dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468DFCu;
        // 0x468e00: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x468dfc) {
            ctx->pc = 0x468FCCu;
            goto label_468fcc;
        }
    }
    ctx->pc = 0x468E04u;
    // 0x468e04: 0x0  nop
    ctx->pc = 0x468e04u;
    // NOP
label_468e08:
    // 0x468e08: 0x3c10fffc  lui         $s0, 0xFFFC
    ctx->pc = 0x468e08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65532 << 16));
    // 0x468e0c: 0x3610b000  ori         $s0, $s0, 0xB000
    ctx->pc = 0x468e0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)45056);
    // 0x468e10: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x468e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x468e14: 0x2c422003  sltiu       $v0, $v0, 0x2003
    ctx->pc = 0x468e14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x468e18: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x468E18u;
    {
        const bool branch_taken_0x468e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x468E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468E18u;
        // 0x468e1c: 0x700014a9  por         $v0, $zero, $zero (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468e18) {
            ctx->pc = 0x468FBCu;
            goto label_468fbc;
        }
    }
    ctx->pc = 0x468E20u;
    // 0x468e20: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x468e20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x468e24: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x468e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x468e28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x468e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468e2c: 0xc11fb56  jal         func_47ED58
    ctx->pc = 0x468E2Cu;
    SET_GPR_U32(ctx, 31, 0x468E34u);
    ctx->pc = 0x468E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468E2Cu;
    // 0x468e30: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x468E2Cu, 0x468E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468E34u;
label_468e34:
    // 0x468e34: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x468e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x468e38: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x468E38u;
    {
        const bool branch_taken_0x468e38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x468E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468E38u;
        // 0x468e3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468e38) {
            ctx->pc = 0x468E50u;
            goto label_468e50;
        }
    }
    ctx->pc = 0x468E40u;
    // 0x468e40: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x468e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x468e44: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x468e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x468e48: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x468E48u;
    {
        const bool branch_taken_0x468e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468E48u;
        // 0x468e4c: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x468e48) {
            ctx->pc = 0x468FCCu;
            goto label_468fcc;
        }
    }
    ctx->pc = 0x468E50u;
label_468e50:
    // 0x468e50: 0xc11a4b6  jal         func_4692D8
    ctx->pc = 0x468E50u;
    SET_GPR_U32(ctx, 31, 0x468E58u);
    ctx->pc = 0x4692D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4692D8u, 0x468E50u, 0x468E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468E58u;
label_468e58:
    // 0x468e58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x468e58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468e5c: 0x12200060  beqz        $s1, . + 4 + (0x60 << 2)
    ctx->pc = 0x468E5Cu;
    {
        const bool branch_taken_0x468e5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x468E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468E5Cu;
        // 0x468e60: 0x93a20018  lbu         $v0, 0x18($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468e5c) {
            ctx->pc = 0x468FE0u;
            goto label_468fe0;
        }
    }
    ctx->pc = 0x468E64u;
    // 0x468e64: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x468e64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x468e68: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x468e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x468e6c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x468E6Cu;
    {
        const bool branch_taken_0x468e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x468E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468E6Cu;
        // 0x468e70: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468e6c) {
            ctx->pc = 0x468E8Cu;
            goto label_468e8c;
        }
    }
    ctx->pc = 0x468E74u;
    // 0x468e74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x468e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468e78: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x468e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x468e7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x468e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x468e80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x468e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x468e84: 0xc11a830  jal         func_46A0C0
    ctx->pc = 0x468E84u;
    SET_GPR_U32(ctx, 31, 0x468E8Cu);
    ctx->pc = 0x468E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468E84u;
    // 0x468e88: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A0C0u, 0x468E84u, 0x468E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468E8Cu;
label_468e8c:
    // 0x468e8c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x468e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x468e90: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x468E90u;
    {
        const bool branch_taken_0x468e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x468E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468E90u;
        // 0x468e94: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468e90) {
            ctx->pc = 0x468EBCu;
            goto label_468ebc;
        }
    }
    ctx->pc = 0x468E98u;
    // 0x468e98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x468e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468e9c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x468e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x468ea0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x468ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468ea4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x468ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x468ea8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x468ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x468eac: 0xc11a984  jal         func_46A610
    ctx->pc = 0x468EACu;
    SET_GPR_U32(ctx, 31, 0x468EB4u);
    ctx->pc = 0x468EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468EACu;
    // 0x468eb0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A610u, 0x468EACu, 0x468EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468EB4u;
label_468eb4:
    // 0x468eb4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x468EB4u;
    {
        const bool branch_taken_0x468eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468EB4u;
        // 0x468eb8: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468eb4) {
            ctx->pc = 0x468F68u;
            goto label_468f68;
        }
    }
    ctx->pc = 0x468EBCu;
label_468ebc:
    // 0x468ebc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x468ebcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468ec0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x468ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468ec4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x468ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x468ec8: 0xc11eeae  jal         func_47BAB8
    ctx->pc = 0x468EC8u;
    SET_GPR_U32(ctx, 31, 0x468ED0u);
    ctx->pc = 0x468ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468EC8u;
    // 0x468ecc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x468EC8u, 0x468ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468ED0u;
label_468ed0:
    // 0x468ed0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x468ED0u;
    {
        const bool branch_taken_0x468ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x468ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468ED0u;
        // 0x468ed4: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468ed0) {
            ctx->pc = 0x468EF8u;
            goto label_468ef8;
        }
    }
    ctx->pc = 0x468ED8u;
    // 0x468ed8: 0xc11a8fc  jal         func_46A3F0
    ctx->pc = 0x468ED8u;
    SET_GPR_U32(ctx, 31, 0x468EE0u);
    ctx->pc = 0x468EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468ED8u;
    // 0x468edc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A3F0u, 0x468ED8u, 0x468EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468EE0u;
label_468ee0:
    // 0x468ee0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x468ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x468ee4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x468ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x468ee8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x468ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x468eec: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x468EECu;
    {
        const bool branch_taken_0x468eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468EECu;
        // 0x468ef0: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x468eec) {
            ctx->pc = 0x468FCCu;
            goto label_468fcc;
        }
    }
    ctx->pc = 0x468EF4u;
    // 0x468ef4: 0x0  nop
    ctx->pc = 0x468ef4u;
    // NOP
label_468ef8:
    // 0x468ef8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x468ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x468efc: 0x2c422003  sltiu       $v0, $v0, 0x2003
    ctx->pc = 0x468efcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x468f00: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x468F00u;
    {
        const bool branch_taken_0x468f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x468f00) {
            ctx->pc = 0x468F38u;
            goto label_468f38;
        }
    }
    ctx->pc = 0x468F08u;
    // 0x468f08: 0xc11ad0e  jal         func_46B438
    ctx->pc = 0x468F08u;
    SET_GPR_U32(ctx, 31, 0x468F10u);
    ctx->pc = 0x468F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468F08u;
    // 0x468f0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46B438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B438u, 0x468F08u, 0x468F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468F10u;
label_468f10:
    // 0x468f10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x468f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468f14: 0x5600000e  bnel        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x468F14u;
    {
        const bool branch_taken_0x468f14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x468f14) {
            ctx->pc = 0x468F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x468F14u;
            // 0x468f18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x468F50u;
            goto label_468f50;
        }
    }
    ctx->pc = 0x468F1Cu;
    // 0x468f1c: 0xc11a8fc  jal         func_46A3F0
    ctx->pc = 0x468F1Cu;
    SET_GPR_U32(ctx, 31, 0x468F24u);
    ctx->pc = 0x468F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468F1Cu;
    // 0x468f20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A3F0u, 0x468F1Cu, 0x468F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468F24u;
label_468f24:
    // 0x468f24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x468f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x468f28: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x468f28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x468f2c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x468f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x468f30: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x468F30u;
    {
        const bool branch_taken_0x468f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468F30u;
        // 0x468f34: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x468f30) {
            ctx->pc = 0x468FCCu;
            goto label_468fcc;
        }
    }
    ctx->pc = 0x468F38u;
label_468f38:
    // 0x468f38: 0xc11a8fc  jal         func_46A3F0
    ctx->pc = 0x468F38u;
    SET_GPR_U32(ctx, 31, 0x468F40u);
    ctx->pc = 0x468F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468F38u;
    // 0x468f3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A3F0u, 0x468F38u, 0x468F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468F40u;
label_468f40:
    // 0x468f40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x468f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x468f44: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x468f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x468f48: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x468F48u;
    {
        const bool branch_taken_0x468f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468F48u;
        // 0x468f4c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468f48) {
            ctx->pc = 0x468FC8u;
            goto label_468fc8;
        }
    }
    ctx->pc = 0x468F50u;
label_468f50:
    // 0x468f50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x468f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468f54: 0xc11a984  jal         func_46A610
    ctx->pc = 0x468F54u;
    SET_GPR_U32(ctx, 31, 0x468F5Cu);
    ctx->pc = 0x468F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468F54u;
    // 0x468f58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A610u, 0x468F54u, 0x468F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468F5Cu;
label_468f5c:
    // 0x468f5c: 0xc11b010  jal         func_46C040
    ctx->pc = 0x468F5Cu;
    SET_GPR_U32(ctx, 31, 0x468F64u);
    ctx->pc = 0x468F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468F5Cu;
    // 0x468f60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C040u, 0x468F5Cu, 0x468F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468F64u;
label_468f64:
    // 0x468f64: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x468f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_468f68:
    // 0x468f68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x468f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468f6c: 0x2450e6b0  addiu       $s0, $v0, -0x1950
    ctx->pc = 0x468f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960816));
    // 0x468f70: 0xaf8088c0  sw          $zero, -0x7740($gp)
    ctx->pc = 0x468f70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936768), GPR_U32(ctx, 0));
    // 0x468f74: 0xaf8088c4  sw          $zero, -0x773C($gp)
    ctx->pc = 0x468f74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936772), GPR_U32(ctx, 0));
    // 0x468f78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x468f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468f7c: 0xc11fd22  jal         func_47F488
    ctx->pc = 0x468F7Cu;
    SET_GPR_U32(ctx, 31, 0x468F84u);
    ctx->pc = 0x468F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468F7Cu;
    // 0x468f80: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F488u, 0x468F7Cu, 0x468F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468F84u;
label_468f84:
    // 0x468f84: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x468F84u;
    {
        const bool branch_taken_0x468f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x468F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468F84u;
        // 0x468f88: 0x8f8588c0  lw          $a1, -0x7740($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468f84) {
            ctx->pc = 0x468FA0u;
            goto label_468fa0;
        }
    }
    ctx->pc = 0x468F8Cu;
    // 0x468f8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x468f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x468f90: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x468f90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x468f94: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x468f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x468f98: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x468F98u;
    {
        const bool branch_taken_0x468f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468F98u;
        // 0x468f9c: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x468f98) {
            ctx->pc = 0x468FCCu;
            goto label_468fcc;
        }
    }
    ctx->pc = 0x468FA0u;
label_468fa0:
    // 0x468fa0: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x468FA0u;
    {
        const bool branch_taken_0x468fa0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x468FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468FA0u;
        // 0x468fa4: 0x8f8788c4  lw          $a3, -0x773C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468fa0) {
            ctx->pc = 0x468FB4u;
            goto label_468fb4;
        }
    }
    ctx->pc = 0x468FA8u;
    // 0x468fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x468fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468fac: 0xc11fe4a  jal         func_47F928
    ctx->pc = 0x468FACu;
    SET_GPR_U32(ctx, 31, 0x468FB4u);
    ctx->pc = 0x468FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468FACu;
    // 0x468fb0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F928u, 0x468FACu, 0x468FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468FB4u;
label_468fb4:
    // 0x468fb4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x468FB4u;
    {
        const bool branch_taken_0x468fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468FB4u;
        // 0x468fb8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468fb4) {
            ctx->pc = 0x468FE4u;
            goto label_468fe4;
        }
    }
    ctx->pc = 0x468FBCu;
label_468fbc:
    // 0x468fbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x468fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x468fc0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x468fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x468fc4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x468fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_468fc8:
    // 0x468fc8: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x468fc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
label_468fcc:
    // 0x468fcc: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x468FCCu;
    SET_GPR_U32(ctx, 31, 0x468FD4u);
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x468FCCu, 0x468FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468FD4u;
label_468fd4:
    // 0x468fd4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x468fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468fd8: 0xc11f024  jal         func_47C090
    ctx->pc = 0x468FD8u;
    SET_GPR_U32(ctx, 31, 0x468FE0u);
    ctx->pc = 0x468FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468FD8u;
    // 0x468fdc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x468FD8u, 0x468FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468FE0u;
label_468fe0:
    // 0x468fe0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x468fe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_468fe4:
    // 0x468fe4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x468fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x468fe8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x468fe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x468fec: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x468fecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x468ff0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x468ff0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x468ff4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x468ff4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x468ff8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x468ff8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x468ffc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x468ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x469000: 0x3e00008  jr          $ra
    ctx->pc = 0x469000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x469004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469000u;
        // 0x469004: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469008u;
}
