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

// Function: sub_00197F70
// Address: 0x197f70 - 0x198080
void sub_00197F70_0x197f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197F70_0x197f70");
#endif

    switch (ctx->pc) {
        case 0x197f70u: goto label_197f70;
        case 0x197f74u: goto label_197f74;
        case 0x197f78u: goto label_197f78;
        case 0x197f7cu: goto label_197f7c;
        case 0x197f80u: goto label_197f80;
        case 0x197f84u: goto label_197f84;
        case 0x197f88u: goto label_197f88;
        case 0x197f8cu: goto label_197f8c;
        case 0x197f90u: goto label_197f90;
        case 0x197f94u: goto label_197f94;
        case 0x197f98u: goto label_197f98;
        case 0x197f9cu: goto label_197f9c;
        case 0x197fa0u: goto label_197fa0;
        case 0x197fa4u: goto label_197fa4;
        case 0x197fa8u: goto label_197fa8;
        case 0x197facu: goto label_197fac;
        case 0x197fb0u: goto label_197fb0;
        case 0x197fb4u: goto label_197fb4;
        case 0x197fb8u: goto label_197fb8;
        case 0x197fbcu: goto label_197fbc;
        case 0x197fc0u: goto label_197fc0;
        case 0x197fc4u: goto label_197fc4;
        case 0x197fc8u: goto label_197fc8;
        case 0x197fccu: goto label_197fcc;
        case 0x197fd0u: goto label_197fd0;
        case 0x197fd4u: goto label_197fd4;
        case 0x197fd8u: goto label_197fd8;
        case 0x197fdcu: goto label_197fdc;
        case 0x197fe0u: goto label_197fe0;
        case 0x197fe4u: goto label_197fe4;
        case 0x197fe8u: goto label_197fe8;
        case 0x197fecu: goto label_197fec;
        case 0x197ff0u: goto label_197ff0;
        case 0x197ff4u: goto label_197ff4;
        case 0x197ff8u: goto label_197ff8;
        case 0x197ffcu: goto label_197ffc;
        case 0x198000u: goto label_198000;
        case 0x198004u: goto label_198004;
        case 0x198008u: goto label_198008;
        case 0x19800cu: goto label_19800c;
        case 0x198010u: goto label_198010;
        case 0x198014u: goto label_198014;
        case 0x198018u: goto label_198018;
        case 0x19801cu: goto label_19801c;
        case 0x198020u: goto label_198020;
        case 0x198024u: goto label_198024;
        case 0x198028u: goto label_198028;
        case 0x19802cu: goto label_19802c;
        case 0x198030u: goto label_198030;
        case 0x198034u: goto label_198034;
        case 0x198038u: goto label_198038;
        case 0x19803cu: goto label_19803c;
        case 0x198040u: goto label_198040;
        case 0x198044u: goto label_198044;
        case 0x198048u: goto label_198048;
        case 0x19804cu: goto label_19804c;
        case 0x198050u: goto label_198050;
        case 0x198054u: goto label_198054;
        case 0x198058u: goto label_198058;
        case 0x19805cu: goto label_19805c;
        case 0x198060u: goto label_198060;
        case 0x198064u: goto label_198064;
        case 0x198068u: goto label_198068;
        case 0x19806cu: goto label_19806c;
        case 0x198070u: goto label_198070;
        case 0x198074u: goto label_198074;
        case 0x198078u: goto label_198078;
        case 0x19807cu: goto label_19807c;
        default: break;
    }

    ctx->pc = 0x197f70u;

label_197f70:
    // 0x197f70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x197f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_197f74:
    // 0x197f74: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x197f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_197f78:
    // 0x197f78: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x197f78u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_197f7c:
    // 0x197f7c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x197f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_197f80:
    // 0x197f80: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x197f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_197f84:
    // 0x197f84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x197f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_197f88:
    // 0x197f88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x197f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_197f8c:
    // 0x197f8c: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x197f8cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_197f90:
    // 0x197f90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x197f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_197f94:
    // 0x197f94: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x197f94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197f98:
    // 0x197f98: 0x8e4627e4  lw          $a2, 0x27E4($s2)
    ctx->pc = 0x197f98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_197f9c:
    // 0x197f9c: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x197f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_197fa0:
    // 0x197fa0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x197fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_197fa4:
    // 0x197fa4: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x197fa4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_197fa8:
    // 0x197fa8: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x197fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_197fac:
    // 0x197fac: 0x60f809  jalr        $v1
label_197fb0:
    if (ctx->pc == 0x197FB0u) {
        ctx->pc = 0x197FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197FACu;
        // 0x197fb0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197FB4u;
        goto label_197fb4;
    }
    ctx->pc = 0x197FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x197FB4u);
        ctx->pc = 0x197FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197FACu;
        // 0x197fb0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197FACu, 0x197FB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197FB4u;
label_197fb4:
    // 0x197fb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x197fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_197fb8:
    // 0x197fb8: 0xc065f7c  jal         func_197DF0
label_197fbc:
    if (ctx->pc == 0x197FBCu) {
        ctx->pc = 0x197FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197FB8u;
        // 0x197fbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197FC0u;
        goto label_197fc0;
    }
    ctx->pc = 0x197FB8u;
    SET_GPR_U32(ctx, 31, 0x197FC0u);
    ctx->pc = 0x197FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197FB8u;
    // 0x197fbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197DF0u, 0x197FB8u, 0x197FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197FC0u;
label_197fc0:
    // 0x197fc0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x197fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_197fc4:
    // 0x197fc4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x197fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_197fc8:
    // 0x197fc8: 0xc11fc7e  jal         func_47F1F8
label_197fcc:
    if (ctx->pc == 0x197FCCu) {
        ctx->pc = 0x197FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197FC8u;
        // 0x197fcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197FD0u;
        goto label_197fd0;
    }
    ctx->pc = 0x197FC8u;
    SET_GPR_U32(ctx, 31, 0x197FD0u);
    ctx->pc = 0x197FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197FC8u;
    // 0x197fcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F1F8u, 0x197FC8u, 0x197FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197FD0u;
label_197fd0:
    // 0x197fd0: 0x8e4627e4  lw          $a2, 0x27E4($s2)
    ctx->pc = 0x197fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_197fd4:
    // 0x197fd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197fd8:
    // 0x197fd8: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x197fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_197fdc:
    // 0x197fdc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x197fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_197fe0:
    // 0x197fe0: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x197fe0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_197fe4:
    // 0x197fe4: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x197fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_197fe8:
    // 0x197fe8: 0x60f809  jalr        $v1
label_197fec:
    if (ctx->pc == 0x197FECu) {
        ctx->pc = 0x197FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197FE8u;
        // 0x197fec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197FF0u;
        goto label_197ff0;
    }
    ctx->pc = 0x197FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x197FF0u);
        ctx->pc = 0x197FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197FE8u;
        // 0x197fec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197FE8u, 0x197FF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197FF0u;
label_197ff0:
    // 0x197ff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_197ff4:
    // 0x197ff4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x197ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_197ff8:
    // 0x197ff8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x197ff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197ffc:
    // 0x197ffc: 0xc11eeae  jal         func_47BAB8
label_198000:
    if (ctx->pc == 0x198000u) {
        ctx->pc = 0x198000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197FFCu;
        // 0x198000: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198004u;
        goto label_198004;
    }
    ctx->pc = 0x197FFCu;
    SET_GPR_U32(ctx, 31, 0x198004u);
    ctx->pc = 0x198000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197FFCu;
    // 0x198000: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x197FFCu, 0x198004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198004u;
label_198004:
    // 0x198004: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_198008:
    if (ctx->pc == 0x198008u) {
        ctx->pc = 0x198008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198004u;
        // 0x198008: 0x8e4627e4  lw          $a2, 0x27E4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19800Cu;
        goto label_19800c;
    }
    ctx->pc = 0x198004u;
    {
        const bool branch_taken_0x198004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198004u;
        // 0x198008: 0x8e4627e4  lw          $a2, 0x27E4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198004) {
            ctx->pc = 0x19801Cu;
            goto label_19801c;
        }
    }
    ctx->pc = 0x19800Cu;
label_19800c:
    // 0x19800c: 0xc12043e  jal         func_4810F8
label_198010:
    if (ctx->pc == 0x198010u) {
        ctx->pc = 0x198010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19800Cu;
        // 0x198010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198014u;
        goto label_198014;
    }
    ctx->pc = 0x19800Cu;
    SET_GPR_U32(ctx, 31, 0x198014u);
    ctx->pc = 0x198010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19800Cu;
    // 0x198010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4810F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4810F8u, 0x19800Cu, 0x198014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198014u;
label_198014:
    // 0x198014: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x198014u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_198018:
    // 0x198018: 0x8e4627e4  lw          $a2, 0x27E4($s2)
    ctx->pc = 0x198018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_19801c:
    // 0x19801c: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x19801cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_198020:
    // 0x198020: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x198020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_198024:
    // 0x198024: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x198024u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_198028:
    // 0x198028: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x198028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_19802c:
    // 0x19802c: 0x60f809  jalr        $v1
label_198030:
    if (ctx->pc == 0x198030u) {
        ctx->pc = 0x198030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19802Cu;
        // 0x198030: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198034u;
        goto label_198034;
    }
    ctx->pc = 0x19802Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x198034u);
        ctx->pc = 0x198030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19802Cu;
        // 0x198030: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19802Cu, 0x198034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x198034u;
label_198034:
    // 0x198034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_198038:
    // 0x198038: 0xc11fcaa  jal         func_47F2A8
label_19803c:
    if (ctx->pc == 0x19803Cu) {
        ctx->pc = 0x19803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198038u;
        // 0x19803c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198040u;
        goto label_198040;
    }
    ctx->pc = 0x198038u;
    SET_GPR_U32(ctx, 31, 0x198040u);
    ctx->pc = 0x19803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198038u;
    // 0x19803c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F2A8u, 0x198038u, 0x198040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198040u;
label_198040:
    // 0x198040: 0x8e4627e4  lw          $a2, 0x27E4($s2)
    ctx->pc = 0x198040u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_198044:
    // 0x198044: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x198044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_198048:
    // 0x198048: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x198048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_19804c:
    // 0x19804c: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x19804cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_198050:
    // 0x198050: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x198050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_198054:
    // 0x198054: 0x60f809  jalr        $v1
label_198058:
    if (ctx->pc == 0x198058u) {
        ctx->pc = 0x198058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198054u;
        // 0x198058: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19805Cu;
        goto label_19805c;
    }
    ctx->pc = 0x198054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19805Cu);
        ctx->pc = 0x198058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198054u;
        // 0x198058: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198054u, 0x19805Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19805Cu;
label_19805c:
    // 0x19805c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x19805cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_198060:
    // 0x198060: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x198060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_198064:
    // 0x198064: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x198064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_198068:
    // 0x198068: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x198068u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19806c:
    // 0x19806c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19806cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_198070:
    // 0x198070: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x198070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_198074:
    // 0x198074: 0x3e00008  jr          $ra
label_198078:
    if (ctx->pc == 0x198078u) {
        ctx->pc = 0x198078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198074u;
        // 0x198078: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19807Cu;
        goto label_19807c;
    }
    ctx->pc = 0x198074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198074u;
        // 0x198078: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19807Cu;
label_19807c:
    // 0x19807c: 0x0  nop
    ctx->pc = 0x19807cu;
    // NOP
    ctx->pc = 0x198080u;
}
