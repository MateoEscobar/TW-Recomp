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

// Function: sub_00330BC0
// Address: 0x330bc0 - 0x330e10
void sub_00330BC0_0x330bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330BC0_0x330bc0");
#endif

    switch (ctx->pc) {
        case 0x330becu: goto label_330bec;
        case 0x330bf0u: goto label_330bf0;
        case 0x330c28u: goto label_330c28;
        case 0x330c44u: goto label_330c44;
        case 0x330c80u: goto label_330c80;
        case 0x330cb8u: goto label_330cb8;
        case 0x330d00u: goto label_330d00;
        case 0x330d24u: goto label_330d24;
        case 0x330d80u: goto label_330d80;
        case 0x330db4u: goto label_330db4;
        case 0x330dd4u: goto label_330dd4;
        default: break;
    }

    ctx->pc = 0x330bc0u;

label_330bc0:
    // 0x330bc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x330bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x330bc4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x330bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x330bc8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x330bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x330bcc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x330bccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330bd0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x330bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x330bd4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x330bd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330bd8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x330bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x330bdc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x330bdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330be0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x330be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x330be4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x330be4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330be8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x330be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_330bec:
    // 0x330bec: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x330becu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_330bf0:
    // 0x330bf0: 0x2c62002a  sltiu       $v0, $v1, 0x2A
    ctx->pc = 0x330bf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)42) ? 1 : 0);
    // 0x330bf4: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x330BF4u;
    {
        const bool branch_taken_0x330bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330BF4u;
        // 0x330bf8: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330bf4) {
            ctx->pc = 0x330CF4u;
            goto label_330cf4;
        }
    }
    ctx->pc = 0x330BFCu;
    // 0x330bfc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x330bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x330c00: 0x24426040  addiu       $v0, $v0, 0x6040
    ctx->pc = 0x330c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24640));
    // 0x330c04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x330c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x330c08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x330c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x330c0c: 0x800008  jr          $a0
    ctx->pc = 0x330C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x330C14u: goto label_330c14;
            case 0x330C30u: goto label_330c30;
            case 0x330C4Cu: goto label_330c4c;
            case 0x330CCCu: goto label_330ccc;
            case 0x330CD4u: goto label_330cd4;
            case 0x330CF4u: goto label_330cf4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330C0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x330C14u;
label_330c14:
    // 0x330c14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x330c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330c18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x330c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330c1c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x330c1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330c20: 0xc0cc27c  jal         func_3309F0
    ctx->pc = 0x330C20u;
    SET_GPR_U32(ctx, 31, 0x330C28u);
    ctx->pc = 0x330C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330C20u;
    // 0x330c24: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3309F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3309F0u, 0x330C20u, 0x330C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330C28u;
label_330c28:
    // 0x330c28: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x330C28u;
    {
        const bool branch_taken_0x330c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330C28u;
        // 0x330c2c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330c28) {
            ctx->pc = 0x330DF4u;
            goto label_330df4;
        }
    }
    ctx->pc = 0x330C30u;
label_330c30:
    // 0x330c30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x330c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330c34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x330c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330c38: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x330c38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330c3c: 0xc0cc2aa  jal         func_330AA8
    ctx->pc = 0x330C3Cu;
    SET_GPR_U32(ctx, 31, 0x330C44u);
    ctx->pc = 0x330C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330C3Cu;
    // 0x330c40: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330AA8u, 0x330C3Cu, 0x330C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330C44u;
label_330c44:
    // 0x330c44: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x330C44u;
    {
        const bool branch_taken_0x330c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330C44u;
        // 0x330c48: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330c44) {
            ctx->pc = 0x330DF4u;
            goto label_330df4;
        }
    }
    ctx->pc = 0x330C4Cu;
label_330c4c:
    // 0x330c4c: 0x92260001  lbu         $a2, 0x1($s1)
    ctx->pc = 0x330c4cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x330c50: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x330c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x330c54: 0x2442c531  addiu       $v0, $v0, -0x3ACF
    ctx->pc = 0x330c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952241));
    // 0x330c58: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x330c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x330c5c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x330c5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x330c60: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x330c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x330c64: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x330C64u;
    {
        const bool branch_taken_0x330c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x330C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330C64u;
        // 0x330c68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330c64) {
            ctx->pc = 0x330C94u;
            goto label_330c94;
        }
    }
    ctx->pc = 0x330C6Cu;
    // 0x330c6c: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x330c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x330c70: 0x63603  sra         $a2, $a2, 24
    ctx->pc = 0x330c70u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 24));
    // 0x330c74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x330c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330c78: 0xc0cc2d0  jal         func_330B40
    ctx->pc = 0x330C78u;
    SET_GPR_U32(ctx, 31, 0x330C80u);
    ctx->pc = 0x330C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330C78u;
    // 0x330c7c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330B40u, 0x330C78u, 0x330C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330C80u;
label_330c80:
    // 0x330c80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x330c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330c84: 0x12000059  beqz        $s0, . + 4 + (0x59 << 2)
    ctx->pc = 0x330C84u;
    {
        const bool branch_taken_0x330c84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x330C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330C84u;
        // 0x330c88: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330c84) {
            ctx->pc = 0x330DECu;
            goto label_330dec;
        }
    }
    ctx->pc = 0x330C8Cu;
    // 0x330c8c: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x330C8Cu;
    {
        const bool branch_taken_0x330c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330C8Cu;
        // 0x330c90: 0x82230000  lb          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330c8c) {
            ctx->pc = 0x330BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330bf0;
        }
    }
    ctx->pc = 0x330C94u;
label_330c94:
    // 0x330c94: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x330c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x330c98: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x330c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x330c9c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x330c9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x330ca0: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x330CA0u;
    {
        const bool branch_taken_0x330ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x330CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330CA0u;
        // 0x330ca4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330ca0) {
            ctx->pc = 0x330CF8u;
            goto label_330cf8;
        }
    }
    ctx->pc = 0x330CA8u;
    // 0x330ca8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x330ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330cac: 0x26260002  addiu       $a2, $s1, 0x2
    ctx->pc = 0x330cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x330cb0: 0xc0cc1f2  jal         func_3307C8
    ctx->pc = 0x330CB0u;
    SET_GPR_U32(ctx, 31, 0x330CB8u);
    ctx->pc = 0x330CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330CB0u;
    // 0x330cb4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3307C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3307C8u, 0x330CB0u, 0x330CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330CB8u;
label_330cb8:
    // 0x330cb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x330cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330cbc: 0x1200004b  beqz        $s0, . + 4 + (0x4B << 2)
    ctx->pc = 0x330CBCu;
    {
        const bool branch_taken_0x330cbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x330CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330CBCu;
        // 0x330cc0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330cbc) {
            ctx->pc = 0x330DECu;
            goto label_330dec;
        }
    }
    ctx->pc = 0x330CC4u;
    // 0x330cc4: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x330CC4u;
    {
        const bool branch_taken_0x330cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330CC4u;
        // 0x330cc8: 0x82230000  lb          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330cc4) {
            ctx->pc = 0x330BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330bf0;
        }
    }
    ctx->pc = 0x330CCCu;
label_330ccc:
    // 0x330ccc: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x330CCCu;
    {
        const bool branch_taken_0x330ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330CCCu;
        // 0x330cd0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330ccc) {
            ctx->pc = 0x330DF0u;
            goto label_330df0;
        }
    }
    ctx->pc = 0x330CD4u;
label_330cd4:
    // 0x330cd4: 0x82220001  lb          $v0, 0x1($s1)
    ctx->pc = 0x330cd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x330cd8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x330CD8u;
    {
        const bool branch_taken_0x330cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330CD8u;
        // 0x330cdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330cd8) {
            ctx->pc = 0x330CF8u;
            goto label_330cf8;
        }
    }
    ctx->pc = 0x330CE0u;
    // 0x330ce0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x330ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x330ce4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x330ce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330ce8: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x330ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x330cec: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x330CECu;
    {
        const bool branch_taken_0x330cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330CECu;
        // 0x330cf0: 0x203100a  movz        $v0, $s0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330cec) {
            ctx->pc = 0x330DF0u;
            goto label_330df0;
        }
    }
    ctx->pc = 0x330CF4u;
label_330cf4:
    // 0x330cf4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x330cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_330cf8:
    // 0x330cf8: 0xc0cc10a  jal         func_330428
    ctx->pc = 0x330CF8u;
    SET_GPR_U32(ctx, 31, 0x330D00u);
    ctx->pc = 0x330CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330CF8u;
    // 0x330cfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330428u, 0x330CF8u, 0x330D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330D00u;
label_330d00:
    // 0x330d00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x330d00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330d04: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x330d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x330d08: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x330d08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x330d0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x330D0Cu;
    {
        const bool branch_taken_0x330d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330D0Cu;
        // 0x330d10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330d0c) {
            ctx->pc = 0x330D28u;
            goto label_330d28;
        }
    }
    ctx->pc = 0x330D14u;
    // 0x330d14: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x330d14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x330d18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x330d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330d1c: 0xc0cc1d2  jal         func_330748
    ctx->pc = 0x330D1Cu;
    SET_GPR_U32(ctx, 31, 0x330D24u);
    ctx->pc = 0x330D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330D1Cu;
    // 0x330d20: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330748u, 0x330D1Cu, 0x330D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330D24u;
label_330d24:
    // 0x330d24: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x330d24u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_330d28:
    // 0x330d28: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x330d28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x330d2c: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x330d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x330d30: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x330D30u;
    {
        const bool branch_taken_0x330d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x330D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330D30u;
        // 0x330d34: 0x2862002c  slti        $v0, $v1, 0x2C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)44) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330d30) {
            ctx->pc = 0x330D98u;
            goto label_330d98;
        }
    }
    ctx->pc = 0x330D38u;
    // 0x330d38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x330D38u;
    {
        const bool branch_taken_0x330d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330D38u;
        // 0x330d3c: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330d38) {
            ctx->pc = 0x330D50u;
            goto label_330d50;
        }
    }
    ctx->pc = 0x330D40u;
    // 0x330d40: 0x50620013  beql        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x330D40u;
    {
        const bool branch_taken_0x330d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x330d40) {
            ctx->pc = 0x330D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330D40u;
            // 0x330d44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330D90u;
            goto label_330d90;
        }
    }
    ctx->pc = 0x330D48u;
    // 0x330d48: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x330D48u;
    {
        const bool branch_taken_0x330d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330d48) {
            ctx->pc = 0x330DDCu;
            goto label_330ddc;
        }
    }
    ctx->pc = 0x330D50u;
label_330d50:
    // 0x330d50: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x330d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x330d54: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x330D54u;
    {
        const bool branch_taken_0x330d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x330D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330D54u;
        // 0x330d58: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330d54) {
            ctx->pc = 0x330DBCu;
            goto label_330dbc;
        }
    }
    ctx->pc = 0x330D5Cu;
    // 0x330d5c: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x330D5Cu;
    {
        const bool branch_taken_0x330d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x330d5c) {
            ctx->pc = 0x330DDCu;
            goto label_330ddc;
        }
    }
    ctx->pc = 0x330D64u;
    // 0x330d64: 0x1080ffa1  beqz        $a0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x330D64u;
    {
        const bool branch_taken_0x330d64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x330D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330D64u;
        // 0x330d68: 0x26510001  addiu       $s1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330d64) {
            ctx->pc = 0x330BECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330bec;
        }
    }
    ctx->pc = 0x330D6Cu;
    // 0x330d6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x330d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330d70: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x330d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x330d74: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x330d74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330d78: 0xc0cc2f0  jal         func_330BC0
    ctx->pc = 0x330D78u;
    SET_GPR_U32(ctx, 31, 0x330D80u);
    ctx->pc = 0x330D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330D78u;
    // 0x330d7c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330BC0u;
    goto label_330bc0;
    ctx->pc = 0x330D80u;
label_330d80:
    // 0x330d80: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x330D80u;
    {
        const bool branch_taken_0x330d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x330d80) {
            ctx->pc = 0x330D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330D80u;
            // 0x330d84: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330DF4u;
            goto label_330df4;
        }
    }
    ctx->pc = 0x330D88u;
    // 0x330d88: 0x1000ff99  b           . + 4 + (-0x67 << 2)
    ctx->pc = 0x330D88u;
    {
        const bool branch_taken_0x330d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330D88u;
        // 0x330d8c: 0x82230000  lb          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330d88) {
            ctx->pc = 0x330BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330bf0;
        }
    }
    ctx->pc = 0x330D90u;
label_330d90:
    // 0x330d90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x330D90u;
    {
        const bool branch_taken_0x330d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330D90u;
        // 0x330d94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330d90) {
            ctx->pc = 0x330DA4u;
            goto label_330da4;
        }
    }
    ctx->pc = 0x330D98u;
label_330d98:
    // 0x330d98: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x330D98u;
    {
        const bool branch_taken_0x330d98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x330D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330D98u;
        // 0x330d9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330d98) {
            ctx->pc = 0x330DECu;
            goto label_330dec;
        }
    }
    ctx->pc = 0x330DA0u;
    // 0x330da0: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x330da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_330da4:
    // 0x330da4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x330da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330da8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x330da8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330dac: 0xc0cc222  jal         func_330888
    ctx->pc = 0x330DACu;
    SET_GPR_U32(ctx, 31, 0x330DB4u);
    ctx->pc = 0x330DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330DACu;
    // 0x330db0: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330888u, 0x330DACu, 0x330DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330DB4u;
label_330db4:
    // 0x330db4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x330DB4u;
    {
        const bool branch_taken_0x330db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330DB4u;
        // 0x330db8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330db4) {
            ctx->pc = 0x330DF4u;
            goto label_330df4;
        }
    }
    ctx->pc = 0x330DBCu;
label_330dbc:
    // 0x330dbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x330dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330dc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x330dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330dc4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x330dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330dc8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x330dc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330dcc: 0xc0cc256  jal         func_330958
    ctx->pc = 0x330DCCu;
    SET_GPR_U32(ctx, 31, 0x330DD4u);
    ctx->pc = 0x330DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330DCCu;
    // 0x330dd0: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330958u, 0x330DCCu, 0x330DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330DD4u;
label_330dd4:
    // 0x330dd4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x330DD4u;
    {
        const bool branch_taken_0x330dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330DD4u;
        // 0x330dd8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330dd4) {
            ctx->pc = 0x330DF4u;
            goto label_330df4;
        }
    }
    ctx->pc = 0x330DDCu;
label_330ddc:
    // 0x330ddc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x330DDCu;
    {
        const bool branch_taken_0x330ddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x330DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330DDCu;
        // 0x330de0: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330ddc) {
            ctx->pc = 0x330DECu;
            goto label_330dec;
        }
    }
    ctx->pc = 0x330DE4u;
    // 0x330de4: 0x1000ff81  b           . + 4 + (-0x7F << 2)
    ctx->pc = 0x330DE4u;
    {
        const bool branch_taken_0x330de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330DE4u;
        // 0x330de8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330de4) {
            ctx->pc = 0x330BECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330bec;
        }
    }
    ctx->pc = 0x330DECu;
label_330dec:
    // 0x330dec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x330decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_330df0:
    // 0x330df0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x330df0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_330df4:
    // 0x330df4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x330df4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x330df8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x330df8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x330dfc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x330dfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x330e00: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x330e00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x330e04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x330e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330e08: 0x3e00008  jr          $ra
    ctx->pc = 0x330E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330E08u;
        // 0x330e0c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330E10u;
}
