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

// Function: sub_00480ED8
// Address: 0x480ed8 - 0x4810f8
void sub_00480ED8_0x480ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00480ED8_0x480ed8");
#endif

    switch (ctx->pc) {
        case 0x480f08u: goto label_480f08;
        case 0x480f38u: goto label_480f38;
        case 0x480f74u: goto label_480f74;
        case 0x480f7cu: goto label_480f7c;
        case 0x480f98u: goto label_480f98;
        case 0x480facu: goto label_480fac;
        case 0x480fbcu: goto label_480fbc;
        case 0x480fccu: goto label_480fcc;
        case 0x480fd4u: goto label_480fd4;
        case 0x480fe0u: goto label_480fe0;
        case 0x480ff0u: goto label_480ff0;
        case 0x480ff8u: goto label_480ff8;
        case 0x48100cu: goto label_48100c;
        case 0x48101cu: goto label_48101c;
        case 0x481024u: goto label_481024;
        case 0x481034u: goto label_481034;
        case 0x481050u: goto label_481050;
        case 0x481058u: goto label_481058;
        case 0x481060u: goto label_481060;
        case 0x481084u: goto label_481084;
        case 0x48108cu: goto label_48108c;
        case 0x4810a0u: goto label_4810a0;
        case 0x4810c0u: goto label_4810c0;
        case 0x4810ccu: goto label_4810cc;
        default: break;
    }

    ctx->pc = 0x480ed8u;

    // 0x480ed8: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x480ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x480edc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x480edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x480ee0: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x480ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x480ee4: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x480ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x480ee8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x480ee8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480eec: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x480eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x480ef0: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x480ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x480ef4: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x480ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x480ef8: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x480ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
    // 0x480efc: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x480efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x480f00: 0xc11eeae  jal         func_47BAB8
    ctx->pc = 0x480F00u;
    SET_GPR_U32(ctx, 31, 0x480F08u);
    ctx->pc = 0x480F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480F00u;
    // 0x480f04: 0x27a70114  addiu       $a3, $sp, 0x114 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x480F00u, 0x480F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480F08u;
label_480f08:
    // 0x480f08: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x480F08u;
    {
        const bool branch_taken_0x480f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x480F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480F08u;
        // 0x480f0c: 0x8fa30114  lw          $v1, 0x114($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480f08) {
            ctx->pc = 0x4810D0u;
            goto label_4810d0;
        }
    }
    ctx->pc = 0x480F10u;
    // 0x480f10: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x480f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x480f14: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x480f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x480f18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x480f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x480f1c: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x480f1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x480f20: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x480F20u;
    {
        const bool branch_taken_0x480f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x480F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480F20u;
        // 0x480f24: 0x8fa60110  lw          $a2, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480f20) {
            ctx->pc = 0x4810ACu;
            goto label_4810ac;
        }
    }
    ctx->pc = 0x480F28u;
    // 0x480f28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x480f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480f2c: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x480f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    // 0x480f30: 0xc11fb56  jal         func_47ED58
    ctx->pc = 0x480F30u;
    SET_GPR_U32(ctx, 31, 0x480F38u);
    ctx->pc = 0x480F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480F30u;
    // 0x480f34: 0x27a50118  addiu       $a1, $sp, 0x118 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x480F30u, 0x480F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480F38u;
label_480f38:
    // 0x480f38: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x480f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x480f3c: 0x14430065  bne         $v0, $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x480F3Cu;
    {
        const bool branch_taken_0x480f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x480F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480F3Cu;
        // 0x480f40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480f3c) {
            ctx->pc = 0x4810D4u;
            goto label_4810d4;
        }
    }
    ctx->pc = 0x480F44u;
    // 0x480f44: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x480f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x480f48: 0x41a02  srl         $v1, $a0, 8
    ctx->pc = 0x480f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x480f4c: 0x41302  srl         $v0, $a0, 12
    ctx->pc = 0x480f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x480f50: 0x309400ff  andi        $s4, $a0, 0xFF
    ctx->pc = 0x480f50u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x480f54: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x480f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x480f58: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x480F58u;
    {
        const bool branch_taken_0x480f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x480F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480F58u;
        // 0x480f5c: 0x3063000f  andi        $v1, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x480f58) {
            ctx->pc = 0x480F6Cu;
            goto label_480f6c;
        }
    }
    ctx->pc = 0x480F60u;
    // 0x480f60: 0x31300  sll         $v0, $v1, 12
    ctx->pc = 0x480f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x480f64: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x480f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x480f68: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x480f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
label_480f6c:
    // 0x480f6c: 0xc12224e  jal         func_488938
    ctx->pc = 0x480F6Cu;
    SET_GPR_U32(ctx, 31, 0x480F74u);
    ctx->pc = 0x480F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480F6Cu;
    // 0x480f70: 0x97b0011a  lhu         $s0, 0x11A($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 282)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488938u, 0x480F6Cu, 0x480F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480F74u;
label_480f74:
    // 0x480f74: 0xc12225c  jal         func_488970
    ctx->pc = 0x480F74u;
    SET_GPR_U32(ctx, 31, 0x480F7Cu);
    ctx->pc = 0x480F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480F74u;
    // 0x480f78: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488970u, 0x480F74u, 0x480F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480F7Cu;
label_480f7c:
    // 0x480f7c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x480f7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480f80: 0x2682fffd  addiu       $v0, $s4, -0x3
    ctx->pc = 0x480f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967293));
    // 0x480f84: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x480f84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x480f88: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x480F88u;
    {
        const bool branch_taken_0x480f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480f88) {
            ctx->pc = 0x480FC4u;
            goto label_480fc4;
        }
    }
    ctx->pc = 0x480F90u;
    // 0x480f90: 0xc122246  jal         func_488918
    ctx->pc = 0x480F90u;
    SET_GPR_U32(ctx, 31, 0x480F98u);
    ctx->pc = 0x480F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480F90u;
    // 0x480f94: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488918u, 0x480F90u, 0x480F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480F98u;
label_480f98:
    // 0x480f98: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x480f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x480f9c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x480F9Cu;
    {
        const bool branch_taken_0x480f9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x480f9c) {
            ctx->pc = 0x480FB4u;
            goto label_480fb4;
        }
    }
    ctx->pc = 0x480FA4u;
    // 0x480fa4: 0xc122254  jal         func_488950
    ctx->pc = 0x480FA4u;
    SET_GPR_U32(ctx, 31, 0x480FACu);
    ctx->pc = 0x480FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480FA4u;
    // 0x480fa8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488950u, 0x480FA4u, 0x480FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480FACu;
label_480fac:
    // 0x480fac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x480FACu;
    {
        const bool branch_taken_0x480fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x480FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480FACu;
        // 0x480fb0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480fac) {
            ctx->pc = 0x480FD8u;
            goto label_480fd8;
        }
    }
    ctx->pc = 0x480FB4u;
label_480fb4:
    // 0x480fb4: 0xc122254  jal         func_488950
    ctx->pc = 0x480FB4u;
    SET_GPR_U32(ctx, 31, 0x480FBCu);
    ctx->pc = 0x480FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480FB4u;
    // 0x480fb8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488950u, 0x480FB4u, 0x480FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480FBCu;
label_480fbc:
    // 0x480fbc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x480FBCu;
    {
        const bool branch_taken_0x480fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x480FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480FBCu;
        // 0x480fc0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480fbc) {
            ctx->pc = 0x480FD8u;
            goto label_480fd8;
        }
    }
    ctx->pc = 0x480FC4u;
label_480fc4:
    // 0x480fc4: 0xc122246  jal         func_488918
    ctx->pc = 0x480FC4u;
    SET_GPR_U32(ctx, 31, 0x480FCCu);
    ctx->pc = 0x480FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480FC4u;
    // 0x480fc8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488918u, 0x480FC4u, 0x480FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480FCCu;
label_480fcc:
    // 0x480fcc: 0xc122254  jal         func_488950
    ctx->pc = 0x480FCCu;
    SET_GPR_U32(ctx, 31, 0x480FD4u);
    ctx->pc = 0x480FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480FCCu;
    // 0x480fd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488950u, 0x480FCCu, 0x480FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480FD4u;
label_480fd4:
    // 0x480fd4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x480fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_480fd8:
    // 0x480fd8: 0xc12a5b4  jal         func_4A96D0
    ctx->pc = 0x480FD8u;
    SET_GPR_U32(ctx, 31, 0x480FE0u);
    ctx->pc = 0x480FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480FD8u;
    // 0x480fdc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A96D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A96D0u, 0x480FD8u, 0x480FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480FE0u;
label_480fe0:
    // 0x480fe0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x480FE0u;
    {
        const bool branch_taken_0x480fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x480FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480FE0u;
        // 0x480fe4: 0x27b00080  addiu       $s0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480fe0) {
            ctx->pc = 0x481000u;
            goto label_481000;
        }
    }
    ctx->pc = 0x480FE8u;
    // 0x480fe8: 0xc122246  jal         func_488918
    ctx->pc = 0x480FE8u;
    SET_GPR_U32(ctx, 31, 0x480FF0u);
    ctx->pc = 0x480FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480FE8u;
    // 0x480fec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488918u, 0x480FE8u, 0x480FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480FF0u;
label_480ff0:
    // 0x480ff0: 0xc122254  jal         func_488950
    ctx->pc = 0x480FF0u;
    SET_GPR_U32(ctx, 31, 0x480FF8u);
    ctx->pc = 0x480FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480FF0u;
    // 0x480ff4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488950u, 0x480FF0u, 0x480FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480FF8u;
label_480ff8:
    // 0x480ff8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x480FF8u;
    {
        const bool branch_taken_0x480ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x480FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480FF8u;
        // 0x480ffc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480ff8) {
            ctx->pc = 0x4810D4u;
            goto label_4810d4;
        }
    }
    ctx->pc = 0x481000u;
label_481000:
    // 0x481000: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x481000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481004: 0xc12a5b4  jal         func_4A96D0
    ctx->pc = 0x481004u;
    SET_GPR_U32(ctx, 31, 0x48100Cu);
    ctx->pc = 0x481008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x481004u;
    // 0x481008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A96D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A96D0u, 0x481004u, 0x48100Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48100Cu;
label_48100c:
    // 0x48100c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x48100Cu;
    {
        const bool branch_taken_0x48100c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x481010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48100Cu;
        // 0x481010: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48100c) {
            ctx->pc = 0x48102Cu;
            goto label_48102c;
        }
    }
    ctx->pc = 0x481014u;
    // 0x481014: 0xc122246  jal         func_488918
    ctx->pc = 0x481014u;
    SET_GPR_U32(ctx, 31, 0x48101Cu);
    ctx->pc = 0x481018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x481014u;
    // 0x481018: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488918u, 0x481014u, 0x48101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48101Cu;
label_48101c:
    // 0x48101c: 0xc122254  jal         func_488950
    ctx->pc = 0x48101Cu;
    SET_GPR_U32(ctx, 31, 0x481024u);
    ctx->pc = 0x481020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48101Cu;
    // 0x481020: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488950u, 0x48101Cu, 0x481024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481024u;
label_481024:
    // 0x481024: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x481024u;
    {
        const bool branch_taken_0x481024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x481028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481024u;
        // 0x481028: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x481024) {
            ctx->pc = 0x4810D4u;
            goto label_4810d4;
        }
    }
    ctx->pc = 0x48102Cu;
label_48102c:
    // 0x48102c: 0xc122108  jal         func_488420
    ctx->pc = 0x48102Cu;
    SET_GPR_U32(ctx, 31, 0x481034u);
    ctx->pc = 0x481030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48102Cu;
    // 0x481030: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488420u, 0x48102Cu, 0x481034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481034u;
label_481034:
    // 0x481034: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x481034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481038: 0x5600000b  bnel        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x481038u;
    {
        const bool branch_taken_0x481038 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x481038) {
            ctx->pc = 0x48103Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x481038u;
            // 0x48103c: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x481068u;
            goto label_481068;
        }
    }
    ctx->pc = 0x481040u;
    // 0x481040: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x481040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x481044: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x481044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481048: 0xc11fe02  jal         func_47F808
    ctx->pc = 0x481048u;
    SET_GPR_U32(ctx, 31, 0x481050u);
    ctx->pc = 0x48104Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x481048u;
    // 0x48104c: 0x2484ec08  addiu       $a0, $a0, -0x13F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F808u, 0x481048u, 0x481050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481050u;
label_481050:
    // 0x481050: 0xc122246  jal         func_488918
    ctx->pc = 0x481050u;
    SET_GPR_U32(ctx, 31, 0x481058u);
    ctx->pc = 0x481054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x481050u;
    // 0x481054: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488918u, 0x481050u, 0x481058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481058u;
label_481058:
    // 0x481058: 0xc122254  jal         func_488950
    ctx->pc = 0x481058u;
    SET_GPR_U32(ctx, 31, 0x481060u);
    ctx->pc = 0x48105Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x481058u;
    // 0x48105c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488950u, 0x481058u, 0x481060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481060u;
label_481060:
    // 0x481060: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x481060u;
    {
        const bool branch_taken_0x481060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x481064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481060u;
        // 0x481064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x481060) {
            ctx->pc = 0x4810D4u;
            goto label_4810d4;
        }
    }
    ctx->pc = 0x481068u;
label_481068:
    // 0x481068: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x481068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48106c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48106Cu;
    {
        const bool branch_taken_0x48106c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x48106c) {
            ctx->pc = 0x48107Cu;
            goto label_48107c;
        }
    }
    ctx->pc = 0x481074u;
    // 0x481074: 0x97a20118  lhu         $v0, 0x118($sp)
    ctx->pc = 0x481074u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x481078: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x481078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_48107c:
    // 0x48107c: 0xc122246  jal         func_488918
    ctx->pc = 0x48107Cu;
    SET_GPR_U32(ctx, 31, 0x481084u);
    ctx->pc = 0x481080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48107Cu;
    // 0x481080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488918u, 0x48107Cu, 0x481084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481084u;
label_481084:
    // 0x481084: 0xc122254  jal         func_488950
    ctx->pc = 0x481084u;
    SET_GPR_U32(ctx, 31, 0x48108Cu);
    ctx->pc = 0x481088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x481084u;
    // 0x481088: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488950u, 0x481084u, 0x48108Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48108Cu;
label_48108c:
    // 0x48108c: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x48108cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x481090: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x481090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481094: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x481094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481098: 0xc11fd22  jal         func_47F488
    ctx->pc = 0x481098u;
    SET_GPR_U32(ctx, 31, 0x4810A0u);
    ctx->pc = 0x48109Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x481098u;
    // 0x48109c: 0x2484ec08  addiu       $a0, $a0, -0x13F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F488u, 0x481098u, 0x4810A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4810A0u;
label_4810a0:
    // 0x4810a0: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x4810a0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x4810a4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4810A4u;
    {
        const bool branch_taken_0x4810a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4810A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4810A4u;
        // 0x4810a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4810a4) {
            ctx->pc = 0x4810D4u;
            goto label_4810d4;
        }
    }
    ctx->pc = 0x4810ACu;
label_4810ac:
    // 0x4810ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4810acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4810b0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4810b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4810b4: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x4810b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x4810b8: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4810B8u;
    SET_GPR_U32(ctx, 31, 0x4810C0u);
    ctx->pc = 0x4810BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4810B8u;
    // 0x4810bc: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4810B8u, 0x4810C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4810C0u;
label_4810c0:
    // 0x4810c0: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x4810c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x4810c4: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4810C4u;
    SET_GPR_U32(ctx, 31, 0x4810CCu);
    ctx->pc = 0x4810C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4810C4u;
    // 0x4810c8: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4810C4u, 0x4810CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4810CCu;
label_4810cc:
    // 0x4810cc: 0x0  nop
    ctx->pc = 0x4810ccu;
    // NOP
label_4810d0:
    // 0x4810d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4810d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4810d4:
    // 0x4810d4: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x4810d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x4810d8: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x4810d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x4810dc: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x4810dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x4810e0: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x4810e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x4810e4: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x4810e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x4810e8: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x4810e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x4810ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4810ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4810F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4810ECu;
        // 0x4810f0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4810ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4810F4u;
    // 0x4810f4: 0x0  nop
    ctx->pc = 0x4810f4u;
    // NOP
    ctx->pc = 0x4810f8u;
}
