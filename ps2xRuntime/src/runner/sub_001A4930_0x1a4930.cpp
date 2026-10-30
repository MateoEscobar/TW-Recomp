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

// Function: sub_001A4930
// Address: 0x1a4930 - 0x1a4b60
void sub_001A4930_0x1a4930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4930_0x1a4930");
#endif

    switch (ctx->pc) {
        case 0x1a4930u: goto label_1a4930;
        case 0x1a4934u: goto label_1a4934;
        case 0x1a4938u: goto label_1a4938;
        case 0x1a493cu: goto label_1a493c;
        case 0x1a4940u: goto label_1a4940;
        case 0x1a4944u: goto label_1a4944;
        case 0x1a4948u: goto label_1a4948;
        case 0x1a494cu: goto label_1a494c;
        case 0x1a4950u: goto label_1a4950;
        case 0x1a4954u: goto label_1a4954;
        case 0x1a4958u: goto label_1a4958;
        case 0x1a495cu: goto label_1a495c;
        case 0x1a4960u: goto label_1a4960;
        case 0x1a4964u: goto label_1a4964;
        case 0x1a4968u: goto label_1a4968;
        case 0x1a496cu: goto label_1a496c;
        case 0x1a4970u: goto label_1a4970;
        case 0x1a4974u: goto label_1a4974;
        case 0x1a4978u: goto label_1a4978;
        case 0x1a497cu: goto label_1a497c;
        case 0x1a4980u: goto label_1a4980;
        case 0x1a4984u: goto label_1a4984;
        case 0x1a4988u: goto label_1a4988;
        case 0x1a498cu: goto label_1a498c;
        case 0x1a4990u: goto label_1a4990;
        case 0x1a4994u: goto label_1a4994;
        case 0x1a4998u: goto label_1a4998;
        case 0x1a499cu: goto label_1a499c;
        case 0x1a49a0u: goto label_1a49a0;
        case 0x1a49a4u: goto label_1a49a4;
        case 0x1a49a8u: goto label_1a49a8;
        case 0x1a49acu: goto label_1a49ac;
        case 0x1a49b0u: goto label_1a49b0;
        case 0x1a49b4u: goto label_1a49b4;
        case 0x1a49b8u: goto label_1a49b8;
        case 0x1a49bcu: goto label_1a49bc;
        case 0x1a49c0u: goto label_1a49c0;
        case 0x1a49c4u: goto label_1a49c4;
        case 0x1a49c8u: goto label_1a49c8;
        case 0x1a49ccu: goto label_1a49cc;
        case 0x1a49d0u: goto label_1a49d0;
        case 0x1a49d4u: goto label_1a49d4;
        case 0x1a49d8u: goto label_1a49d8;
        case 0x1a49dcu: goto label_1a49dc;
        case 0x1a49e0u: goto label_1a49e0;
        case 0x1a49e4u: goto label_1a49e4;
        case 0x1a49e8u: goto label_1a49e8;
        case 0x1a49ecu: goto label_1a49ec;
        case 0x1a49f0u: goto label_1a49f0;
        case 0x1a49f4u: goto label_1a49f4;
        case 0x1a49f8u: goto label_1a49f8;
        case 0x1a49fcu: goto label_1a49fc;
        case 0x1a4a00u: goto label_1a4a00;
        case 0x1a4a04u: goto label_1a4a04;
        case 0x1a4a08u: goto label_1a4a08;
        case 0x1a4a0cu: goto label_1a4a0c;
        case 0x1a4a10u: goto label_1a4a10;
        case 0x1a4a14u: goto label_1a4a14;
        case 0x1a4a18u: goto label_1a4a18;
        case 0x1a4a1cu: goto label_1a4a1c;
        case 0x1a4a20u: goto label_1a4a20;
        case 0x1a4a24u: goto label_1a4a24;
        case 0x1a4a28u: goto label_1a4a28;
        case 0x1a4a2cu: goto label_1a4a2c;
        case 0x1a4a30u: goto label_1a4a30;
        case 0x1a4a34u: goto label_1a4a34;
        case 0x1a4a38u: goto label_1a4a38;
        case 0x1a4a3cu: goto label_1a4a3c;
        case 0x1a4a40u: goto label_1a4a40;
        case 0x1a4a44u: goto label_1a4a44;
        case 0x1a4a48u: goto label_1a4a48;
        case 0x1a4a4cu: goto label_1a4a4c;
        case 0x1a4a50u: goto label_1a4a50;
        case 0x1a4a54u: goto label_1a4a54;
        case 0x1a4a58u: goto label_1a4a58;
        case 0x1a4a5cu: goto label_1a4a5c;
        case 0x1a4a60u: goto label_1a4a60;
        case 0x1a4a64u: goto label_1a4a64;
        case 0x1a4a68u: goto label_1a4a68;
        case 0x1a4a6cu: goto label_1a4a6c;
        case 0x1a4a70u: goto label_1a4a70;
        case 0x1a4a74u: goto label_1a4a74;
        case 0x1a4a78u: goto label_1a4a78;
        case 0x1a4a7cu: goto label_1a4a7c;
        case 0x1a4a80u: goto label_1a4a80;
        case 0x1a4a84u: goto label_1a4a84;
        case 0x1a4a88u: goto label_1a4a88;
        case 0x1a4a8cu: goto label_1a4a8c;
        case 0x1a4a90u: goto label_1a4a90;
        case 0x1a4a94u: goto label_1a4a94;
        case 0x1a4a98u: goto label_1a4a98;
        case 0x1a4a9cu: goto label_1a4a9c;
        case 0x1a4aa0u: goto label_1a4aa0;
        case 0x1a4aa4u: goto label_1a4aa4;
        case 0x1a4aa8u: goto label_1a4aa8;
        case 0x1a4aacu: goto label_1a4aac;
        case 0x1a4ab0u: goto label_1a4ab0;
        case 0x1a4ab4u: goto label_1a4ab4;
        case 0x1a4ab8u: goto label_1a4ab8;
        case 0x1a4abcu: goto label_1a4abc;
        case 0x1a4ac0u: goto label_1a4ac0;
        case 0x1a4ac4u: goto label_1a4ac4;
        case 0x1a4ac8u: goto label_1a4ac8;
        case 0x1a4accu: goto label_1a4acc;
        case 0x1a4ad0u: goto label_1a4ad0;
        case 0x1a4ad4u: goto label_1a4ad4;
        case 0x1a4ad8u: goto label_1a4ad8;
        case 0x1a4adcu: goto label_1a4adc;
        case 0x1a4ae0u: goto label_1a4ae0;
        case 0x1a4ae4u: goto label_1a4ae4;
        case 0x1a4ae8u: goto label_1a4ae8;
        case 0x1a4aecu: goto label_1a4aec;
        case 0x1a4af0u: goto label_1a4af0;
        case 0x1a4af4u: goto label_1a4af4;
        case 0x1a4af8u: goto label_1a4af8;
        case 0x1a4afcu: goto label_1a4afc;
        case 0x1a4b00u: goto label_1a4b00;
        case 0x1a4b04u: goto label_1a4b04;
        case 0x1a4b08u: goto label_1a4b08;
        case 0x1a4b0cu: goto label_1a4b0c;
        case 0x1a4b10u: goto label_1a4b10;
        case 0x1a4b14u: goto label_1a4b14;
        case 0x1a4b18u: goto label_1a4b18;
        case 0x1a4b1cu: goto label_1a4b1c;
        case 0x1a4b20u: goto label_1a4b20;
        case 0x1a4b24u: goto label_1a4b24;
        case 0x1a4b28u: goto label_1a4b28;
        case 0x1a4b2cu: goto label_1a4b2c;
        case 0x1a4b30u: goto label_1a4b30;
        case 0x1a4b34u: goto label_1a4b34;
        case 0x1a4b38u: goto label_1a4b38;
        case 0x1a4b3cu: goto label_1a4b3c;
        case 0x1a4b40u: goto label_1a4b40;
        case 0x1a4b44u: goto label_1a4b44;
        case 0x1a4b48u: goto label_1a4b48;
        case 0x1a4b4cu: goto label_1a4b4c;
        case 0x1a4b50u: goto label_1a4b50;
        case 0x1a4b54u: goto label_1a4b54;
        case 0x1a4b58u: goto label_1a4b58;
        case 0x1a4b5cu: goto label_1a4b5c;
        default: break;
    }

    ctx->pc = 0x1a4930u;

label_1a4930:
    // 0x1a4930: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1a4930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1a4934:
    // 0x1a4934: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1a4934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1a4938:
    // 0x1a4938: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1a4938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1a493c:
    // 0x1a493c: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x1a493cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
label_1a4940:
    // 0x1a4940: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x1a4940u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_1a4944:
    // 0x1a4944: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1a4944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1a4948:
    // 0x1a4948: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1a4948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1a494c:
    // 0x1a494c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a494cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4950:
    // 0x1a4950: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1a4950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1a4954:
    // 0x1a4954: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a4954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4958:
    // 0x1a4958: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1a4958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1a495c:
    // 0x1a495c: 0x24723ea0  addiu       $s2, $v1, 0x3EA0
    ctx->pc = 0x1a495cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 16032));
label_1a4960:
    // 0x1a4960: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a4960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1a4964:
    // 0x1a4964: 0x24533f18  addiu       $s3, $v0, 0x3F18
    ctx->pc = 0x1a4964u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16152));
label_1a4968:
    // 0x1a4968: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1a4968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_1a496c:
    // 0x1a496c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1a496cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a4970:
    // 0x1a4970: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1a4970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_1a4974:
    // 0x1a4974: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1a4974u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a4978:
    // 0x1a4978: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a4978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a497c:
    // 0x1a497c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1a497cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a4980:
    // 0x1a4980: 0x8e8927e4  lw          $t1, 0x27E4($s4)
    ctx->pc = 0x1a4980u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_1a4984:
    // 0x1a4984: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a4984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a4988:
    // 0x1a4988: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1a4988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1a498c:
    // 0x1a498c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a498cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a4990:
    // 0x1a4990: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x1a4990u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1a4994:
    // 0x1a4994: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a4994u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4998:
    // 0x1a4998: 0x85040050  lh          $a0, 0x50($t0)
    ctx->pc = 0x1a4998u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 80)));
label_1a499c:
    // 0x1a499c: 0x8d020054  lw          $v0, 0x54($t0)
    ctx->pc = 0x1a499cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
label_1a49a0:
    // 0x1a49a0: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x1a49a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_1a49a4:
    // 0x1a49a4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1a49a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a49a8:
    // 0x1a49a8: 0x40f809  jalr        $v0
label_1a49ac:
    if (ctx->pc == 0x1A49ACu) {
        ctx->pc = 0x1A49ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49A8u;
        // 0x1a49ac: 0x240900c3  addiu       $t1, $zero, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A49B0u;
        goto label_1a49b0;
    }
    ctx->pc = 0x1A49A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A49B0u);
        ctx->pc = 0x1A49ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49A8u;
        // 0x1a49ac: 0x240900c3  addiu       $t1, $zero, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A49A8u, 0x1A49B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A49B0u;
label_1a49b0:
    // 0x1a49b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a49b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a49b4:
    // 0x1a49b4: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_1a49b8:
    if (ctx->pc == 0x1A49B8u) {
        ctx->pc = 0x1A49B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49B4u;
        // 0x1a49b8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A49BCu;
        goto label_1a49bc;
    }
    ctx->pc = 0x1A49B4u;
    {
        const bool branch_taken_0x1a49b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A49B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49B4u;
        // 0x1a49b8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a49b4) {
            ctx->pc = 0x1A4A0Cu;
            goto label_1a4a0c;
        }
    }
    ctx->pc = 0x1A49BCu;
label_1a49bc:
    // 0x1a49bc: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1a49bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1a49c0:
    // 0x1a49c0: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x1a49c0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1a49c4:
    // 0x1a49c4: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1a49c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1a49c8:
    // 0x1a49c8: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x1a49c8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_1a49cc:
    // 0x1a49cc: 0x24a53ed8  addiu       $a1, $a1, 0x3ED8
    ctx->pc = 0x1a49ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16088));
label_1a49d0:
    // 0x1a49d0: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1a49d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1a49d4:
    // 0x1a49d4: 0x25083ee0  addiu       $t0, $t0, 0x3EE0
    ctx->pc = 0x1a49d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16096));
label_1a49d8:
    // 0x1a49d8: 0x254a3f08  addiu       $t2, $t2, 0x3F08
    ctx->pc = 0x1a49d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16136));
label_1a49dc:
    // 0x1a49dc: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1a49dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1a49e0:
    // 0x1a49e0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1a49e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1a49e4:
    // 0x1a49e4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a49e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a49e8:
    // 0x1a49e8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1a49e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1a49ec:
    // 0x1a49ec: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x1a49ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1a49f0:
    // 0x1a49f0: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1a49f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1a49f4:
    // 0x1a49f4: 0x40f809  jalr        $v0
label_1a49f8:
    if (ctx->pc == 0x1A49F8u) {
        ctx->pc = 0x1A49F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49F4u;
        // 0x1a49f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A49FCu;
        goto label_1a49fc;
    }
    ctx->pc = 0x1A49F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A49FCu);
        ctx->pc = 0x1A49F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49F4u;
        // 0x1a49f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A49F4u, 0x1A49FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A49FCu;
label_1a49fc:
    // 0x1a49fc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a49fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a4a00:
    // 0x1a4a00: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x1a4a00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
label_1a4a04:
    // 0x1a4a04: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a4a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a4a08:
    // 0x1a4a08: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x1a4a08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
label_1a4a0c:
    // 0x1a4a0c: 0xae300350  sw          $s0, 0x350($s1)
    ctx->pc = 0x1a4a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 848), GPR_U32(ctx, 16));
label_1a4a10:
    // 0x1a4a10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a4a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a4a14:
    // 0x1a4a14: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x1a4a14u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_1a4a18:
    // 0x1a4a18: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1a4a18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a4a1c:
    // 0x1a4a1c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1a4a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1a4a20:
    // 0x1a4a20: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a4a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a4a24:
    // 0x1a4a24: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1a4a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1a4a28:
    // 0x1a4a28: 0x240900c4  addiu       $t1, $zero, 0xC4
    ctx->pc = 0x1a4a28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
label_1a4a2c:
    // 0x1a4a2c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a4a2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4a30:
    // 0x1a4a30: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a4a30u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4a34:
    // 0x1a4a34: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1a4a34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1a4a38:
    // 0x1a4a38: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1a4a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1a4a3c:
    // 0x1a4a3c: 0x40f809  jalr        $v0
label_1a4a40:
    if (ctx->pc == 0x1A4A40u) {
        ctx->pc = 0x1A4A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4A3Cu;
        // 0x1a4a40: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4A44u;
        goto label_1a4a44;
    }
    ctx->pc = 0x1A4A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4A44u);
        ctx->pc = 0x1A4A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4A3Cu;
        // 0x1a4a40: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4A3Cu, 0x1A4A44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4A44u;
label_1a4a44:
    // 0x1a4a44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a4a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4a48:
    // 0x1a4a48: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_1a4a4c:
    if (ctx->pc == 0x1A4A4Cu) {
        ctx->pc = 0x1A4A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4A48u;
        // 0x1a4a4c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4A50u;
        goto label_1a4a50;
    }
    ctx->pc = 0x1A4A48u;
    {
        const bool branch_taken_0x1a4a48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4A48u;
        // 0x1a4a4c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4a48) {
            ctx->pc = 0x1A4AA0u;
            goto label_1a4aa0;
        }
    }
    ctx->pc = 0x1A4A50u;
label_1a4a50:
    // 0x1a4a50: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1a4a50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1a4a54:
    // 0x1a4a54: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x1a4a54u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1a4a58:
    // 0x1a4a58: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1a4a58u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1a4a5c:
    // 0x1a4a5c: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x1a4a5cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_1a4a60:
    // 0x1a4a60: 0x24a53ed8  addiu       $a1, $a1, 0x3ED8
    ctx->pc = 0x1a4a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16088));
label_1a4a64:
    // 0x1a4a64: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1a4a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1a4a68:
    // 0x1a4a68: 0x25083ee0  addiu       $t0, $t0, 0x3EE0
    ctx->pc = 0x1a4a68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16096));
label_1a4a6c:
    // 0x1a4a6c: 0x254a3f08  addiu       $t2, $t2, 0x3F08
    ctx->pc = 0x1a4a6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16136));
label_1a4a70:
    // 0x1a4a70: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1a4a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1a4a74:
    // 0x1a4a74: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1a4a74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1a4a78:
    // 0x1a4a78: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a4a78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a4a7c:
    // 0x1a4a7c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1a4a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1a4a80:
    // 0x1a4a80: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x1a4a80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1a4a84:
    // 0x1a4a84: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1a4a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1a4a88:
    // 0x1a4a88: 0x40f809  jalr        $v0
label_1a4a8c:
    if (ctx->pc == 0x1A4A8Cu) {
        ctx->pc = 0x1A4A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4A88u;
        // 0x1a4a8c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4A90u;
        goto label_1a4a90;
    }
    ctx->pc = 0x1A4A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4A90u);
        ctx->pc = 0x1A4A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4A88u;
        // 0x1a4a8c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4A88u, 0x1A4A90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4A90u;
label_1a4a90:
    // 0x1a4a90: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a4a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a4a94:
    // 0x1a4a94: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x1a4a94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
label_1a4a98:
    // 0x1a4a98: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a4a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a4a9c:
    // 0x1a4a9c: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x1a4a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
label_1a4aa0:
    // 0x1a4aa0: 0xae300354  sw          $s0, 0x354($s1)
    ctx->pc = 0x1a4aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 852), GPR_U32(ctx, 16));
label_1a4aa4:
    // 0x1a4aa4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a4aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4aa8:
    // 0x1a4aa8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a4aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a4aac:
    // 0x1a4aac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1a4aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a4ab0:
    // 0x1a4ab0: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1a4ab0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1a4ab4:
    // 0x1a4ab4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a4ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a4ab8:
    // 0x1a4ab8: 0x60f809  jalr        $v1
label_1a4abc:
    if (ctx->pc == 0x1A4ABCu) {
        ctx->pc = 0x1A4ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4AB8u;
        // 0x1a4abc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4AC0u;
        goto label_1a4ac0;
    }
    ctx->pc = 0x1A4AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A4AC0u);
        ctx->pc = 0x1A4ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4AB8u;
        // 0x1a4abc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4AB8u, 0x1A4AC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4AC0u;
label_1a4ac0:
    // 0x1a4ac0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a4ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4ac4:
    // 0x1a4ac4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1a4ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a4ac8:
    // 0x1a4ac8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1a4ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_1a4acc:
    // 0x1a4acc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a4accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4ad0:
    // 0x1a4ad0: 0x7ac20000  lq          $v0, 0x0($s6)
    ctx->pc = 0x1a4ad0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_1a4ad4:
    // 0x1a4ad4: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x1a4ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
label_1a4ad8:
    // 0x1a4ad8: 0x7ae30000  lq          $v1, 0x0($s7)
    ctx->pc = 0x1a4ad8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1a4adc:
    // 0x1a4adc: 0xae200154  sw          $zero, 0x154($s1)
    ctx->pc = 0x1a4adcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 0));
label_1a4ae0:
    // 0x1a4ae0: 0x7e230030  sq          $v1, 0x30($s1)
    ctx->pc = 0x1a4ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 3));
label_1a4ae4:
    // 0x1a4ae4: 0xae200158  sw          $zero, 0x158($s1)
    ctx->pc = 0x1a4ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 0));
label_1a4ae8:
    // 0x1a4ae8: 0x84c40040  lh          $a0, 0x40($a2)
    ctx->pc = 0x1a4ae8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 64)));
label_1a4aec:
    // 0x1a4aec: 0x8cc20044  lw          $v0, 0x44($a2)
    ctx->pc = 0x1a4aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
label_1a4af0:
    // 0x1a4af0: 0x40f809  jalr        $v0
label_1a4af4:
    if (ctx->pc == 0x1A4AF4u) {
        ctx->pc = 0x1A4AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4AF0u;
        // 0x1a4af4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4AF8u;
        goto label_1a4af8;
    }
    ctx->pc = 0x1A4AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4AF8u);
        ctx->pc = 0x1A4AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4AF0u;
        // 0x1a4af4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4AF0u, 0x1A4AF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4AF8u;
label_1a4af8:
    // 0x1a4af8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a4af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a4afc:
    // 0x1a4afc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a4afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a4b00:
    // 0x1a4b00: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1a4b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1a4b04:
    // 0x1a4b04: 0x8c46d310  lw          $a2, -0x2CF0($v0)
    ctx->pc = 0x1a4b04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
label_1a4b08:
    // 0x1a4b08: 0x26240160  addiu       $a0, $s1, 0x160
    ctx->pc = 0x1a4b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
label_1a4b0c:
    // 0x1a4b0c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1a4b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a4b10:
    // 0x1a4b10: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a4b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a4b14:
    // 0x1a4b14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a4b14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4b18:
    // 0x1a4b18: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a4b18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4b1c:
    // 0x1a4b1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a4b1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4b20:
    // 0x1a4b20: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a4b20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4b24:
    // 0x1a4b24: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a4b24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4b28:
    // 0x1a4b28: 0xc06e424  jal         func_1B9090
label_1a4b2c:
    if (ctx->pc == 0x1A4B2Cu) {
        ctx->pc = 0x1A4B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B28u;
        // 0x1a4b2c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4B30u;
        goto label_1a4b30;
    }
    ctx->pc = 0x1A4B28u;
    SET_GPR_U32(ctx, 31, 0x1A4B30u);
    ctx->pc = 0x1A4B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4B28u;
    // 0x1a4b2c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x1A4B28u, 0x1A4B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4B30u;
label_1a4b30:
    // 0x1a4b30: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1a4b30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1a4b34:
    // 0x1a4b34: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1a4b34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1a4b38:
    // 0x1a4b38: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1a4b38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1a4b3c:
    // 0x1a4b3c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1a4b3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a4b40:
    // 0x1a4b40: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1a4b40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a4b44:
    // 0x1a4b44: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a4b44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a4b48:
    // 0x1a4b48: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1a4b48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a4b4c:
    // 0x1a4b4c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1a4b4cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a4b50:
    // 0x1a4b50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a4b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a4b54:
    // 0x1a4b54: 0x3e00008  jr          $ra
label_1a4b58:
    if (ctx->pc == 0x1A4B58u) {
        ctx->pc = 0x1A4B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B54u;
        // 0x1a4b58: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4B5Cu;
        goto label_1a4b5c;
    }
    ctx->pc = 0x1A4B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B54u;
        // 0x1a4b58: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4B5Cu;
label_1a4b5c:
    // 0x1a4b5c: 0x0  nop
    ctx->pc = 0x1a4b5cu;
    // NOP
    ctx->pc = 0x1a4b60u;
}
