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

// Function: sub_0025EF58
// Address: 0x25ef58 - 0x25f028
void sub_0025EF58_0x25ef58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EF58_0x25ef58");
#endif

    switch (ctx->pc) {
        case 0x25ef58u: goto label_25ef58;
        case 0x25ef5cu: goto label_25ef5c;
        case 0x25ef60u: goto label_25ef60;
        case 0x25ef64u: goto label_25ef64;
        case 0x25ef68u: goto label_25ef68;
        case 0x25ef6cu: goto label_25ef6c;
        case 0x25ef70u: goto label_25ef70;
        case 0x25ef74u: goto label_25ef74;
        case 0x25ef78u: goto label_25ef78;
        case 0x25ef7cu: goto label_25ef7c;
        case 0x25ef80u: goto label_25ef80;
        case 0x25ef84u: goto label_25ef84;
        case 0x25ef88u: goto label_25ef88;
        case 0x25ef8cu: goto label_25ef8c;
        case 0x25ef90u: goto label_25ef90;
        case 0x25ef94u: goto label_25ef94;
        case 0x25ef98u: goto label_25ef98;
        case 0x25ef9cu: goto label_25ef9c;
        case 0x25efa0u: goto label_25efa0;
        case 0x25efa4u: goto label_25efa4;
        case 0x25efa8u: goto label_25efa8;
        case 0x25efacu: goto label_25efac;
        case 0x25efb0u: goto label_25efb0;
        case 0x25efb4u: goto label_25efb4;
        case 0x25efb8u: goto label_25efb8;
        case 0x25efbcu: goto label_25efbc;
        case 0x25efc0u: goto label_25efc0;
        case 0x25efc4u: goto label_25efc4;
        case 0x25efc8u: goto label_25efc8;
        case 0x25efccu: goto label_25efcc;
        case 0x25efd0u: goto label_25efd0;
        case 0x25efd4u: goto label_25efd4;
        case 0x25efd8u: goto label_25efd8;
        case 0x25efdcu: goto label_25efdc;
        case 0x25efe0u: goto label_25efe0;
        case 0x25efe4u: goto label_25efe4;
        case 0x25efe8u: goto label_25efe8;
        case 0x25efecu: goto label_25efec;
        case 0x25eff0u: goto label_25eff0;
        case 0x25eff4u: goto label_25eff4;
        case 0x25eff8u: goto label_25eff8;
        case 0x25effcu: goto label_25effc;
        case 0x25f000u: goto label_25f000;
        case 0x25f004u: goto label_25f004;
        case 0x25f008u: goto label_25f008;
        case 0x25f00cu: goto label_25f00c;
        case 0x25f010u: goto label_25f010;
        case 0x25f014u: goto label_25f014;
        case 0x25f018u: goto label_25f018;
        case 0x25f01cu: goto label_25f01c;
        case 0x25f020u: goto label_25f020;
        case 0x25f024u: goto label_25f024;
        default: break;
    }

    ctx->pc = 0x25ef58u;

label_25ef58:
    // 0x25ef58: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25ef58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_25ef5c:
    // 0x25ef5c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x25ef5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_25ef60:
    // 0x25ef60: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x25ef60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_25ef64:
    // 0x25ef64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25ef64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25ef68:
    // 0x25ef68: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x25ef68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_25ef6c:
    // 0x25ef6c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x25ef6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25ef70:
    // 0x25ef70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25ef70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_25ef74:
    // 0x25ef74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25ef74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25ef78:
    // 0x25ef78: 0xc088f4e  jal         func_223D38
label_25ef7c:
    if (ctx->pc == 0x25EF7Cu) {
        ctx->pc = 0x25EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF78u;
        // 0x25ef7c: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EF80u;
        goto label_25ef80;
    }
    ctx->pc = 0x25EF78u;
    SET_GPR_U32(ctx, 31, 0x25EF80u);
    ctx->pc = 0x25EF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EF78u;
    // 0x25ef7c: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x223D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223D38u, 0x25EF78u, 0x25EF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EF80u;
label_25ef80:
    // 0x25ef80: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
label_25ef84:
    if (ctx->pc == 0x25EF84u) {
        ctx->pc = 0x25EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF80u;
        // 0x25ef84: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EF88u;
        goto label_25ef88;
    }
    ctx->pc = 0x25EF80u;
    {
        const bool branch_taken_0x25ef80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ef80) {
            ctx->pc = 0x25EF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25EF80u;
            // 0x25ef84: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F00Cu;
            goto label_25f00c;
        }
    }
    ctx->pc = 0x25EF88u;
label_25ef88:
    // 0x25ef88: 0x8e1200d8  lw          $s2, 0xD8($s0)
    ctx->pc = 0x25ef88u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_25ef8c:
    // 0x25ef8c: 0x1240001e  beqz        $s2, . + 4 + (0x1E << 2)
label_25ef90:
    if (ctx->pc == 0x25EF90u) {
        ctx->pc = 0x25EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF8Cu;
        // 0x25ef90: 0x3c040056  lui         $a0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EF94u;
        goto label_25ef94;
    }
    ctx->pc = 0x25EF8Cu;
    {
        const bool branch_taken_0x25ef8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF8Cu;
        // 0x25ef90: 0x3c040056  lui         $a0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef8c) {
            ctx->pc = 0x25F008u;
            goto label_25f008;
        }
    }
    ctx->pc = 0x25EF94u;
label_25ef94:
    // 0x25ef94: 0xc041532  jal         func_1054C8
label_25ef98:
    if (ctx->pc == 0x25EF98u) {
        ctx->pc = 0x25EF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF94u;
        // 0x25ef98: 0x2484d9f0  addiu       $a0, $a0, -0x2610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EF9Cu;
        goto label_25ef9c;
    }
    ctx->pc = 0x25EF94u;
    SET_GPR_U32(ctx, 31, 0x25EF9Cu);
    ctx->pc = 0x25EF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EF94u;
    // 0x25ef98: 0x2484d9f0  addiu       $a0, $a0, -0x2610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25EF94u, 0x25EF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EF9Cu;
label_25ef9c:
    // 0x25ef9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25ef9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25efa0:
    // 0x25efa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25efa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25efa4:
    // 0x25efa4: 0xc089990  jal         func_226640
label_25efa8:
    if (ctx->pc == 0x25EFA8u) {
        ctx->pc = 0x25EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFA4u;
        // 0x25efa8: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EFACu;
        goto label_25efac;
    }
    ctx->pc = 0x25EFA4u;
    SET_GPR_U32(ctx, 31, 0x25EFACu);
    ctx->pc = 0x25EFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EFA4u;
    // 0x25efa8: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x25EFA4u, 0x25EFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EFACu;
label_25efac:
    // 0x25efac: 0x52200014  beql        $s1, $zero, . + 4 + (0x14 << 2)
label_25efb0:
    if (ctx->pc == 0x25EFB0u) {
        ctx->pc = 0x25EFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFACu;
        // 0x25efb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EFB4u;
        goto label_25efb4;
    }
    ctx->pc = 0x25EFACu;
    {
        const bool branch_taken_0x25efac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x25efac) {
            ctx->pc = 0x25EFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25EFACu;
            // 0x25efb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F000u;
            goto label_25f000;
        }
    }
    ctx->pc = 0x25EFB4u;
label_25efb4:
    // 0x25efb4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x25efb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25efb8:
    // 0x25efb8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25efb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_25efbc:
    // 0x25efbc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25efbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_25efc0:
    // 0x25efc0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25efc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25efc4:
    // 0x25efc4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25efc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25efc8:
    // 0x25efc8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25efcc:
    // 0x25efcc: 0x40f809  jalr        $v0
label_25efd0:
    if (ctx->pc == 0x25EFD0u) {
        ctx->pc = 0x25EFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFCCu;
        // 0x25efd0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EFD4u;
        goto label_25efd4;
    }
    ctx->pc = 0x25EFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25EFD4u);
        ctx->pc = 0x25EFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFCCu;
        // 0x25efd0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EFCCu, 0x25EFD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25EFD4u;
label_25efd4:
    // 0x25efd4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25efd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25efd8:
    // 0x25efd8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x25efd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25efdc:
    // 0x25efdc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x25efdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25efe0:
    // 0x25efe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25efe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25efe4:
    // 0x25efe4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25efe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25efe8:
    // 0x25efe8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x25efe8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_25efec:
    // 0x25efec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25efecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25eff0:
    // 0x25eff0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x25eff0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_25eff4:
    // 0x25eff4: 0xc041890  jal         func_106240
label_25eff8:
    if (ctx->pc == 0x25EFF8u) {
        ctx->pc = 0x25EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFF4u;
        // 0x25eff8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EFFCu;
        goto label_25effc;
    }
    ctx->pc = 0x25EFF4u;
    SET_GPR_U32(ctx, 31, 0x25EFFCu);
    ctx->pc = 0x25EFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EFF4u;
    // 0x25eff8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106240u, 0x25EFF4u, 0x25EFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EFFCu;
label_25effc:
    // 0x25effc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25effcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25f000:
    // 0x25f000: 0xc05d4f6  jal         func_1753D8
label_25f004:
    if (ctx->pc == 0x25F004u) {
        ctx->pc = 0x25F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F000u;
        // 0x25f004: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F008u;
        goto label_25f008;
    }
    ctx->pc = 0x25F000u;
    SET_GPR_U32(ctx, 31, 0x25F008u);
    ctx->pc = 0x25F004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F000u;
    // 0x25f004: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25F000u, 0x25F008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F008u;
label_25f008:
    // 0x25f008: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x25f008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25f00c:
    // 0x25f00c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x25f00cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25f010:
    // 0x25f010: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25f010u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25f014:
    // 0x25f014: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x25f014u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25f018:
    // 0x25f018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25f018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25f01c:
    // 0x25f01c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x25f01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25f020:
    // 0x25f020: 0x3e00008  jr          $ra
label_25f024:
    if (ctx->pc == 0x25F024u) {
        ctx->pc = 0x25F024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F020u;
        // 0x25f024: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F028u;
        goto label_fallthrough_0x25f020;
    }
    ctx->pc = 0x25F020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F020u;
        // 0x25f024: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25f020:
    ctx->pc = 0x25F028u;
}
