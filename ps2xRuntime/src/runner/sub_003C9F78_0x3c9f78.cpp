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

// Function: sub_003C9F78
// Address: 0x3c9f78 - 0x3ca050
void sub_003C9F78_0x3c9f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9F78_0x3c9f78");
#endif

    switch (ctx->pc) {
        case 0x3c9f78u: goto label_3c9f78;
        case 0x3c9f7cu: goto label_3c9f7c;
        case 0x3c9f80u: goto label_3c9f80;
        case 0x3c9f84u: goto label_3c9f84;
        case 0x3c9f88u: goto label_3c9f88;
        case 0x3c9f8cu: goto label_3c9f8c;
        case 0x3c9f90u: goto label_3c9f90;
        case 0x3c9f94u: goto label_3c9f94;
        case 0x3c9f98u: goto label_3c9f98;
        case 0x3c9f9cu: goto label_3c9f9c;
        case 0x3c9fa0u: goto label_3c9fa0;
        case 0x3c9fa4u: goto label_3c9fa4;
        case 0x3c9fa8u: goto label_3c9fa8;
        case 0x3c9facu: goto label_3c9fac;
        case 0x3c9fb0u: goto label_3c9fb0;
        case 0x3c9fb4u: goto label_3c9fb4;
        case 0x3c9fb8u: goto label_3c9fb8;
        case 0x3c9fbcu: goto label_3c9fbc;
        case 0x3c9fc0u: goto label_3c9fc0;
        case 0x3c9fc4u: goto label_3c9fc4;
        case 0x3c9fc8u: goto label_3c9fc8;
        case 0x3c9fccu: goto label_3c9fcc;
        case 0x3c9fd0u: goto label_3c9fd0;
        case 0x3c9fd4u: goto label_3c9fd4;
        case 0x3c9fd8u: goto label_3c9fd8;
        case 0x3c9fdcu: goto label_3c9fdc;
        case 0x3c9fe0u: goto label_3c9fe0;
        case 0x3c9fe4u: goto label_3c9fe4;
        case 0x3c9fe8u: goto label_3c9fe8;
        case 0x3c9fecu: goto label_3c9fec;
        case 0x3c9ff0u: goto label_3c9ff0;
        case 0x3c9ff4u: goto label_3c9ff4;
        case 0x3c9ff8u: goto label_3c9ff8;
        case 0x3c9ffcu: goto label_3c9ffc;
        case 0x3ca000u: goto label_3ca000;
        case 0x3ca004u: goto label_3ca004;
        case 0x3ca008u: goto label_3ca008;
        case 0x3ca00cu: goto label_3ca00c;
        case 0x3ca010u: goto label_3ca010;
        case 0x3ca014u: goto label_3ca014;
        case 0x3ca018u: goto label_3ca018;
        case 0x3ca01cu: goto label_3ca01c;
        case 0x3ca020u: goto label_3ca020;
        case 0x3ca024u: goto label_3ca024;
        case 0x3ca028u: goto label_3ca028;
        case 0x3ca02cu: goto label_3ca02c;
        case 0x3ca030u: goto label_3ca030;
        case 0x3ca034u: goto label_3ca034;
        case 0x3ca038u: goto label_3ca038;
        case 0x3ca03cu: goto label_3ca03c;
        case 0x3ca040u: goto label_3ca040;
        case 0x3ca044u: goto label_3ca044;
        case 0x3ca048u: goto label_3ca048;
        case 0x3ca04cu: goto label_3ca04c;
        default: break;
    }

    ctx->pc = 0x3c9f78u;

label_3c9f78:
    // 0x3c9f78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c9f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3c9f7c:
    // 0x3c9f7c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3c9f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3c9f80:
    // 0x3c9f80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c9f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3c9f84:
    // 0x3c9f84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c9f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c9f88:
    // 0x3c9f88: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3c9f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3c9f8c:
    // 0x3c9f8c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3c9f8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c9f90:
    // 0x3c9f90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c9f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c9f94:
    // 0x3c9f94: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3c9f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3c9f98:
    // 0x3c9f98: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_3c9f9c:
    if (ctx->pc == 0x3C9F9Cu) {
        ctx->pc = 0x3C9F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9F98u;
        // 0x3c9f9c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9FA0u;
        goto label_3c9fa0;
    }
    ctx->pc = 0x3C9F98u;
    {
        const bool branch_taken_0x3c9f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9F98u;
        // 0x3c9f9c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9f98) {
            ctx->pc = 0x3CA038u;
            goto label_3ca038;
        }
    }
    ctx->pc = 0x3C9FA0u;
label_3c9fa0:
    // 0x3c9fa0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3c9fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_3c9fa4:
    // 0x3c9fa4: 0xc0e896e  jal         func_3A25B8
label_3c9fa8:
    if (ctx->pc == 0x3C9FA8u) {
        ctx->pc = 0x3C9FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9FA4u;
        // 0x3c9fa8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9FACu;
        goto label_3c9fac;
    }
    ctx->pc = 0x3C9FA4u;
    SET_GPR_U32(ctx, 31, 0x3C9FACu);
    ctx->pc = 0x3C9FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9FA4u;
    // 0x3c9fa8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3C9FA4u, 0x3C9FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9FACu;
label_3c9fac:
    // 0x3c9fac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3c9fb0:
    if (ctx->pc == 0x3C9FB0u) {
        ctx->pc = 0x3C9FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9FACu;
        // 0x3c9fb0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9FB4u;
        goto label_3c9fb4;
    }
    ctx->pc = 0x3C9FACu;
    {
        const bool branch_taken_0x3c9fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9FACu;
        // 0x3c9fb0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9fac) {
            ctx->pc = 0x3C9FD4u;
            goto label_3c9fd4;
        }
    }
    ctx->pc = 0x3C9FB4u;
label_3c9fb4:
    // 0x3c9fb4: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x3c9fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c9fb8:
    // 0x3c9fb8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3c9fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3c9fbc:
    // 0x3c9fbc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3c9fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3c9fc0:
    // 0x3c9fc0: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3c9fc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3c9fc4:
    // 0x3c9fc4: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3c9fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3c9fc8:
    // 0x3c9fc8: 0x60f809  jalr        $v1
label_3c9fcc:
    if (ctx->pc == 0x3C9FCCu) {
        ctx->pc = 0x3C9FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9FC8u;
        // 0x3c9fcc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9FD0u;
        goto label_3c9fd0;
    }
    ctx->pc = 0x3C9FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C9FD0u);
        ctx->pc = 0x3C9FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9FC8u;
        // 0x3c9fcc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9FC8u, 0x3C9FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C9FD0u;
label_3c9fd0:
    // 0x3c9fd0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3c9fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3c9fd4:
    // 0x3c9fd4: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x3c9fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3c9fd8:
    // 0x3c9fd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c9fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9fdc:
    // 0x3c9fdc: 0xc0e964e  jal         func_3A5938
label_3c9fe0:
    if (ctx->pc == 0x3C9FE0u) {
        ctx->pc = 0x3C9FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9FDCu;
        // 0x3c9fe0: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9FE4u;
        goto label_3c9fe4;
    }
    ctx->pc = 0x3C9FDCu;
    SET_GPR_U32(ctx, 31, 0x3C9FE4u);
    ctx->pc = 0x3C9FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9FDCu;
    // 0x3c9fe0: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5938u, 0x3C9FDCu, 0x3C9FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9FE4u;
label_3c9fe4:
    // 0x3c9fe4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x3c9fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3c9fe8:
    // 0x3c9fe8: 0x50910005  beql        $a0, $s1, . + 4 + (0x5 << 2)
label_3c9fec:
    if (ctx->pc == 0x3C9FECu) {
        ctx->pc = 0x3C9FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9FE8u;
        // 0x3c9fec: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9FF0u;
        goto label_3c9ff0;
    }
    ctx->pc = 0x3C9FE8u;
    {
        const bool branch_taken_0x3c9fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x3c9fe8) {
            ctx->pc = 0x3C9FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C9FE8u;
            // 0x3c9fec: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CA000u;
            goto label_3ca000;
        }
    }
    ctx->pc = 0x3C9FF0u;
label_3c9ff0:
    // 0x3c9ff0: 0xc0e96ae  jal         func_3A5AB8
label_3c9ff4:
    if (ctx->pc == 0x3C9FF4u) {
        ctx->pc = 0x3C9FF8u;
        goto label_3c9ff8;
    }
    ctx->pc = 0x3C9FF0u;
    SET_GPR_U32(ctx, 31, 0x3C9FF8u);
    ctx->pc = 0x3A5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5AB8u, 0x3C9FF0u, 0x3C9FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9FF8u;
label_3c9ff8:
    // 0x3c9ff8: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x3c9ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
label_3c9ffc:
    // 0x3c9ffc: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x3c9ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3ca000:
    // 0x3ca000: 0x10b10004  beq         $a1, $s1, . + 4 + (0x4 << 2)
label_3ca004:
    if (ctx->pc == 0x3CA004u) {
        ctx->pc = 0x3CA004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA000u;
        // 0x3ca004: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA008u;
        goto label_3ca008;
    }
    ctx->pc = 0x3CA000u;
    {
        const bool branch_taken_0x3ca000 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        ctx->pc = 0x3CA004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA000u;
        // 0x3ca004: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca000) {
            ctx->pc = 0x3CA014u;
            goto label_3ca014;
        }
    }
    ctx->pc = 0x3CA008u;
label_3ca008:
    // 0x3ca008: 0xc0670ca  jal         func_19C328
label_3ca00c:
    if (ctx->pc == 0x3CA00Cu) {
        ctx->pc = 0x3CA00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA008u;
        // 0x3ca00c: 0x8c44cf14  lw          $a0, -0x30EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA010u;
        goto label_3ca010;
    }
    ctx->pc = 0x3CA008u;
    SET_GPR_U32(ctx, 31, 0x3CA010u);
    ctx->pc = 0x3CA00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA008u;
    // 0x3ca00c: 0x8c44cf14  lw          $a0, -0x30EC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954772)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C328u, 0x3CA008u, 0x3CA010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA010u;
label_3ca010:
    // 0x3ca010: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x3ca010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
label_3ca014:
    // 0x3ca014: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3ca014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3ca018:
    // 0x3ca018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ca018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ca01c:
    // 0x3ca01c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_3ca020:
    if (ctx->pc == 0x3CA020u) {
        ctx->pc = 0x3CA020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA01Cu;
        // 0x3ca020: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA024u;
        goto label_3ca024;
    }
    ctx->pc = 0x3CA01Cu;
    {
        const bool branch_taken_0x3ca01c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3CA020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA01Cu;
        // 0x3ca020: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca01c) {
            ctx->pc = 0x3CA03Cu;
            goto label_3ca03c;
        }
    }
    ctx->pc = 0x3CA024u;
label_3ca024:
    // 0x3ca024: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3ca024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ca028:
    // 0x3ca028: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3ca028u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3ca02c:
    // 0x3ca02c: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3ca02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3ca030:
    // 0x3ca030: 0x60f809  jalr        $v1
label_3ca034:
    if (ctx->pc == 0x3CA034u) {
        ctx->pc = 0x3CA034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA030u;
        // 0x3ca034: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA038u;
        goto label_3ca038;
    }
    ctx->pc = 0x3CA030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CA038u);
        ctx->pc = 0x3CA034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA030u;
        // 0x3ca034: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA030u, 0x3CA038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CA038u;
label_3ca038:
    // 0x3ca038: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3ca038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ca03c:
    // 0x3ca03c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3ca03cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ca040:
    // 0x3ca040: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3ca040u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ca044:
    // 0x3ca044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ca044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ca048:
    // 0x3ca048: 0x3e00008  jr          $ra
label_3ca04c:
    if (ctx->pc == 0x3CA04Cu) {
        ctx->pc = 0x3CA04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA048u;
        // 0x3ca04c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA050u;
        goto label_fallthrough_0x3ca048;
    }
    ctx->pc = 0x3CA048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA048u;
        // 0x3ca04c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ca048:
    ctx->pc = 0x3CA050u;
}
