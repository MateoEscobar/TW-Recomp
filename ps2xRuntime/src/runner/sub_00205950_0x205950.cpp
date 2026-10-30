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

// Function: sub_00205950
// Address: 0x205950 - 0x205a58
void sub_00205950_0x205950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205950_0x205950");
#endif

    switch (ctx->pc) {
        case 0x205950u: goto label_205950;
        case 0x205954u: goto label_205954;
        case 0x205958u: goto label_205958;
        case 0x20595cu: goto label_20595c;
        case 0x205960u: goto label_205960;
        case 0x205964u: goto label_205964;
        case 0x205968u: goto label_205968;
        case 0x20596cu: goto label_20596c;
        case 0x205970u: goto label_205970;
        case 0x205974u: goto label_205974;
        case 0x205978u: goto label_205978;
        case 0x20597cu: goto label_20597c;
        case 0x205980u: goto label_205980;
        case 0x205984u: goto label_205984;
        case 0x205988u: goto label_205988;
        case 0x20598cu: goto label_20598c;
        case 0x205990u: goto label_205990;
        case 0x205994u: goto label_205994;
        case 0x205998u: goto label_205998;
        case 0x20599cu: goto label_20599c;
        case 0x2059a0u: goto label_2059a0;
        case 0x2059a4u: goto label_2059a4;
        case 0x2059a8u: goto label_2059a8;
        case 0x2059acu: goto label_2059ac;
        case 0x2059b0u: goto label_2059b0;
        case 0x2059b4u: goto label_2059b4;
        case 0x2059b8u: goto label_2059b8;
        case 0x2059bcu: goto label_2059bc;
        case 0x2059c0u: goto label_2059c0;
        case 0x2059c4u: goto label_2059c4;
        case 0x2059c8u: goto label_2059c8;
        case 0x2059ccu: goto label_2059cc;
        case 0x2059d0u: goto label_2059d0;
        case 0x2059d4u: goto label_2059d4;
        case 0x2059d8u: goto label_2059d8;
        case 0x2059dcu: goto label_2059dc;
        case 0x2059e0u: goto label_2059e0;
        case 0x2059e4u: goto label_2059e4;
        case 0x2059e8u: goto label_2059e8;
        case 0x2059ecu: goto label_2059ec;
        case 0x2059f0u: goto label_2059f0;
        case 0x2059f4u: goto label_2059f4;
        case 0x2059f8u: goto label_2059f8;
        case 0x2059fcu: goto label_2059fc;
        case 0x205a00u: goto label_205a00;
        case 0x205a04u: goto label_205a04;
        case 0x205a08u: goto label_205a08;
        case 0x205a0cu: goto label_205a0c;
        case 0x205a10u: goto label_205a10;
        case 0x205a14u: goto label_205a14;
        case 0x205a18u: goto label_205a18;
        case 0x205a1cu: goto label_205a1c;
        case 0x205a20u: goto label_205a20;
        case 0x205a24u: goto label_205a24;
        case 0x205a28u: goto label_205a28;
        case 0x205a2cu: goto label_205a2c;
        case 0x205a30u: goto label_205a30;
        case 0x205a34u: goto label_205a34;
        case 0x205a38u: goto label_205a38;
        case 0x205a3cu: goto label_205a3c;
        case 0x205a40u: goto label_205a40;
        case 0x205a44u: goto label_205a44;
        case 0x205a48u: goto label_205a48;
        case 0x205a4cu: goto label_205a4c;
        case 0x205a50u: goto label_205a50;
        case 0x205a54u: goto label_205a54;
        default: break;
    }

    ctx->pc = 0x205950u;

label_205950:
    // 0x205950: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x205950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_205954:
    // 0x205954: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x205954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_205958:
    // 0x205958: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x205958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20595c:
    // 0x20595c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20595cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_205960:
    // 0x205960: 0xc06a38c  jal         func_1A8E30
label_205964:
    if (ctx->pc == 0x205964u) {
        ctx->pc = 0x205964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205960u;
        // 0x205964: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205968u;
        goto label_205968;
    }
    ctx->pc = 0x205960u;
    SET_GPR_U32(ctx, 31, 0x205968u);
    ctx->pc = 0x205964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205960u;
    // 0x205964: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x205960u, 0x205968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205968u;
label_205968:
    // 0x205968: 0x26110078  addiu       $s1, $s0, 0x78
    ctx->pc = 0x205968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_20596c:
    // 0x20596c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x20596cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_205970:
    // 0x205970: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x205970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_205974:
    // 0x205974: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x205974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
label_205978:
    // 0x205978: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x205978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_20597c:
    // 0x20597c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x20597cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_205980:
    // 0x205980: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x205980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_205984:
    // 0x205984: 0x24428510  addiu       $v0, $v0, -0x7AF0
    ctx->pc = 0x205984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935824));
label_205988:
    // 0x205988: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x205988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_20598c:
    // 0x20598c: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x20598cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_205990:
    // 0x205990: 0x2463cc88  addiu       $v1, $v1, -0x3378
    ctx->pc = 0x205990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954120));
label_205994:
    // 0x205994: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x205994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_205998:
    // 0x205998: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x205998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_20599c:
    // 0x20599c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x20599cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_2059a0:
    // 0x2059a0: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2059a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2059a4:
    // 0x2059a4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2059a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2059a8:
    // 0x2059a8: 0x3c080056  lui         $t0, 0x56
    ctx->pc = 0x2059a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)86 << 16));
label_2059ac:
    // 0x2059ac: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2059acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_2059b0:
    // 0x2059b0: 0x3c0a0056  lui         $t2, 0x56
    ctx->pc = 0x2059b0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)86 << 16));
label_2059b4:
    // 0x2059b4: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x2059b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_2059b8:
    // 0x2059b8: 0x24a587d0  addiu       $a1, $a1, -0x7830
    ctx->pc = 0x2059b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936528));
label_2059bc:
    // 0x2059bc: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x2059bcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_2059c0:
    // 0x2059c0: 0x250887d8  addiu       $t0, $t0, -0x7828
    ctx->pc = 0x2059c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294936536));
label_2059c4:
    // 0x2059c4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2059c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2059c8:
    // 0x2059c8: 0x254a8800  addiu       $t2, $t2, -0x7800
    ctx->pc = 0x2059c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294936576));
label_2059cc:
    // 0x2059cc: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x2059ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2059d0:
    // 0x2059d0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2059d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2059d4:
    // 0x2059d4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2059d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_2059d8:
    // 0x2059d8: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x2059d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_2059dc:
    // 0x2059dc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2059dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2059e0:
    // 0x2059e0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2059e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2059e4:
    // 0x2059e4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2059e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2059e8:
    // 0x2059e8: 0x40f809  jalr        $v0
label_2059ec:
    if (ctx->pc == 0x2059ECu) {
        ctx->pc = 0x2059ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059E8u;
        // 0x2059ec: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2059F0u;
        goto label_2059f0;
    }
    ctx->pc = 0x2059E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2059F0u);
        ctx->pc = 0x2059ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059E8u;
        // 0x2059ec: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2059E8u, 0x2059F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2059F0u;
label_2059f0:
    // 0x2059f0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2059f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2059f4:
    // 0x2059f4: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x2059f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
label_2059f8:
    // 0x2059f8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2059f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_2059fc:
    // 0x2059fc: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x2059fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_205a00:
    // 0x205a00: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x205a00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_205a04:
    // 0x205a04: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x205a04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_205a08:
    // 0x205a08: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x205a08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_205a0c:
    // 0x205a0c: 0x24e7dcf8  addiu       $a3, $a3, -0x2308
    ctx->pc = 0x205a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958328));
label_205a10:
    // 0x205a10: 0x24c6dd20  addiu       $a2, $a2, -0x22E0
    ctx->pc = 0x205a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958368));
label_205a14:
    // 0x205a14: 0x24a5dd50  addiu       $a1, $a1, -0x22B0
    ctx->pc = 0x205a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958416));
label_205a18:
    // 0x205a18: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x205a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_205a1c:
    // 0x205a1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x205a1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205a20:
    // 0x205a20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x205a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_205a24:
    // 0x205a24: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x205a24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_205a28:
    // 0x205a28: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x205a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_205a2c:
    // 0x205a2c: 0xac630008  sw          $v1, 0x8($v1)
    ctx->pc = 0x205a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 3));
label_205a30:
    // 0x205a30: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x205a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_205a34:
    // 0x205a34: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x205a34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_205a38:
    // 0x205a38: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x205a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
label_205a3c:
    // 0x205a3c: 0xae07006c  sw          $a3, 0x6C($s0)
    ctx->pc = 0x205a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 7));
label_205a40:
    // 0x205a40: 0xae060088  sw          $a2, 0x88($s0)
    ctx->pc = 0x205a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 6));
label_205a44:
    // 0x205a44: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x205a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_205a48:
    // 0x205a48: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x205a48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_205a4c:
    // 0x205a4c: 0x3e00008  jr          $ra
label_205a50:
    if (ctx->pc == 0x205A50u) {
        ctx->pc = 0x205A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A4Cu;
        // 0x205a50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205A54u;
        goto label_205a54;
    }
    ctx->pc = 0x205A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A4Cu;
        // 0x205a50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205A54u;
label_205a54:
    // 0x205a54: 0x0  nop
    ctx->pc = 0x205a54u;
    // NOP
    ctx->pc = 0x205a58u;
}
