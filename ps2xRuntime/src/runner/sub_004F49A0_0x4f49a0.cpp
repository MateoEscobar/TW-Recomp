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

// Function: sub_004F49A0
// Address: 0x4f49a0 - 0x4f4a20
void sub_004F49A0_0x4f49a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F49A0_0x4f49a0");
#endif

    switch (ctx->pc) {
        case 0x4f49a0u: goto label_4f49a0;
        case 0x4f49a4u: goto label_4f49a4;
        case 0x4f49a8u: goto label_4f49a8;
        case 0x4f49acu: goto label_4f49ac;
        case 0x4f49b0u: goto label_4f49b0;
        case 0x4f49b4u: goto label_4f49b4;
        case 0x4f49b8u: goto label_4f49b8;
        case 0x4f49bcu: goto label_4f49bc;
        case 0x4f49c0u: goto label_4f49c0;
        case 0x4f49c4u: goto label_4f49c4;
        case 0x4f49c8u: goto label_4f49c8;
        case 0x4f49ccu: goto label_4f49cc;
        case 0x4f49d0u: goto label_4f49d0;
        case 0x4f49d4u: goto label_4f49d4;
        case 0x4f49d8u: goto label_4f49d8;
        case 0x4f49dcu: goto label_4f49dc;
        case 0x4f49e0u: goto label_4f49e0;
        case 0x4f49e4u: goto label_4f49e4;
        case 0x4f49e8u: goto label_4f49e8;
        case 0x4f49ecu: goto label_4f49ec;
        case 0x4f49f0u: goto label_4f49f0;
        case 0x4f49f4u: goto label_4f49f4;
        case 0x4f49f8u: goto label_4f49f8;
        case 0x4f49fcu: goto label_4f49fc;
        case 0x4f4a00u: goto label_4f4a00;
        case 0x4f4a04u: goto label_4f4a04;
        case 0x4f4a08u: goto label_4f4a08;
        case 0x4f4a0cu: goto label_4f4a0c;
        case 0x4f4a10u: goto label_4f4a10;
        case 0x4f4a14u: goto label_4f4a14;
        case 0x4f4a18u: goto label_4f4a18;
        case 0x4f4a1cu: goto label_4f4a1c;
        default: break;
    }

    ctx->pc = 0x4f49a0u;

label_4f49a0:
    // 0x4f49a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4f49a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4f49a4:
    // 0x4f49a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4f49a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4f49a8:
    // 0x4f49a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4f49a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4f49ac:
    // 0x4f49ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f49acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f49b0:
    // 0x4f49b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4f49b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4f49b4:
    // 0x4f49b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4f49b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f49b8:
    // 0x4f49b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f49b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f49bc:
    // 0x4f49bc: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4f49c0:
    if (ctx->pc == 0x4F49C0u) {
        ctx->pc = 0x4F49C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F49BCu;
        // 0x4f49c0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F49C4u;
        goto label_4f49c4;
    }
    ctx->pc = 0x4F49BCu;
    {
        const bool branch_taken_0x4f49bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F49C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F49BCu;
        // 0x4f49c0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f49bc) {
            ctx->pc = 0x4F4A04u;
            goto label_4f4a04;
        }
    }
    ctx->pc = 0x4F49C4u;
label_4f49c4:
    // 0x4f49c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4f49c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f49c8:
    // 0x4f49c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4f49c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f49cc:
    // 0x4f49cc: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4f49ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4f49d0:
    // 0x4f49d0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4f49d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4f49d4:
    // 0x4f49d4: 0x60f809  jalr        $v1
label_4f49d8:
    if (ctx->pc == 0x4F49D8u) {
        ctx->pc = 0x4F49D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F49D4u;
        // 0x4f49d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F49DCu;
        goto label_4f49dc;
    }
    ctx->pc = 0x4F49D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F49DCu);
        ctx->pc = 0x4F49D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F49D4u;
        // 0x4f49d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F49D4u, 0x4F49DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F49DCu;
label_4f49dc:
    // 0x4f49dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4f49dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4f49e0:
    // 0x4f49e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f49e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f49e4:
    // 0x4f49e4: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4f49e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4f49e8:
    // 0x4f49e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4f49e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f49ec:
    // 0x4f49ec: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4f49ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f49f0:
    // 0x4f49f0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f49f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f49f4:
    // 0x4f49f4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f49f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f49f8:
    // 0x4f49f8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f49f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f49fc:
    // 0x4f49fc: 0x60f809  jalr        $v1
label_4f4a00:
    if (ctx->pc == 0x4F4A00u) {
        ctx->pc = 0x4F4A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F49FCu;
        // 0x4f4a00: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4A04u;
        goto label_4f4a04;
    }
    ctx->pc = 0x4F49FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F4A04u);
        ctx->pc = 0x4F4A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F49FCu;
        // 0x4f4a00: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F49FCu, 0x4F4A04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F4A04u;
label_4f4a04:
    // 0x4f4a04: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4f4a04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f4a08:
    // 0x4f4a08: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4f4a08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f4a0c:
    // 0x4f4a0c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4f4a0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f4a10:
    // 0x4f4a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f4a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f4a14:
    // 0x4f4a14: 0x3e00008  jr          $ra
label_4f4a18:
    if (ctx->pc == 0x4F4A18u) {
        ctx->pc = 0x4F4A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4A14u;
        // 0x4f4a18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4A1Cu;
        goto label_4f4a1c;
    }
    ctx->pc = 0x4F4A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4A14u;
        // 0x4f4a18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F4A1Cu;
label_4f4a1c:
    // 0x4f4a1c: 0x0  nop
    ctx->pc = 0x4f4a1cu;
    // NOP
    ctx->pc = 0x4f4a20u;
}
