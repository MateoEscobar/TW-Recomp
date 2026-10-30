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

// Function: sub_00470960
// Address: 0x470960 - 0x470c18
void sub_00470960_0x470960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00470960_0x470960");
#endif

    switch (ctx->pc) {
        case 0x470960u: goto label_470960;
        case 0x470964u: goto label_470964;
        case 0x470968u: goto label_470968;
        case 0x47096cu: goto label_47096c;
        case 0x470970u: goto label_470970;
        case 0x470974u: goto label_470974;
        case 0x470978u: goto label_470978;
        case 0x47097cu: goto label_47097c;
        case 0x470980u: goto label_470980;
        case 0x470984u: goto label_470984;
        case 0x470988u: goto label_470988;
        case 0x47098cu: goto label_47098c;
        case 0x470990u: goto label_470990;
        case 0x470994u: goto label_470994;
        case 0x470998u: goto label_470998;
        case 0x47099cu: goto label_47099c;
        case 0x4709a0u: goto label_4709a0;
        case 0x4709a4u: goto label_4709a4;
        case 0x4709a8u: goto label_4709a8;
        case 0x4709acu: goto label_4709ac;
        case 0x4709b0u: goto label_4709b0;
        case 0x4709b4u: goto label_4709b4;
        case 0x4709b8u: goto label_4709b8;
        case 0x4709bcu: goto label_4709bc;
        case 0x4709c0u: goto label_4709c0;
        case 0x4709c4u: goto label_4709c4;
        case 0x4709c8u: goto label_4709c8;
        case 0x4709ccu: goto label_4709cc;
        case 0x4709d0u: goto label_4709d0;
        case 0x4709d4u: goto label_4709d4;
        case 0x4709d8u: goto label_4709d8;
        case 0x4709dcu: goto label_4709dc;
        case 0x4709e0u: goto label_4709e0;
        case 0x4709e4u: goto label_4709e4;
        case 0x4709e8u: goto label_4709e8;
        case 0x4709ecu: goto label_4709ec;
        case 0x4709f0u: goto label_4709f0;
        case 0x4709f4u: goto label_4709f4;
        case 0x4709f8u: goto label_4709f8;
        case 0x4709fcu: goto label_4709fc;
        case 0x470a00u: goto label_470a00;
        case 0x470a04u: goto label_470a04;
        case 0x470a08u: goto label_470a08;
        case 0x470a0cu: goto label_470a0c;
        case 0x470a10u: goto label_470a10;
        case 0x470a14u: goto label_470a14;
        case 0x470a18u: goto label_470a18;
        case 0x470a1cu: goto label_470a1c;
        case 0x470a20u: goto label_470a20;
        case 0x470a24u: goto label_470a24;
        case 0x470a28u: goto label_470a28;
        case 0x470a2cu: goto label_470a2c;
        case 0x470a30u: goto label_470a30;
        case 0x470a34u: goto label_470a34;
        case 0x470a38u: goto label_470a38;
        case 0x470a3cu: goto label_470a3c;
        case 0x470a40u: goto label_470a40;
        case 0x470a44u: goto label_470a44;
        case 0x470a48u: goto label_470a48;
        case 0x470a4cu: goto label_470a4c;
        case 0x470a50u: goto label_470a50;
        case 0x470a54u: goto label_470a54;
        case 0x470a58u: goto label_470a58;
        case 0x470a5cu: goto label_470a5c;
        case 0x470a60u: goto label_470a60;
        case 0x470a64u: goto label_470a64;
        case 0x470a68u: goto label_470a68;
        case 0x470a6cu: goto label_470a6c;
        case 0x470a70u: goto label_470a70;
        case 0x470a74u: goto label_470a74;
        case 0x470a78u: goto label_470a78;
        case 0x470a7cu: goto label_470a7c;
        case 0x470a80u: goto label_470a80;
        case 0x470a84u: goto label_470a84;
        case 0x470a88u: goto label_470a88;
        case 0x470a8cu: goto label_470a8c;
        case 0x470a90u: goto label_470a90;
        case 0x470a94u: goto label_470a94;
        case 0x470a98u: goto label_470a98;
        case 0x470a9cu: goto label_470a9c;
        case 0x470aa0u: goto label_470aa0;
        case 0x470aa4u: goto label_470aa4;
        case 0x470aa8u: goto label_470aa8;
        case 0x470aacu: goto label_470aac;
        case 0x470ab0u: goto label_470ab0;
        case 0x470ab4u: goto label_470ab4;
        case 0x470ab8u: goto label_470ab8;
        case 0x470abcu: goto label_470abc;
        case 0x470ac0u: goto label_470ac0;
        case 0x470ac4u: goto label_470ac4;
        case 0x470ac8u: goto label_470ac8;
        case 0x470accu: goto label_470acc;
        case 0x470ad0u: goto label_470ad0;
        case 0x470ad4u: goto label_470ad4;
        case 0x470ad8u: goto label_470ad8;
        case 0x470adcu: goto label_470adc;
        case 0x470ae0u: goto label_470ae0;
        case 0x470ae4u: goto label_470ae4;
        case 0x470ae8u: goto label_470ae8;
        case 0x470aecu: goto label_470aec;
        case 0x470af0u: goto label_470af0;
        case 0x470af4u: goto label_470af4;
        case 0x470af8u: goto label_470af8;
        case 0x470afcu: goto label_470afc;
        case 0x470b00u: goto label_470b00;
        case 0x470b04u: goto label_470b04;
        case 0x470b08u: goto label_470b08;
        case 0x470b0cu: goto label_470b0c;
        case 0x470b10u: goto label_470b10;
        case 0x470b14u: goto label_470b14;
        case 0x470b18u: goto label_470b18;
        case 0x470b1cu: goto label_470b1c;
        case 0x470b20u: goto label_470b20;
        case 0x470b24u: goto label_470b24;
        case 0x470b28u: goto label_470b28;
        case 0x470b2cu: goto label_470b2c;
        case 0x470b30u: goto label_470b30;
        case 0x470b34u: goto label_470b34;
        case 0x470b38u: goto label_470b38;
        case 0x470b3cu: goto label_470b3c;
        case 0x470b40u: goto label_470b40;
        case 0x470b44u: goto label_470b44;
        case 0x470b48u: goto label_470b48;
        case 0x470b4cu: goto label_470b4c;
        case 0x470b50u: goto label_470b50;
        case 0x470b54u: goto label_470b54;
        case 0x470b58u: goto label_470b58;
        case 0x470b5cu: goto label_470b5c;
        case 0x470b60u: goto label_470b60;
        case 0x470b64u: goto label_470b64;
        case 0x470b68u: goto label_470b68;
        case 0x470b6cu: goto label_470b6c;
        case 0x470b70u: goto label_470b70;
        case 0x470b74u: goto label_470b74;
        case 0x470b78u: goto label_470b78;
        case 0x470b7cu: goto label_470b7c;
        case 0x470b80u: goto label_470b80;
        case 0x470b84u: goto label_470b84;
        case 0x470b88u: goto label_470b88;
        case 0x470b8cu: goto label_470b8c;
        case 0x470b90u: goto label_470b90;
        case 0x470b94u: goto label_470b94;
        case 0x470b98u: goto label_470b98;
        case 0x470b9cu: goto label_470b9c;
        case 0x470ba0u: goto label_470ba0;
        case 0x470ba4u: goto label_470ba4;
        case 0x470ba8u: goto label_470ba8;
        case 0x470bacu: goto label_470bac;
        case 0x470bb0u: goto label_470bb0;
        case 0x470bb4u: goto label_470bb4;
        case 0x470bb8u: goto label_470bb8;
        case 0x470bbcu: goto label_470bbc;
        case 0x470bc0u: goto label_470bc0;
        case 0x470bc4u: goto label_470bc4;
        case 0x470bc8u: goto label_470bc8;
        case 0x470bccu: goto label_470bcc;
        case 0x470bd0u: goto label_470bd0;
        case 0x470bd4u: goto label_470bd4;
        case 0x470bd8u: goto label_470bd8;
        case 0x470bdcu: goto label_470bdc;
        case 0x470be0u: goto label_470be0;
        case 0x470be4u: goto label_470be4;
        case 0x470be8u: goto label_470be8;
        case 0x470becu: goto label_470bec;
        case 0x470bf0u: goto label_470bf0;
        case 0x470bf4u: goto label_470bf4;
        case 0x470bf8u: goto label_470bf8;
        case 0x470bfcu: goto label_470bfc;
        case 0x470c00u: goto label_470c00;
        case 0x470c04u: goto label_470c04;
        case 0x470c08u: goto label_470c08;
        case 0x470c0cu: goto label_470c0c;
        case 0x470c10u: goto label_470c10;
        case 0x470c14u: goto label_470c14;
        default: break;
    }

    ctx->pc = 0x470960u;

label_470960:
    // 0x470960: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x470960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_470964:
    // 0x470964: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x470964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_470968:
    // 0x470968: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x470968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_47096c:
    // 0x47096c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x47096cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_470970:
    // 0x470970: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x470970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_470974:
    // 0x470974: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x470974u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_470978:
    // 0x470978: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x470978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_47097c:
    // 0x47097c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x47097cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_470980:
    // 0x470980: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x470980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_470984:
    // 0x470984: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x470984u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_470988:
    // 0x470988: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x470988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_47098c:
    // 0x47098c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x47098cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_470990:
    // 0x470990: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x470990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_470994:
    // 0x470994: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x470994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_470998:
    // 0x470998: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x470998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_47099c:
    // 0x47099c: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x47099cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_4709a0:
    // 0x4709a0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x4709a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_4709a4:
    // 0x4709a4: 0x8c910014  lw          $s1, 0x14($a0)
    ctx->pc = 0x4709a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_4709a8:
    // 0x4709a8: 0x1220007d  beqz        $s1, . + 4 + (0x7D << 2)
label_4709ac:
    if (ctx->pc == 0x4709ACu) {
        ctx->pc = 0x4709ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4709A8u;
        // 0x4709ac: 0xafa70014  sw          $a3, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4709B0u;
        goto label_4709b0;
    }
    ctx->pc = 0x4709A8u;
    {
        const bool branch_taken_0x4709a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4709ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4709A8u;
        // 0x4709ac: 0xafa70014  sw          $a3, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4709a8) {
            ctx->pc = 0x470BA0u;
            goto label_470ba0;
        }
    }
    ctx->pc = 0x4709B0u;
label_4709b0:
    // 0x4709b0: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x4709b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_4709b4:
    // 0x4709b4: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x4709b4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_4709b8:
    // 0x4709b8: 0x2610ad18  addiu       $s0, $s0, -0x52E8
    ctx->pc = 0x4709b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946072));
label_4709bc:
    // 0x4709bc: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x4709bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_4709c0:
    // 0x4709c0: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x4709c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_4709c4:
    // 0x4709c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4709c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4709c8:
    // 0x4709c8: 0x40f809  jalr        $v0
label_4709cc:
    if (ctx->pc == 0x4709CCu) {
        ctx->pc = 0x4709CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4709C8u;
        // 0x4709cc: 0x34a50006  ori         $a1, $a1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4709D0u;
        goto label_4709d0;
    }
    ctx->pc = 0x4709C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4709D0u);
        ctx->pc = 0x4709CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4709C8u;
        // 0x4709cc: 0x34a50006  ori         $a1, $a1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4709C8u, 0x4709D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4709D0u;
label_4709d0:
    // 0x4709d0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4709d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4709d4:
    // 0x4709d4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x4709d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_4709d8:
    // 0x4709d8: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x4709d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_4709dc:
    // 0x4709dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4709dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4709e0:
    // 0x4709e0: 0x40f809  jalr        $v0
label_4709e4:
    if (ctx->pc == 0x4709E4u) {
        ctx->pc = 0x4709E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4709E0u;
        // 0x4709e4: 0x34a50507  ori         $a1, $a1, 0x507 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4709E8u;
        goto label_4709e8;
    }
    ctx->pc = 0x4709E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4709E8u);
        ctx->pc = 0x4709E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4709E0u;
        // 0x4709e4: 0x34a50507  ori         $a1, $a1, 0x507 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4709E0u, 0x4709E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4709E8u;
label_4709e8:
    // 0x4709e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4709e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4709ec:
    // 0x4709ec: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x4709ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_4709f0:
    // 0x4709f0: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x4709f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_4709f4:
    // 0x4709f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4709f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4709f8:
    // 0x4709f8: 0x40f809  jalr        $v0
label_4709fc:
    if (ctx->pc == 0x4709FCu) {
        ctx->pc = 0x4709FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4709F8u;
        // 0x4709fc: 0x34a50507  ori         $a1, $a1, 0x507 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
        ctx->in_delay_slot = false;
        ctx->pc = 0x470A00u;
        goto label_470a00;
    }
    ctx->pc = 0x4709F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x470A00u);
        ctx->pc = 0x4709FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4709F8u;
        // 0x4709fc: 0x34a50507  ori         $a1, $a1, 0x507 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4709F8u, 0x470A00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x470A00u;
label_470a00:
    // 0x470a00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x470a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_470a04:
    // 0x470a04: 0x96e20084  lhu         $v0, 0x84($s7)
    ctx->pc = 0x470a04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 132)));
label_470a08:
    // 0x470a08: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
label_470a0c:
    if (ctx->pc == 0x470A0Cu) {
        ctx->pc = 0x470A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470A08u;
        // 0x470a0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470A10u;
        goto label_470a10;
    }
    ctx->pc = 0x470A08u;
    {
        const bool branch_taken_0x470a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x470A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470A08u;
        // 0x470a0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470a08) {
            ctx->pc = 0x470B74u;
            goto label_470b74;
        }
    }
    ctx->pc = 0x470A10u;
label_470a10:
    // 0x470a10: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x470a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_470a14:
    // 0x470a14: 0x0  nop
    ctx->pc = 0x470a14u;
    // NOP
label_470a18:
    // 0x470a18: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x470a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_470a1c:
    // 0x470a1c: 0x24900001  addiu       $s0, $a0, 0x1
    ctx->pc = 0x470a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_470a20:
    // 0x470a20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x470a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_470a24:
    // 0x470a24: 0x624021  addu        $t0, $v1, $v0
    ctx->pc = 0x470a24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_470a28:
    // 0x470a28: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x470a28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_470a2c:
    // 0x470a2c: 0x95020006  lhu         $v0, 0x6($t0)
    ctx->pc = 0x470a2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
label_470a30:
    // 0x470a30: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x470a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_470a34:
    // 0x470a34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x470a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_470a38:
    // 0x470a38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x470a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_470a3c:
    // 0x470a3c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x470a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_470a40:
    // 0x470a40: 0x12c0000d  beqz        $s6, . + 4 + (0xD << 2)
label_470a44:
    if (ctx->pc == 0x470A44u) {
        ctx->pc = 0x470A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470A40u;
        // 0x470a44: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470A48u;
        goto label_470a48;
    }
    ctx->pc = 0x470A40u;
    {
        const bool branch_taken_0x470a40 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x470A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470A40u;
        // 0x470a44: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470a40) {
            ctx->pc = 0x470A78u;
            goto label_470a78;
        }
    }
    ctx->pc = 0x470A48u;
label_470a48:
    // 0x470a48: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x470a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_470a4c:
    // 0x470a4c: 0x1044000a  beq         $v0, $a0, . + 4 + (0xA << 2)
label_470a50:
    if (ctx->pc == 0x470A50u) {
        ctx->pc = 0x470A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470A4Cu;
        // 0x470a50: 0x25420001  addiu       $v0, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470A54u;
        goto label_470a54;
    }
    ctx->pc = 0x470A4Cu;
    {
        const bool branch_taken_0x470a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x470A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470A4Cu;
        // 0x470a50: 0x25420001  addiu       $v0, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470a4c) {
            ctx->pc = 0x470A78u;
            goto label_470a78;
        }
    }
    ctx->pc = 0x470A54u;
label_470a54:
    // 0x470a54: 0x0  nop
    ctx->pc = 0x470a54u;
    // NOP
label_470a58:
    // 0x470a58: 0x304affff  andi        $t2, $v0, 0xFFFF
    ctx->pc = 0x470a58u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_470a5c:
    // 0x470a5c: 0x156182b  sltu        $v1, $t2, $s6
    ctx->pc = 0x470a5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_470a60:
    // 0x470a60: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_470a64:
    if (ctx->pc == 0x470A64u) {
        ctx->pc = 0x470A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470A60u;
        // 0x470a64: 0xa1080  sll         $v0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470A68u;
        goto label_470a68;
    }
    ctx->pc = 0x470A60u;
    {
        const bool branch_taken_0x470a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x470A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470A60u;
        // 0x470a64: 0xa1080  sll         $v0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470a60) {
            ctx->pc = 0x470A78u;
            goto label_470a78;
        }
    }
    ctx->pc = 0x470A68u;
label_470a68:
    // 0x470a68: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x470a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_470a6c:
    // 0x470a6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x470a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_470a70:
    // 0x470a70: 0x1464fff9  bne         $v1, $a0, . + 4 + (-0x7 << 2)
label_470a74:
    if (ctx->pc == 0x470A74u) {
        ctx->pc = 0x470A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470A70u;
        // 0x470a74: 0x25420001  addiu       $v0, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470A78u;
        goto label_470a78;
    }
    ctx->pc = 0x470A70u;
    {
        const bool branch_taken_0x470a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x470A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470A70u;
        // 0x470a74: 0x25420001  addiu       $v0, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470a70) {
            ctx->pc = 0x470A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_470a58;
        }
    }
    ctx->pc = 0x470A78u;
label_470a78:
    // 0x470a78: 0x15560005  bne         $t2, $s6, . + 4 + (0x5 << 2)
label_470a7c:
    if (ctx->pc == 0x470A7Cu) {
        ctx->pc = 0x470A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470A78u;
        // 0x470a7c: 0xa1080  sll         $v0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470A80u;
        goto label_470a80;
    }
    ctx->pc = 0x470A78u;
    {
        const bool branch_taken_0x470a78 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 22));
        ctx->pc = 0x470A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470A78u;
        // 0x470a7c: 0xa1080  sll         $v0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470a78) {
            ctx->pc = 0x470A90u;
            goto label_470a90;
        }
    }
    ctx->pc = 0x470A80u;
label_470a80:
    // 0x470a80: 0x25430001  addiu       $v1, $t2, 0x1
    ctx->pc = 0x470a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_470a84:
    // 0x470a84: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x470a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_470a88:
    // 0x470a88: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x470a88u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_470a8c:
    // 0x470a8c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x470a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_470a90:
    // 0x470a90: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
label_470a94:
    if (ctx->pc == 0x470A94u) {
        ctx->pc = 0x470A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470A90u;
        // 0x470a94: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470A98u;
        goto label_470a98;
    }
    ctx->pc = 0x470A90u;
    {
        const bool branch_taken_0x470a90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x470a90) {
            ctx->pc = 0x470A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x470A90u;
            // 0x470a94: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x470A98u;
            goto label_470a98;
        }
    }
    ctx->pc = 0x470A98u;
label_470a98:
    // 0x470a98: 0x12a0000d  beqz        $s5, . + 4 + (0xD << 2)
label_470a9c:
    if (ctx->pc == 0x470A9Cu) {
        ctx->pc = 0x470A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470A98u;
        // 0x470a9c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470AA0u;
        goto label_470aa0;
    }
    ctx->pc = 0x470A98u;
    {
        const bool branch_taken_0x470a98 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x470A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470A98u;
        // 0x470a9c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470a98) {
            ctx->pc = 0x470AD0u;
            goto label_470ad0;
        }
    }
    ctx->pc = 0x470AA0u;
label_470aa0:
    // 0x470aa0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x470aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_470aa4:
    // 0x470aa4: 0x1046000a  beq         $v0, $a2, . + 4 + (0xA << 2)
label_470aa8:
    if (ctx->pc == 0x470AA8u) {
        ctx->pc = 0x470AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470AA4u;
        // 0x470aa8: 0x25620001  addiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470AACu;
        goto label_470aac;
    }
    ctx->pc = 0x470AA4u;
    {
        const bool branch_taken_0x470aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x470AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470AA4u;
        // 0x470aa8: 0x25620001  addiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470aa4) {
            ctx->pc = 0x470AD0u;
            goto label_470ad0;
        }
    }
    ctx->pc = 0x470AACu;
label_470aac:
    // 0x470aac: 0x0  nop
    ctx->pc = 0x470aacu;
    // NOP
label_470ab0:
    // 0x470ab0: 0x304bffff  andi        $t3, $v0, 0xFFFF
    ctx->pc = 0x470ab0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_470ab4:
    // 0x470ab4: 0x175182b  sltu        $v1, $t3, $s5
    ctx->pc = 0x470ab4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_470ab8:
    // 0x470ab8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_470abc:
    if (ctx->pc == 0x470ABCu) {
        ctx->pc = 0x470ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470AB8u;
        // 0x470abc: 0xb1080  sll         $v0, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470AC0u;
        goto label_470ac0;
    }
    ctx->pc = 0x470AB8u;
    {
        const bool branch_taken_0x470ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x470ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470AB8u;
        // 0x470abc: 0xb1080  sll         $v0, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470ab8) {
            ctx->pc = 0x470AD0u;
            goto label_470ad0;
        }
    }
    ctx->pc = 0x470AC0u;
label_470ac0:
    // 0x470ac0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x470ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_470ac4:
    // 0x470ac4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x470ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_470ac8:
    // 0x470ac8: 0x1466fff9  bne         $v1, $a2, . + 4 + (-0x7 << 2)
label_470acc:
    if (ctx->pc == 0x470ACCu) {
        ctx->pc = 0x470ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470AC8u;
        // 0x470acc: 0x25620001  addiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470AD0u;
        goto label_470ad0;
    }
    ctx->pc = 0x470AC8u;
    {
        const bool branch_taken_0x470ac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x470ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470AC8u;
        // 0x470acc: 0x25620001  addiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470ac8) {
            ctx->pc = 0x470AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_470ab0;
        }
    }
    ctx->pc = 0x470AD0u;
label_470ad0:
    // 0x470ad0: 0x55750007  bnel        $t3, $s5, . + 4 + (0x7 << 2)
label_470ad4:
    if (ctx->pc == 0x470AD4u) {
        ctx->pc = 0x470AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470AD0u;
        // 0x470ad4: 0x8ca60008  lw          $a2, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470AD8u;
        goto label_470ad8;
    }
    ctx->pc = 0x470AD0u;
    {
        const bool branch_taken_0x470ad0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 21));
        if (branch_taken_0x470ad0) {
            ctx->pc = 0x470AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x470AD0u;
            // 0x470ad4: 0x8ca60008  lw          $a2, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x470AF0u;
            goto label_470af0;
        }
    }
    ctx->pc = 0x470AD8u;
label_470ad8:
    // 0x470ad8: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x470ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_470adc:
    // 0x470adc: 0x25630001  addiu       $v1, $t3, 0x1
    ctx->pc = 0x470adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_470ae0:
    // 0x470ae0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x470ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_470ae4:
    // 0x470ae4: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x470ae4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_470ae8:
    // 0x470ae8: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x470ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_470aec:
    // 0x470aec: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x470aecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_470af0:
    // 0x470af0: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
label_470af4:
    if (ctx->pc == 0x470AF4u) {
        ctx->pc = 0x470AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470AF0u;
        // 0x470af4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470AF8u;
        goto label_470af8;
    }
    ctx->pc = 0x470AF0u;
    {
        const bool branch_taken_0x470af0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x470AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470AF0u;
        // 0x470af4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470af0) {
            ctx->pc = 0x470B28u;
            goto label_470b28;
        }
    }
    ctx->pc = 0x470AF8u;
label_470af8:
    // 0x470af8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x470af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_470afc:
    // 0x470afc: 0x1046000a  beq         $v0, $a2, . + 4 + (0xA << 2)
label_470b00:
    if (ctx->pc == 0x470B00u) {
        ctx->pc = 0x470B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470AFCu;
        // 0x470b00: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470B04u;
        goto label_470b04;
    }
    ctx->pc = 0x470AFCu;
    {
        const bool branch_taken_0x470afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x470B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470AFCu;
        // 0x470b00: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470afc) {
            ctx->pc = 0x470B28u;
            goto label_470b28;
        }
    }
    ctx->pc = 0x470B04u;
label_470b04:
    // 0x470b04: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x470b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_470b08:
    // 0x470b08: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x470b08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_470b0c:
    // 0x470b0c: 0x94182b  sltu        $v1, $a0, $s4
    ctx->pc = 0x470b0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_470b10:
    // 0x470b10: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_470b14:
    if (ctx->pc == 0x470B14u) {
        ctx->pc = 0x470B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470B10u;
        // 0x470b14: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470B18u;
        goto label_470b18;
    }
    ctx->pc = 0x470B10u;
    {
        const bool branch_taken_0x470b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x470B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470B10u;
        // 0x470b14: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470b10) {
            ctx->pc = 0x470B28u;
            goto label_470b28;
        }
    }
    ctx->pc = 0x470B18u;
label_470b18:
    // 0x470b18: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x470b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_470b1c:
    // 0x470b1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x470b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_470b20:
    // 0x470b20: 0x1467fff9  bne         $v1, $a3, . + 4 + (-0x7 << 2)
label_470b24:
    if (ctx->pc == 0x470B24u) {
        ctx->pc = 0x470B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470B20u;
        // 0x470b24: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470B28u;
        goto label_470b28;
    }
    ctx->pc = 0x470B20u;
    {
        const bool branch_taken_0x470b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x470B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470B20u;
        // 0x470b24: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470b20) {
            ctx->pc = 0x470B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_470b08;
        }
    }
    ctx->pc = 0x470B28u;
label_470b28:
    // 0x470b28: 0x54940007  bnel        $a0, $s4, . + 4 + (0x7 << 2)
label_470b2c:
    if (ctx->pc == 0x470B2Cu) {
        ctx->pc = 0x470B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470B28u;
        // 0x470b2c: 0x95090006  lhu         $t1, 0x6($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470B30u;
        goto label_470b30;
    }
    ctx->pc = 0x470B28u;
    {
        const bool branch_taken_0x470b28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        if (branch_taken_0x470b28) {
            ctx->pc = 0x470B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x470B28u;
            // 0x470b2c: 0x95090006  lhu         $t1, 0x6($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x470B48u;
            goto label_470b48;
        }
    }
    ctx->pc = 0x470B30u;
label_470b30:
    // 0x470b30: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x470b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_470b34:
    // 0x470b34: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x470b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_470b38:
    // 0x470b38: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x470b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_470b3c:
    // 0x470b3c: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x470b3cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_470b40:
    // 0x470b40: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x470b40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_470b44:
    // 0x470b44: 0x95090006  lhu         $t1, 0x6($t0)
    ctx->pc = 0x470b44u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
label_470b48:
    // 0x470b48: 0x95060000  lhu         $a2, 0x0($t0)
    ctx->pc = 0x470b48u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_470b4c:
    // 0x470b4c: 0x95070002  lhu         $a3, 0x2($t0)
    ctx->pc = 0x470b4cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_470b50:
    // 0x470b50: 0x95080004  lhu         $t0, 0x4($t0)
    ctx->pc = 0x470b50u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_470b54:
    // 0x470b54: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x470b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_470b58:
    // 0x470b58: 0xc11b796  jal         func_46DE58
label_470b5c:
    if (ctx->pc == 0x470B5Cu) {
        ctx->pc = 0x470B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470B58u;
        // 0x470b5c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470B60u;
        goto label_470b60;
    }
    ctx->pc = 0x470B58u;
    SET_GPR_U32(ctx, 31, 0x470B60u);
    ctx->pc = 0x470B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x470B58u;
    // 0x470b5c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46DE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46DE58u, 0x470B58u, 0x470B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470B60u;
label_470b60:
    // 0x470b60: 0x96e30084  lhu         $v1, 0x84($s7)
    ctx->pc = 0x470b60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 132)));
label_470b64:
    // 0x470b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x470b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_470b68:
    // 0x470b68: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x470b68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_470b6c:
    // 0x470b6c: 0x5460ffaa  bnel        $v1, $zero, . + 4 + (-0x56 << 2)
label_470b70:
    if (ctx->pc == 0x470B70u) {
        ctx->pc = 0x470B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470B6Cu;
        // 0x470b70: 0x8ee30004  lw          $v1, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470B74u;
        goto label_470b74;
    }
    ctx->pc = 0x470B6Cu;
    {
        const bool branch_taken_0x470b6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x470b6c) {
            ctx->pc = 0x470B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x470B6Cu;
            // 0x470b70: 0x8ee30004  lw          $v1, 0x4($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x470A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_470a18;
        }
    }
    ctx->pc = 0x470B74u;
label_470b74:
    // 0x470b74: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x470b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_470b78:
    // 0x470b78: 0x2450ad18  addiu       $s0, $v0, -0x52E8
    ctx->pc = 0x470b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_470b7c:
    // 0x470b7c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x470b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_470b80:
    // 0x470b80: 0x40f809  jalr        $v0
label_470b84:
    if (ctx->pc == 0x470B84u) {
        ctx->pc = 0x470B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470B80u;
        // 0x470b84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470B88u;
        goto label_470b88;
    }
    ctx->pc = 0x470B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x470B88u);
        ctx->pc = 0x470B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470B80u;
        // 0x470b84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470B80u, 0x470B88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x470B88u;
label_470b88:
    // 0x470b88: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x470b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_470b8c:
    // 0x470b8c: 0x60f809  jalr        $v1
label_470b90:
    if (ctx->pc == 0x470B90u) {
        ctx->pc = 0x470B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470B8Cu;
        // 0x470b90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470B94u;
        goto label_470b94;
    }
    ctx->pc = 0x470B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x470B94u);
        ctx->pc = 0x470B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470B8Cu;
        // 0x470b90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470B8Cu, 0x470B94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x470B94u;
label_470b94:
    // 0x470b94: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x470b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_470b98:
    // 0x470b98: 0x40f809  jalr        $v0
label_470b9c:
    if (ctx->pc == 0x470B9Cu) {
        ctx->pc = 0x470B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470B98u;
        // 0x470b9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470BA0u;
        goto label_470ba0;
    }
    ctx->pc = 0x470B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x470BA0u);
        ctx->pc = 0x470B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470B98u;
        // 0x470b9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470B98u, 0x470BA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x470BA0u;
label_470ba0:
    // 0x470ba0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x470ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_470ba4:
    // 0x470ba4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x470ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_470ba8:
    // 0x470ba8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x470ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_470bac:
    // 0x470bac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_470bb0:
    if (ctx->pc == 0x470BB0u) {
        ctx->pc = 0x470BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470BACu;
        // 0x470bb0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470BB4u;
        goto label_470bb4;
    }
    ctx->pc = 0x470BACu;
    {
        const bool branch_taken_0x470bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x470BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470BACu;
        // 0x470bb0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470bac) {
            ctx->pc = 0x470BC4u;
            goto label_470bc4;
        }
    }
    ctx->pc = 0x470BB4u;
label_470bb4:
    // 0x470bb4: 0xc11c1e2  jal         func_470788
label_470bb8:
    if (ctx->pc == 0x470BB8u) {
        ctx->pc = 0x470BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470BB4u;
        // 0x470bb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470BBCu;
        goto label_470bbc;
    }
    ctx->pc = 0x470BB4u;
    SET_GPR_U32(ctx, 31, 0x470BBCu);
    ctx->pc = 0x470BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x470BB4u;
    // 0x470bb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x470788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470788u, 0x470BB4u, 0x470BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470BBCu;
label_470bbc:
    // 0x470bbc: 0x10000003  b           . + 4 + (0x3 << 2)
label_470bc0:
    if (ctx->pc == 0x470BC0u) {
        ctx->pc = 0x470BC4u;
        goto label_470bc4;
    }
    ctx->pc = 0x470BBCu;
    {
        const bool branch_taken_0x470bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x470bbc) {
            ctx->pc = 0x470BCCu;
            goto label_470bcc;
        }
    }
    ctx->pc = 0x470BC4u;
label_470bc4:
    // 0x470bc4: 0xc11c1e2  jal         func_470788
label_470bc8:
    if (ctx->pc == 0x470BC8u) {
        ctx->pc = 0x470BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470BC4u;
        // 0x470bc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470BCCu;
        goto label_470bcc;
    }
    ctx->pc = 0x470BC4u;
    SET_GPR_U32(ctx, 31, 0x470BCCu);
    ctx->pc = 0x470BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x470BC4u;
    // 0x470bc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x470788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470788u, 0x470BC4u, 0x470BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470BCCu;
label_470bcc:
    // 0x470bcc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_470bd0:
    if (ctx->pc == 0x470BD0u) {
        ctx->pc = 0x470BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470BCCu;
        // 0x470bd0: 0xaee20078  sw          $v0, 0x78($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470BD4u;
        goto label_470bd4;
    }
    ctx->pc = 0x470BCCu;
    {
        const bool branch_taken_0x470bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x470bcc) {
            ctx->pc = 0x470BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x470BCCu;
            // 0x470bd0: 0xaee20078  sw          $v0, 0x78($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 120), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x470BE4u;
            goto label_470be4;
        }
    }
    ctx->pc = 0x470BD4u;
label_470bd4:
    // 0x470bd4: 0xc11b768  jal         func_46DDA0
label_470bd8:
    if (ctx->pc == 0x470BD8u) {
        ctx->pc = 0x470BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470BD4u;
        // 0x470bd8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470BDCu;
        goto label_470bdc;
    }
    ctx->pc = 0x470BD4u;
    SET_GPR_U32(ctx, 31, 0x470BDCu);
    ctx->pc = 0x470BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x470BD4u;
    // 0x470bd8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46DDA0u, 0x470BD4u, 0x470BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470BDCu;
label_470bdc:
    // 0x470bdc: 0x10000002  b           . + 4 + (0x2 << 2)
label_470be0:
    if (ctx->pc == 0x470BE0u) {
        ctx->pc = 0x470BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470BDCu;
        // 0x470be0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470BE4u;
        goto label_470be4;
    }
    ctx->pc = 0x470BDCu;
    {
        const bool branch_taken_0x470bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x470BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470BDCu;
        // 0x470be0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470bdc) {
            ctx->pc = 0x470BE8u;
            goto label_470be8;
        }
    }
    ctx->pc = 0x470BE4u;
label_470be4:
    // 0x470be4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x470be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_470be8:
    // 0x470be8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x470be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_470bec:
    // 0x470bec: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x470becu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_470bf0:
    // 0x470bf0: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x470bf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_470bf4:
    // 0x470bf4: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x470bf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_470bf8:
    // 0x470bf8: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x470bf8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_470bfc:
    // 0x470bfc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x470bfcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_470c00:
    // 0x470c00: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x470c00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_470c04:
    // 0x470c04: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x470c04u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_470c08:
    // 0x470c08: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x470c08u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_470c0c:
    // 0x470c0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x470c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_470c10:
    // 0x470c10: 0x3e00008  jr          $ra
label_470c14:
    if (ctx->pc == 0x470C14u) {
        ctx->pc = 0x470C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470C10u;
        // 0x470c14: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470C18u;
        goto label_fallthrough_0x470c10;
    }
    ctx->pc = 0x470C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x470C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470C10u;
        // 0x470c14: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x470c10:
    ctx->pc = 0x470C18u;
}
