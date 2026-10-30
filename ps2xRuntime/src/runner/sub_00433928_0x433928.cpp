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

// Function: sub_00433928
// Address: 0x433928 - 0x433a10
void sub_00433928_0x433928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00433928_0x433928");
#endif

    switch (ctx->pc) {
        case 0x43396cu: goto label_43396c;
        case 0x4339c8u: goto label_4339c8;
        default: break;
    }

    ctx->pc = 0x433928u;

    // 0x433928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x433928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x43392c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x43392cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x433930: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x433930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x433934: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x433934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433938: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x433938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x43393c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x43393Cu;
    {
        const bool branch_taken_0x43393c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43393c) {
            ctx->pc = 0x433940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43393Cu;
            // 0x433940: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x433958u;
            goto label_433958;
        }
    }
    ctx->pc = 0x433944u;
    // 0x433944: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x433944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x433948: 0x8c4369ec  lw          $v1, 0x69EC($v0)
    ctx->pc = 0x433948u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5169ECu));
    // 0x43394c: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x43394cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x433950: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x433950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x433954: 0x0  nop
    ctx->pc = 0x433954u;
    // NOP
label_433958:
    // 0x433958: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x433958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x43395c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x43395Cu;
    {
        const bool branch_taken_0x43395c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43395c) {
            ctx->pc = 0x433960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43395Cu;
            // 0x433960: 0x9604000c  lhu         $a0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x433970u;
            goto label_433970;
        }
    }
    ctx->pc = 0x433964u;
    // 0x433964: 0xc10c63e  jal         func_4318F8
    ctx->pc = 0x433964u;
    SET_GPR_U32(ctx, 31, 0x43396Cu);
    ctx->pc = 0x4318F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4318F8u, 0x433964u, 0x43396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43396Cu;
label_43396c:
    // 0x43396c: 0x9604000c  lhu         $a0, 0xC($s0)
    ctx->pc = 0x43396cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_433970:
    // 0x433970: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x433970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x433974: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x433974u;
    {
        const bool branch_taken_0x433974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x433974) {
            ctx->pc = 0x433978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x433974u;
            // 0x433978: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4339B8u;
            goto label_4339b8;
        }
    }
    ctx->pc = 0x43397Cu;
    // 0x43397c: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x43397cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x433980: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x433980u;
    {
        const bool branch_taken_0x433980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x433984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433980u;
        // 0x433984: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x433980) {
            ctx->pc = 0x433990u;
            goto label_433990;
        }
    }
    ctx->pc = 0x433988u;
    // 0x433988: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x433988u;
    {
        const bool branch_taken_0x433988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433988u;
        // 0x43398c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433988) {
            ctx->pc = 0x433A00u;
            goto label_433a00;
        }
    }
    ctx->pc = 0x433990u;
label_433990:
    // 0x433990: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x433990u;
    {
        const bool branch_taken_0x433990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x433994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433990u;
        // 0x433994: 0x3082ffdb  andi        $v0, $a0, 0xFFDB (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65499);
        ctx->in_delay_slot = false;
        if (branch_taken_0x433990) {
            ctx->pc = 0x4339A8u;
            goto label_4339a8;
        }
    }
    ctx->pc = 0x433998u;
    // 0x433998: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x433998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x43399c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x43399cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4339a0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4339a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4339a4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4339a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4339a8:
    // 0x4339a8: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x4339a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4339ac: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x4339acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x4339b0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x4339b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4339b4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4339b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4339b8:
    // 0x4339b8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4339B8u;
    {
        const bool branch_taken_0x4339b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4339b8) {
            ctx->pc = 0x4339BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4339B8u;
            // 0x4339bc: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4339CCu;
            goto label_4339cc;
        }
    }
    ctx->pc = 0x4339C0u;
    // 0x4339c0: 0xc10c944  jal         func_432510
    ctx->pc = 0x4339C0u;
    SET_GPR_U32(ctx, 31, 0x4339C8u);
    ctx->pc = 0x4339C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4339C0u;
    // 0x4339c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432510u, 0x4339C0u, 0x4339C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4339C8u;
label_4339c8:
    // 0x4339c8: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x4339c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_4339cc:
    // 0x4339cc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4339ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4339d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4339D0u;
    {
        const bool branch_taken_0x4339d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4339D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4339D0u;
        // 0x4339d4: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4339d0) {
            ctx->pc = 0x4339ECu;
            goto label_4339ec;
        }
    }
    ctx->pc = 0x4339D8u;
    // 0x4339d8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4339d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4339dc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x4339dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x4339e0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4339e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4339e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4339E4u;
    {
        const bool branch_taken_0x4339e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4339E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4339E4u;
        // 0x4339e8: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4339e4) {
            ctx->pc = 0x4339FCu;
            goto label_4339fc;
        }
    }
    ctx->pc = 0x4339ECu;
label_4339ec:
    // 0x4339ec: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4339ECu;
    {
        const bool branch_taken_0x4339ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4339F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4339ECu;
        // 0x4339f0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4339ec) {
            ctx->pc = 0x4339F8u;
            goto label_4339f8;
        }
    }
    ctx->pc = 0x4339F4u;
    // 0x4339f4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4339f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4339f8:
    // 0x4339f8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x4339f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_4339fc:
    // 0x4339fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4339fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_433a00:
    // 0x433a00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x433a00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x433a04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x433a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x433a08: 0x3e00008  jr          $ra
    ctx->pc = 0x433A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x433A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433A08u;
        // 0x433a0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x433A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x433A10u;
}
