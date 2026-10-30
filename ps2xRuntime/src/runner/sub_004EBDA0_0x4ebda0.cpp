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

// Function: sub_004EBDA0
// Address: 0x4ebda0 - 0x4ebe20
void sub_004EBDA0_0x4ebda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EBDA0_0x4ebda0");
#endif

    switch (ctx->pc) {
        case 0x4ebda0u: goto label_4ebda0;
        case 0x4ebda4u: goto label_4ebda4;
        case 0x4ebda8u: goto label_4ebda8;
        case 0x4ebdacu: goto label_4ebdac;
        case 0x4ebdb0u: goto label_4ebdb0;
        case 0x4ebdb4u: goto label_4ebdb4;
        case 0x4ebdb8u: goto label_4ebdb8;
        case 0x4ebdbcu: goto label_4ebdbc;
        case 0x4ebdc0u: goto label_4ebdc0;
        case 0x4ebdc4u: goto label_4ebdc4;
        case 0x4ebdc8u: goto label_4ebdc8;
        case 0x4ebdccu: goto label_4ebdcc;
        case 0x4ebdd0u: goto label_4ebdd0;
        case 0x4ebdd4u: goto label_4ebdd4;
        case 0x4ebdd8u: goto label_4ebdd8;
        case 0x4ebddcu: goto label_4ebddc;
        case 0x4ebde0u: goto label_4ebde0;
        case 0x4ebde4u: goto label_4ebde4;
        case 0x4ebde8u: goto label_4ebde8;
        case 0x4ebdecu: goto label_4ebdec;
        case 0x4ebdf0u: goto label_4ebdf0;
        case 0x4ebdf4u: goto label_4ebdf4;
        case 0x4ebdf8u: goto label_4ebdf8;
        case 0x4ebdfcu: goto label_4ebdfc;
        case 0x4ebe00u: goto label_4ebe00;
        case 0x4ebe04u: goto label_4ebe04;
        case 0x4ebe08u: goto label_4ebe08;
        case 0x4ebe0cu: goto label_4ebe0c;
        case 0x4ebe10u: goto label_4ebe10;
        case 0x4ebe14u: goto label_4ebe14;
        case 0x4ebe18u: goto label_4ebe18;
        case 0x4ebe1cu: goto label_4ebe1c;
        default: break;
    }

    ctx->pc = 0x4ebda0u;

label_4ebda0:
    // 0x4ebda0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ebda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4ebda4:
    // 0x4ebda4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ebda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4ebda8:
    // 0x4ebda8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ebda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ebdac:
    // 0x4ebdac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ebdacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ebdb0:
    // 0x4ebdb0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4ebdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4ebdb4:
    // 0x4ebdb4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ebdb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ebdb8:
    // 0x4ebdb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ebdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ebdbc:
    // 0x4ebdbc: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4ebdc0:
    if (ctx->pc == 0x4EBDC0u) {
        ctx->pc = 0x4EBDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBDBCu;
        // 0x4ebdc0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBDC4u;
        goto label_4ebdc4;
    }
    ctx->pc = 0x4EBDBCu;
    {
        const bool branch_taken_0x4ebdbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EBDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBDBCu;
        // 0x4ebdc0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ebdbc) {
            ctx->pc = 0x4EBE04u;
            goto label_4ebe04;
        }
    }
    ctx->pc = 0x4EBDC4u;
label_4ebdc4:
    // 0x4ebdc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ebdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ebdc8:
    // 0x4ebdc8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ebdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ebdcc:
    // 0x4ebdcc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4ebdccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4ebdd0:
    // 0x4ebdd0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4ebdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4ebdd4:
    // 0x4ebdd4: 0x60f809  jalr        $v1
label_4ebdd8:
    if (ctx->pc == 0x4EBDD8u) {
        ctx->pc = 0x4EBDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBDD4u;
        // 0x4ebdd8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBDDCu;
        goto label_4ebddc;
    }
    ctx->pc = 0x4EBDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EBDDCu);
        ctx->pc = 0x4EBDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBDD4u;
        // 0x4ebdd8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBDD4u, 0x4EBDDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EBDDCu;
label_4ebddc:
    // 0x4ebddc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4ebddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4ebde0:
    // 0x4ebde0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ebde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ebde4:
    // 0x4ebde4: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4ebde4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4ebde8:
    // 0x4ebde8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ebde8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ebdec:
    // 0x4ebdec: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4ebdecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ebdf0:
    // 0x4ebdf0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ebdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4ebdf4:
    // 0x4ebdf4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4ebdf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4ebdf8:
    // 0x4ebdf8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4ebdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4ebdfc:
    // 0x4ebdfc: 0x60f809  jalr        $v1
label_4ebe00:
    if (ctx->pc == 0x4EBE00u) {
        ctx->pc = 0x4EBE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBDFCu;
        // 0x4ebe00: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBE04u;
        goto label_4ebe04;
    }
    ctx->pc = 0x4EBDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EBE04u);
        ctx->pc = 0x4EBE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBDFCu;
        // 0x4ebe00: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBDFCu, 0x4EBE04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EBE04u;
label_4ebe04:
    // 0x4ebe04: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4ebe04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ebe08:
    // 0x4ebe08: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ebe08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ebe0c:
    // 0x4ebe0c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4ebe0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ebe10:
    // 0x4ebe10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ebe10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ebe14:
    // 0x4ebe14: 0x3e00008  jr          $ra
label_4ebe18:
    if (ctx->pc == 0x4EBE18u) {
        ctx->pc = 0x4EBE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBE14u;
        // 0x4ebe18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBE1Cu;
        goto label_4ebe1c;
    }
    ctx->pc = 0x4EBE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EBE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBE14u;
        // 0x4ebe18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBE14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EBE1Cu;
label_4ebe1c:
    // 0x4ebe1c: 0x0  nop
    ctx->pc = 0x4ebe1cu;
    // NOP
    ctx->pc = 0x4ebe20u;
}
