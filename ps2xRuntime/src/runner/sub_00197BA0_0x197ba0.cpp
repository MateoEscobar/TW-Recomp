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

// Function: sub_00197BA0
// Address: 0x197ba0 - 0x197cc8
void sub_00197BA0_0x197ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197BA0_0x197ba0");
#endif

    switch (ctx->pc) {
        case 0x197ba0u: goto label_197ba0;
        case 0x197ba4u: goto label_197ba4;
        case 0x197ba8u: goto label_197ba8;
        case 0x197bacu: goto label_197bac;
        case 0x197bb0u: goto label_197bb0;
        case 0x197bb4u: goto label_197bb4;
        case 0x197bb8u: goto label_197bb8;
        case 0x197bbcu: goto label_197bbc;
        case 0x197bc0u: goto label_197bc0;
        case 0x197bc4u: goto label_197bc4;
        case 0x197bc8u: goto label_197bc8;
        case 0x197bccu: goto label_197bcc;
        case 0x197bd0u: goto label_197bd0;
        case 0x197bd4u: goto label_197bd4;
        case 0x197bd8u: goto label_197bd8;
        case 0x197bdcu: goto label_197bdc;
        case 0x197be0u: goto label_197be0;
        case 0x197be4u: goto label_197be4;
        case 0x197be8u: goto label_197be8;
        case 0x197becu: goto label_197bec;
        case 0x197bf0u: goto label_197bf0;
        case 0x197bf4u: goto label_197bf4;
        case 0x197bf8u: goto label_197bf8;
        case 0x197bfcu: goto label_197bfc;
        case 0x197c00u: goto label_197c00;
        case 0x197c04u: goto label_197c04;
        case 0x197c08u: goto label_197c08;
        case 0x197c0cu: goto label_197c0c;
        case 0x197c10u: goto label_197c10;
        case 0x197c14u: goto label_197c14;
        case 0x197c18u: goto label_197c18;
        case 0x197c1cu: goto label_197c1c;
        case 0x197c20u: goto label_197c20;
        case 0x197c24u: goto label_197c24;
        case 0x197c28u: goto label_197c28;
        case 0x197c2cu: goto label_197c2c;
        case 0x197c30u: goto label_197c30;
        case 0x197c34u: goto label_197c34;
        case 0x197c38u: goto label_197c38;
        case 0x197c3cu: goto label_197c3c;
        case 0x197c40u: goto label_197c40;
        case 0x197c44u: goto label_197c44;
        case 0x197c48u: goto label_197c48;
        case 0x197c4cu: goto label_197c4c;
        case 0x197c50u: goto label_197c50;
        case 0x197c54u: goto label_197c54;
        case 0x197c58u: goto label_197c58;
        case 0x197c5cu: goto label_197c5c;
        case 0x197c60u: goto label_197c60;
        case 0x197c64u: goto label_197c64;
        case 0x197c68u: goto label_197c68;
        case 0x197c6cu: goto label_197c6c;
        case 0x197c70u: goto label_197c70;
        case 0x197c74u: goto label_197c74;
        case 0x197c78u: goto label_197c78;
        case 0x197c7cu: goto label_197c7c;
        case 0x197c80u: goto label_197c80;
        case 0x197c84u: goto label_197c84;
        case 0x197c88u: goto label_197c88;
        case 0x197c8cu: goto label_197c8c;
        case 0x197c90u: goto label_197c90;
        case 0x197c94u: goto label_197c94;
        case 0x197c98u: goto label_197c98;
        case 0x197c9cu: goto label_197c9c;
        case 0x197ca0u: goto label_197ca0;
        case 0x197ca4u: goto label_197ca4;
        case 0x197ca8u: goto label_197ca8;
        case 0x197cacu: goto label_197cac;
        case 0x197cb0u: goto label_197cb0;
        case 0x197cb4u: goto label_197cb4;
        case 0x197cb8u: goto label_197cb8;
        case 0x197cbcu: goto label_197cbc;
        case 0x197cc0u: goto label_197cc0;
        case 0x197cc4u: goto label_197cc4;
        default: break;
    }

    ctx->pc = 0x197ba0u;

label_197ba0:
    // 0x197ba0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x197ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_197ba4:
    // 0x197ba4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x197ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_197ba8:
    // 0x197ba8: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x197ba8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_197bac:
    // 0x197bac: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x197bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_197bb0:
    // 0x197bb0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x197bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_197bb4:
    // 0x197bb4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x197bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_197bb8:
    // 0x197bb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x197bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_197bbc:
    // 0x197bbc: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x197bbcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_197bc0:
    // 0x197bc0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x197bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_197bc4:
    // 0x197bc4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x197bc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197bc8:
    // 0x197bc8: 0x8e4627e4  lw          $a2, 0x27E4($s2)
    ctx->pc = 0x197bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_197bcc:
    // 0x197bcc: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x197bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_197bd0:
    // 0x197bd0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x197bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_197bd4:
    // 0x197bd4: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x197bd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_197bd8:
    // 0x197bd8: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x197bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_197bdc:
    // 0x197bdc: 0x60f809  jalr        $v1
label_197be0:
    if (ctx->pc == 0x197BE0u) {
        ctx->pc = 0x197BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BDCu;
        // 0x197be0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197BE4u;
        goto label_197be4;
    }
    ctx->pc = 0x197BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x197BE4u);
        ctx->pc = 0x197BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BDCu;
        // 0x197be0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197BDCu, 0x197BE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197BE4u;
label_197be4:
    // 0x197be4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x197be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_197be8:
    // 0x197be8: 0xc065f7c  jal         func_197DF0
label_197bec:
    if (ctx->pc == 0x197BECu) {
        ctx->pc = 0x197BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BE8u;
        // 0x197bec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197BF0u;
        goto label_197bf0;
    }
    ctx->pc = 0x197BE8u;
    SET_GPR_U32(ctx, 31, 0x197BF0u);
    ctx->pc = 0x197BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197BE8u;
    // 0x197bec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197DF0u, 0x197BE8u, 0x197BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197BF0u;
label_197bf0:
    // 0x197bf0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x197bf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_197bf4:
    // 0x197bf4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x197bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_197bf8:
    // 0x197bf8: 0xc11fc7e  jal         func_47F1F8
label_197bfc:
    if (ctx->pc == 0x197BFCu) {
        ctx->pc = 0x197BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BF8u;
        // 0x197bfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197C00u;
        goto label_197c00;
    }
    ctx->pc = 0x197BF8u;
    SET_GPR_U32(ctx, 31, 0x197C00u);
    ctx->pc = 0x197BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197BF8u;
    // 0x197bfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F1F8u, 0x197BF8u, 0x197C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197C00u;
label_197c00:
    // 0x197c00: 0x8e4627e4  lw          $a2, 0x27E4($s2)
    ctx->pc = 0x197c00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_197c04:
    // 0x197c04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197c08:
    // 0x197c08: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x197c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_197c0c:
    // 0x197c0c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x197c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_197c10:
    // 0x197c10: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x197c10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_197c14:
    // 0x197c14: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x197c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_197c18:
    // 0x197c18: 0x60f809  jalr        $v1
label_197c1c:
    if (ctx->pc == 0x197C1Cu) {
        ctx->pc = 0x197C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C18u;
        // 0x197c1c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197C20u;
        goto label_197c20;
    }
    ctx->pc = 0x197C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x197C20u);
        ctx->pc = 0x197C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C18u;
        // 0x197c1c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197C18u, 0x197C20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197C20u;
label_197c20:
    // 0x197c20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_197c24:
    // 0x197c24: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x197c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_197c28:
    // 0x197c28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x197c28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197c2c:
    // 0x197c2c: 0xc11eeae  jal         func_47BAB8
label_197c30:
    if (ctx->pc == 0x197C30u) {
        ctx->pc = 0x197C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C2Cu;
        // 0x197c30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197C34u;
        goto label_197c34;
    }
    ctx->pc = 0x197C2Cu;
    SET_GPR_U32(ctx, 31, 0x197C34u);
    ctx->pc = 0x197C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197C2Cu;
    // 0x197c30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x197C2Cu, 0x197C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197C34u;
label_197c34:
    // 0x197c34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_197c38:
    if (ctx->pc == 0x197C38u) {
        ctx->pc = 0x197C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C34u;
        // 0x197c38: 0x8e4627e4  lw          $a2, 0x27E4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197C3Cu;
        goto label_197c3c;
    }
    ctx->pc = 0x197C34u;
    {
        const bool branch_taken_0x197c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C34u;
        // 0x197c38: 0x8e4627e4  lw          $a2, 0x27E4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197c34) {
            ctx->pc = 0x197C4Cu;
            goto label_197c4c;
        }
    }
    ctx->pc = 0x197C3Cu;
label_197c3c:
    // 0x197c3c: 0xc11a0fc  jal         func_4683F0
label_197c40:
    if (ctx->pc == 0x197C40u) {
        ctx->pc = 0x197C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C3Cu;
        // 0x197c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197C44u;
        goto label_197c44;
    }
    ctx->pc = 0x197C3Cu;
    SET_GPR_U32(ctx, 31, 0x197C44u);
    ctx->pc = 0x197C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197C3Cu;
    // 0x197c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4683F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4683F0u, 0x197C3Cu, 0x197C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197C44u;
label_197c44:
    // 0x197c44: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x197c44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197c48:
    // 0x197c48: 0x8e4627e4  lw          $a2, 0x27E4($s2)
    ctx->pc = 0x197c48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_197c4c:
    // 0x197c4c: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x197c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_197c50:
    // 0x197c50: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x197c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_197c54:
    // 0x197c54: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x197c54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_197c58:
    // 0x197c58: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x197c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_197c5c:
    // 0x197c5c: 0x60f809  jalr        $v1
label_197c60:
    if (ctx->pc == 0x197C60u) {
        ctx->pc = 0x197C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C5Cu;
        // 0x197c60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197C64u;
        goto label_197c64;
    }
    ctx->pc = 0x197C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x197C64u);
        ctx->pc = 0x197C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C5Cu;
        // 0x197c60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197C5Cu, 0x197C64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197C64u;
label_197c64:
    // 0x197c64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_197c68:
    // 0x197c68: 0xc11fcaa  jal         func_47F2A8
label_197c6c:
    if (ctx->pc == 0x197C6Cu) {
        ctx->pc = 0x197C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C68u;
        // 0x197c6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197C70u;
        goto label_197c70;
    }
    ctx->pc = 0x197C68u;
    SET_GPR_U32(ctx, 31, 0x197C70u);
    ctx->pc = 0x197C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197C68u;
    // 0x197c6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F2A8u, 0x197C68u, 0x197C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197C70u;
label_197c70:
    // 0x197c70: 0x8e4627e4  lw          $a2, 0x27E4($s2)
    ctx->pc = 0x197c70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_197c74:
    // 0x197c74: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x197c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_197c78:
    // 0x197c78: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x197c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_197c7c:
    // 0x197c7c: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x197c7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_197c80:
    // 0x197c80: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x197c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_197c84:
    // 0x197c84: 0x60f809  jalr        $v1
label_197c88:
    if (ctx->pc == 0x197C88u) {
        ctx->pc = 0x197C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C84u;
        // 0x197c88: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197C8Cu;
        goto label_197c8c;
    }
    ctx->pc = 0x197C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x197C8Cu);
        ctx->pc = 0x197C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C84u;
        // 0x197c88: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197C84u, 0x197C8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197C8Cu;
label_197c8c:
    // 0x197c8c: 0xc11c76e  jal         func_471DB8
label_197c90:
    if (ctx->pc == 0x197C90u) {
        ctx->pc = 0x197C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C8Cu;
        // 0x197c90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197C94u;
        goto label_197c94;
    }
    ctx->pc = 0x197C8Cu;
    SET_GPR_U32(ctx, 31, 0x197C94u);
    ctx->pc = 0x197C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197C8Cu;
    // 0x197c90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471DB8u, 0x197C8Cu, 0x197C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197C94u;
label_197c94:
    // 0x197c94: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x197c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_197c98:
    // 0x197c98: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x197c98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
label_197c9c:
    // 0x197c9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x197c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_197ca0:
    // 0x197ca0: 0xac62f77c  sw          $v0, -0x884($v1)
    ctx->pc = 0x197ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965116), GPR_U32(ctx, 2));
label_197ca4:
    // 0x197ca4: 0xc11c766  jal         func_471D98
label_197ca8:
    if (ctx->pc == 0x197CA8u) {
        ctx->pc = 0x197CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CA4u;
        // 0x197ca8: 0x24a57b78  addiu       $a1, $a1, 0x7B78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197CACu;
        goto label_197cac;
    }
    ctx->pc = 0x197CA4u;
    SET_GPR_U32(ctx, 31, 0x197CACu);
    ctx->pc = 0x197CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197CA4u;
    // 0x197ca8: 0x24a57b78  addiu       $a1, $a1, 0x7B78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471D98u, 0x197CA4u, 0x197CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197CACu;
label_197cac:
    // 0x197cac: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x197cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_197cb0:
    // 0x197cb0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x197cb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_197cb4:
    // 0x197cb4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x197cb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_197cb8:
    // 0x197cb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x197cb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_197cbc:
    // 0x197cbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x197cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_197cc0:
    // 0x197cc0: 0x3e00008  jr          $ra
label_197cc4:
    if (ctx->pc == 0x197CC4u) {
        ctx->pc = 0x197CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CC0u;
        // 0x197cc4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197CC8u;
        goto label_fallthrough_0x197cc0;
    }
    ctx->pc = 0x197CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CC0u;
        // 0x197cc4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x197cc0:
    ctx->pc = 0x197CC8u;
}
