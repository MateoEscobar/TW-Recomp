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

// Function: sub_002D4920
// Address: 0x2d4920 - 0x2d49e8
void sub_002D4920_0x2d4920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4920_0x2d4920");
#endif

    switch (ctx->pc) {
        case 0x2d4920u: goto label_2d4920;
        case 0x2d4924u: goto label_2d4924;
        case 0x2d4928u: goto label_2d4928;
        case 0x2d492cu: goto label_2d492c;
        case 0x2d4930u: goto label_2d4930;
        case 0x2d4934u: goto label_2d4934;
        case 0x2d4938u: goto label_2d4938;
        case 0x2d493cu: goto label_2d493c;
        case 0x2d4940u: goto label_2d4940;
        case 0x2d4944u: goto label_2d4944;
        case 0x2d4948u: goto label_2d4948;
        case 0x2d494cu: goto label_2d494c;
        case 0x2d4950u: goto label_2d4950;
        case 0x2d4954u: goto label_2d4954;
        case 0x2d4958u: goto label_2d4958;
        case 0x2d495cu: goto label_2d495c;
        case 0x2d4960u: goto label_2d4960;
        case 0x2d4964u: goto label_2d4964;
        case 0x2d4968u: goto label_2d4968;
        case 0x2d496cu: goto label_2d496c;
        case 0x2d4970u: goto label_2d4970;
        case 0x2d4974u: goto label_2d4974;
        case 0x2d4978u: goto label_2d4978;
        case 0x2d497cu: goto label_2d497c;
        case 0x2d4980u: goto label_2d4980;
        case 0x2d4984u: goto label_2d4984;
        case 0x2d4988u: goto label_2d4988;
        case 0x2d498cu: goto label_2d498c;
        case 0x2d4990u: goto label_2d4990;
        case 0x2d4994u: goto label_2d4994;
        case 0x2d4998u: goto label_2d4998;
        case 0x2d499cu: goto label_2d499c;
        case 0x2d49a0u: goto label_2d49a0;
        case 0x2d49a4u: goto label_2d49a4;
        case 0x2d49a8u: goto label_2d49a8;
        case 0x2d49acu: goto label_2d49ac;
        case 0x2d49b0u: goto label_2d49b0;
        case 0x2d49b4u: goto label_2d49b4;
        case 0x2d49b8u: goto label_2d49b8;
        case 0x2d49bcu: goto label_2d49bc;
        case 0x2d49c0u: goto label_2d49c0;
        case 0x2d49c4u: goto label_2d49c4;
        case 0x2d49c8u: goto label_2d49c8;
        case 0x2d49ccu: goto label_2d49cc;
        case 0x2d49d0u: goto label_2d49d0;
        case 0x2d49d4u: goto label_2d49d4;
        case 0x2d49d8u: goto label_2d49d8;
        case 0x2d49dcu: goto label_2d49dc;
        case 0x2d49e0u: goto label_2d49e0;
        case 0x2d49e4u: goto label_2d49e4;
        default: break;
    }

    ctx->pc = 0x2d4920u;

label_2d4920:
    // 0x2d4920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d4920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d4924:
    // 0x2d4924: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d4924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2d4928:
    // 0x2d4928: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d4928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2d492c:
    // 0x2d492c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2d492cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2d4930:
    // 0x2d4930: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d4930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d4934:
    // 0x2d4934: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d4934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d4938:
    // 0x2d4938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d4938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d493c:
    // 0x2d493c: 0x24631230  addiu       $v1, $v1, 0x1230
    ctx->pc = 0x2d493cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4656));
label_2d4940:
    // 0x2d4940: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d4940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2d4944:
    // 0x2d4944: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2d4944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2d4948:
    // 0x2d4948: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2d4948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2d494c:
    // 0x2d494c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d494cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d4950:
    // 0x2d4950: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2d4950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_2d4954:
    // 0x2d4954: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x2d4954u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
label_2d4958:
    // 0x2d4958: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2d4958u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_2d495c:
    // 0x2d495c: 0x24e74b00  addiu       $a3, $a3, 0x4B00
    ctx->pc = 0x2d495cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19200));
label_2d4960:
    // 0x2d4960: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2d4960u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_2d4964:
    // 0x2d4964: 0xa2000028  sb          $zero, 0x28($s0)
    ctx->pc = 0x2d4964u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 0));
label_2d4968:
    // 0x2d4968: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2d4968u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2d496c:
    // 0x2d496c: 0x24c60090  addiu       $a2, $a2, 0x90
    ctx->pc = 0x2d496cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
label_2d4970:
    // 0x2d4970: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x2d4970u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_2d4974:
    // 0x2d4974: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2d4974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2d4978:
    // 0x2d4978: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2d4978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2d497c:
    // 0x2d497c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2d497cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2d4980:
    // 0x2d4980: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x2d4980u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_2d4984:
    // 0x2d4984: 0x84c40002  lh          $a0, 0x2($a2)
    ctx->pc = 0x2d4984u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_2d4988:
    // 0x2d4988: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d4988u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2d498c:
    // 0x2d498c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2d498cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_2d4990:
    // 0x2d4990: 0xc0cd7d2  jal         func_335F48
label_2d4994:
    if (ctx->pc == 0x2D4994u) {
        ctx->pc = 0x2D4994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4990u;
        // 0x2d4994: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4998u;
        goto label_2d4998;
    }
    ctx->pc = 0x2D4990u;
    SET_GPR_U32(ctx, 31, 0x2D4998u);
    ctx->pc = 0x2D4994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4990u;
    // 0x2d4994: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2D4990u, 0x2D4998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4998u;
label_2d4998:
    // 0x2d4998: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2d499c:
    if (ctx->pc == 0x2D499Cu) {
        ctx->pc = 0x2D499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4998u;
        // 0x2d499c: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D49A0u;
        goto label_2d49a0;
    }
    ctx->pc = 0x2D4998u;
    {
        const bool branch_taken_0x2d4998 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4998u;
        // 0x2d499c: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4998) {
            ctx->pc = 0x2D49CCu;
            goto label_2d49cc;
        }
    }
    ctx->pc = 0x2D49A0u;
label_2d49a0:
    // 0x2d49a0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x2d49a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2d49a4:
    // 0x2d49a4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2d49a8:
    if (ctx->pc == 0x2D49A8u) {
        ctx->pc = 0x2D49A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D49A4u;
        // 0x2d49a8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D49ACu;
        goto label_2d49ac;
    }
    ctx->pc = 0x2D49A4u;
    {
        const bool branch_taken_0x2d49a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D49A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D49A4u;
        // 0x2d49a8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d49a4) {
            ctx->pc = 0x2D49CCu;
            goto label_2d49cc;
        }
    }
    ctx->pc = 0x2D49ACu;
label_2d49ac:
    // 0x2d49ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d49acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d49b0:
    // 0x2d49b0: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x2d49b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_2d49b4:
    // 0x2d49b4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2d49b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2d49b8:
    // 0x2d49b8: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x2d49b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_2d49bc:
    // 0x2d49bc: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x2d49bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_2d49c0:
    // 0x2d49c0: 0x40f809  jalr        $v0
label_2d49c4:
    if (ctx->pc == 0x2D49C4u) {
        ctx->pc = 0x2D49C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D49C0u;
        // 0x2d49c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D49C8u;
        goto label_2d49c8;
    }
    ctx->pc = 0x2D49C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D49C8u);
        ctx->pc = 0x2D49C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D49C0u;
        // 0x2d49c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D49C0u, 0x2D49C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D49C8u;
label_2d49c8:
    // 0x2d49c8: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x2d49c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_2d49cc:
    // 0x2d49cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d49ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d49d0:
    // 0x2d49d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d49d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d49d4:
    // 0x2d49d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d49d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d49d8:
    // 0x2d49d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d49d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d49dc:
    // 0x2d49dc: 0x3e00008  jr          $ra
label_2d49e0:
    if (ctx->pc == 0x2D49E0u) {
        ctx->pc = 0x2D49E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D49DCu;
        // 0x2d49e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D49E4u;
        goto label_2d49e4;
    }
    ctx->pc = 0x2D49DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D49E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D49DCu;
        // 0x2d49e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D49DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D49E4u;
label_2d49e4:
    // 0x2d49e4: 0x0  nop
    ctx->pc = 0x2d49e4u;
    // NOP
    ctx->pc = 0x2d49e8u;
}
