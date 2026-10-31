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

// Function: sub_004DE938
// Address: 0x4de938 - 0x4de9c8
void sub_004DE938_0x4de938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DE938_0x4de938");
#endif

    switch (ctx->pc) {
        case 0x4de938u: goto label_4de938;
        case 0x4de93cu: goto label_4de93c;
        case 0x4de940u: goto label_4de940;
        case 0x4de944u: goto label_4de944;
        case 0x4de948u: goto label_4de948;
        case 0x4de94cu: goto label_4de94c;
        case 0x4de950u: goto label_4de950;
        case 0x4de954u: goto label_4de954;
        case 0x4de958u: goto label_4de958;
        case 0x4de95cu: goto label_4de95c;
        case 0x4de960u: goto label_4de960;
        case 0x4de964u: goto label_4de964;
        case 0x4de968u: goto label_4de968;
        case 0x4de96cu: goto label_4de96c;
        case 0x4de970u: goto label_4de970;
        case 0x4de974u: goto label_4de974;
        case 0x4de978u: goto label_4de978;
        case 0x4de97cu: goto label_4de97c;
        case 0x4de980u: goto label_4de980;
        case 0x4de984u: goto label_4de984;
        case 0x4de988u: goto label_4de988;
        case 0x4de98cu: goto label_4de98c;
        case 0x4de990u: goto label_4de990;
        case 0x4de994u: goto label_4de994;
        case 0x4de998u: goto label_4de998;
        case 0x4de99cu: goto label_4de99c;
        case 0x4de9a0u: goto label_4de9a0;
        case 0x4de9a4u: goto label_4de9a4;
        case 0x4de9a8u: goto label_4de9a8;
        case 0x4de9acu: goto label_4de9ac;
        case 0x4de9b0u: goto label_4de9b0;
        case 0x4de9b4u: goto label_4de9b4;
        case 0x4de9b8u: goto label_4de9b8;
        case 0x4de9bcu: goto label_4de9bc;
        case 0x4de9c0u: goto label_4de9c0;
        case 0x4de9c4u: goto label_4de9c4;
        default: break;
    }

    ctx->pc = 0x4de938u;

label_4de938:
    // 0x4de938: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4de938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4de93c:
    // 0x4de93c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4de93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4de940:
    // 0x4de940: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4de940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4de944:
    // 0x4de944: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4de944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4de948:
    // 0x4de948: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4de948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4de94c:
    // 0x4de94c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4de94cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4de950:
    // 0x4de950: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4de950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4de954:
    // 0x4de954: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4de958:
    if (ctx->pc == 0x4DE958u) {
        ctx->pc = 0x4DE958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE954u;
        // 0x4de958: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE95Cu;
        goto label_4de95c;
    }
    ctx->pc = 0x4DE954u;
    {
        const bool branch_taken_0x4de954 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE954u;
        // 0x4de958: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de954) {
            ctx->pc = 0x4DE99Cu;
            goto label_4de99c;
        }
    }
    ctx->pc = 0x4DE95Cu;
label_4de95c:
    // 0x4de95c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4de95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4de960:
    // 0x4de960: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4de960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4de964:
    // 0x4de964: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4de964u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4de968:
    // 0x4de968: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4de968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4de96c:
    // 0x4de96c: 0x60f809  jalr        $v1
label_4de970:
    if (ctx->pc == 0x4DE970u) {
        ctx->pc = 0x4DE970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE96Cu;
        // 0x4de970: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE974u;
        goto label_4de974;
    }
    ctx->pc = 0x4DE96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DE974u);
        ctx->pc = 0x4DE970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE96Cu;
        // 0x4de970: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE96Cu, 0x4DE974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DE974u;
label_4de974:
    // 0x4de974: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4de974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4de978:
    // 0x4de978: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4de978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4de97c:
    // 0x4de97c: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4de97cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4de980:
    // 0x4de980: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4de980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4de984:
    // 0x4de984: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4de984u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4de988:
    // 0x4de988: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4de988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4de98c:
    // 0x4de98c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4de98cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4de990:
    // 0x4de990: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4de990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4de994:
    // 0x4de994: 0x60f809  jalr        $v1
label_4de998:
    if (ctx->pc == 0x4DE998u) {
        ctx->pc = 0x4DE998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE994u;
        // 0x4de998: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE99Cu;
        goto label_4de99c;
    }
    ctx->pc = 0x4DE994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DE99Cu);
        ctx->pc = 0x4DE998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE994u;
        // 0x4de998: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE994u, 0x4DE99Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DE99Cu;
label_4de99c:
    // 0x4de99c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4de99cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4de9a0:
    // 0x4de9a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4de9a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4de9a4:
    // 0x4de9a4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4de9a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4de9a8:
    // 0x4de9a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4de9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4de9ac:
    // 0x4de9ac: 0x3e00008  jr          $ra
label_4de9b0:
    if (ctx->pc == 0x4DE9B0u) {
        ctx->pc = 0x4DE9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE9ACu;
        // 0x4de9b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE9B4u;
        goto label_4de9b4;
    }
    ctx->pc = 0x4DE9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE9ACu;
        // 0x4de9b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DE9B4u;
label_4de9b4:
    // 0x4de9b4: 0x0  nop
    ctx->pc = 0x4de9b4u;
    // NOP
label_4de9b8:
    // 0x4de9b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4de9b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4de9bc:
    // 0x4de9bc: 0x0  nop
    ctx->pc = 0x4de9bcu;
    // NOP
label_4de9c0:
    // 0x4de9c0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4de9c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4de9c4:
    // 0x4de9c4: 0x0  nop
    ctx->pc = 0x4de9c4u;
    // NOP
    ctx->pc = 0x4de9c8u;
}
