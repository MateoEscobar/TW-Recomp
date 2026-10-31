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

// Function: sub_0020BD88
// Address: 0x20bd88 - 0x20be68
void sub_0020BD88_0x20bd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BD88_0x20bd88");
#endif

    switch (ctx->pc) {
        case 0x20bd88u: goto label_20bd88;
        case 0x20bd8cu: goto label_20bd8c;
        case 0x20bd90u: goto label_20bd90;
        case 0x20bd94u: goto label_20bd94;
        case 0x20bd98u: goto label_20bd98;
        case 0x20bd9cu: goto label_20bd9c;
        case 0x20bda0u: goto label_20bda0;
        case 0x20bda4u: goto label_20bda4;
        case 0x20bda8u: goto label_20bda8;
        case 0x20bdacu: goto label_20bdac;
        case 0x20bdb0u: goto label_20bdb0;
        case 0x20bdb4u: goto label_20bdb4;
        case 0x20bdb8u: goto label_20bdb8;
        case 0x20bdbcu: goto label_20bdbc;
        case 0x20bdc0u: goto label_20bdc0;
        case 0x20bdc4u: goto label_20bdc4;
        case 0x20bdc8u: goto label_20bdc8;
        case 0x20bdccu: goto label_20bdcc;
        case 0x20bdd0u: goto label_20bdd0;
        case 0x20bdd4u: goto label_20bdd4;
        case 0x20bdd8u: goto label_20bdd8;
        case 0x20bddcu: goto label_20bddc;
        case 0x20bde0u: goto label_20bde0;
        case 0x20bde4u: goto label_20bde4;
        case 0x20bde8u: goto label_20bde8;
        case 0x20bdecu: goto label_20bdec;
        case 0x20bdf0u: goto label_20bdf0;
        case 0x20bdf4u: goto label_20bdf4;
        case 0x20bdf8u: goto label_20bdf8;
        case 0x20bdfcu: goto label_20bdfc;
        case 0x20be00u: goto label_20be00;
        case 0x20be04u: goto label_20be04;
        case 0x20be08u: goto label_20be08;
        case 0x20be0cu: goto label_20be0c;
        case 0x20be10u: goto label_20be10;
        case 0x20be14u: goto label_20be14;
        case 0x20be18u: goto label_20be18;
        case 0x20be1cu: goto label_20be1c;
        case 0x20be20u: goto label_20be20;
        case 0x20be24u: goto label_20be24;
        case 0x20be28u: goto label_20be28;
        case 0x20be2cu: goto label_20be2c;
        case 0x20be30u: goto label_20be30;
        case 0x20be34u: goto label_20be34;
        case 0x20be38u: goto label_20be38;
        case 0x20be3cu: goto label_20be3c;
        case 0x20be40u: goto label_20be40;
        case 0x20be44u: goto label_20be44;
        case 0x20be48u: goto label_20be48;
        case 0x20be4cu: goto label_20be4c;
        case 0x20be50u: goto label_20be50;
        case 0x20be54u: goto label_20be54;
        case 0x20be58u: goto label_20be58;
        case 0x20be5cu: goto label_20be5c;
        case 0x20be60u: goto label_20be60;
        case 0x20be64u: goto label_20be64;
        default: break;
    }

    ctx->pc = 0x20bd88u;

label_20bd88:
    // 0x20bd88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20bd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_20bd8c:
    // 0x20bd8c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x20bd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_20bd90:
    // 0x20bd90: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20bd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20bd94:
    // 0x20bd94: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x20bd94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_20bd98:
    // 0x20bd98: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x20bd98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_20bd9c:
    // 0x20bd9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20bd9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20bda0:
    // 0x20bda0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20bda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_20bda4:
    // 0x20bda4: 0x2442e690  addiu       $v0, $v0, -0x1970
    ctx->pc = 0x20bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960784));
label_20bda8:
    // 0x20bda8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x20bda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_20bdac:
    // 0x20bdac: 0x2463e6b8  addiu       $v1, $v1, -0x1948
    ctx->pc = 0x20bdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960824));
label_20bdb0:
    // 0x20bdb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20bdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20bdb4:
    // 0x20bdb4: 0x24c6e6e8  addiu       $a2, $a2, -0x1918
    ctx->pc = 0x20bdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960872));
label_20bdb8:
    // 0x20bdb8: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x20bdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_20bdbc:
    // 0x20bdbc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20bdbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20bdc0:
    // 0x20bdc0: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x20bdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_20bdc4:
    // 0x20bdc4: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x20bdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_20bdc8:
    // 0x20bdc8: 0xc083118  jal         func_20C460
label_20bdcc:
    if (ctx->pc == 0x20BDCCu) {
        ctx->pc = 0x20BDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDC8u;
        // 0x20bdcc: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BDD0u;
        goto label_20bdd0;
    }
    ctx->pc = 0x20BDC8u;
    SET_GPR_U32(ctx, 31, 0x20BDD0u);
    ctx->pc = 0x20BDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BDC8u;
    // 0x20bdcc: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C460u, 0x20BDC8u, 0x20BDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BDD0u;
label_20bdd0:
    // 0x20bdd0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x20bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_20bdd4:
    // 0x20bdd4: 0x2442cc88  addiu       $v0, $v0, -0x3378
    ctx->pc = 0x20bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954120));
label_20bdd8:
    // 0x20bdd8: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x20bdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_20bddc:
    // 0x20bddc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x20bddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_20bde0:
    // 0x20bde0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_20bde4:
    if (ctx->pc == 0x20BDE4u) {
        ctx->pc = 0x20BDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDE0u;
        // 0x20bde4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BDE8u;
        goto label_20bde8;
    }
    ctx->pc = 0x20BDE0u;
    {
        const bool branch_taken_0x20bde0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDE0u;
        // 0x20bde4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bde0) {
            ctx->pc = 0x20BE10u;
            goto label_20be10;
        }
    }
    ctx->pc = 0x20BDE8u;
label_20bde8:
    // 0x20bde8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20bde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20bdec:
    // 0x20bdec: 0xc1376d6  jal         func_4DDB58
label_20bdf0:
    if (ctx->pc == 0x20BDF0u) {
        ctx->pc = 0x20BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDECu;
        // 0x20bdf0: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BDF4u;
        goto label_20bdf4;
    }
    ctx->pc = 0x20BDECu;
    SET_GPR_U32(ctx, 31, 0x20BDF4u);
    ctx->pc = 0x20BDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BDECu;
    // 0x20bdf0: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDB58u, 0x20BDECu, 0x20BDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BDF4u;
label_20bdf4:
    // 0x20bdf4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20bdf8:
    // 0x20bdf8: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x20bdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_20bdfc:
    // 0x20bdfc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x20bdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20be00:
    // 0x20be00: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20be00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_20be04:
    // 0x20be04: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20be04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20be08:
    // 0x20be08: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x20be08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_20be0c:
    // 0x20be0c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x20be0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_20be10:
    // 0x20be10: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x20be10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20be14:
    // 0x20be14: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_20be18:
    if (ctx->pc == 0x20BE18u) {
        ctx->pc = 0x20BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE14u;
        // 0x20be18: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BE1Cu;
        goto label_20be1c;
    }
    ctx->pc = 0x20BE14u;
    {
        const bool branch_taken_0x20be14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE14u;
        // 0x20be18: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be14) {
            ctx->pc = 0x20BE40u;
            goto label_20be40;
        }
    }
    ctx->pc = 0x20BE1Cu;
label_20be1c:
    // 0x20be1c: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x20be1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_20be20:
    // 0x20be20: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x20be20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_20be24:
    // 0x20be24: 0x24c69258  addiu       $a2, $a2, -0x6DA8
    ctx->pc = 0x20be24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939224));
label_20be28:
    // 0x20be28: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x20be28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_20be2c:
    // 0x20be2c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x20be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_20be30:
    // 0x20be30: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x20be30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_20be34:
    // 0x20be34: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x20be34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_20be38:
    // 0x20be38: 0x60f809  jalr        $v1
label_20be3c:
    if (ctx->pc == 0x20BE3Cu) {
        ctx->pc = 0x20BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE38u;
        // 0x20be3c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BE40u;
        goto label_20be40;
    }
    ctx->pc = 0x20BE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20BE40u);
        ctx->pc = 0x20BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE38u;
        // 0x20be3c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BE38u, 0x20BE40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20BE40u;
label_20be40:
    // 0x20be40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20be40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20be44:
    // 0x20be44: 0xc06a39e  jal         func_1A8E78
label_20be48:
    if (ctx->pc == 0x20BE48u) {
        ctx->pc = 0x20BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE44u;
        // 0x20be48: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BE4Cu;
        goto label_20be4c;
    }
    ctx->pc = 0x20BE44u;
    SET_GPR_U32(ctx, 31, 0x20BE4Cu);
    ctx->pc = 0x20BE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE44u;
    // 0x20be48: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x20BE44u, 0x20BE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE4Cu;
label_20be4c:
    // 0x20be4c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x20be4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20be50:
    // 0x20be50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20be50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20be54:
    // 0x20be54: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x20be54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20be58:
    // 0x20be58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20be58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20be5c:
    // 0x20be5c: 0x3e00008  jr          $ra
label_20be60:
    if (ctx->pc == 0x20BE60u) {
        ctx->pc = 0x20BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE5Cu;
        // 0x20be60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BE64u;
        goto label_20be64;
    }
    ctx->pc = 0x20BE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE5Cu;
        // 0x20be60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BE64u;
label_20be64:
    // 0x20be64: 0x0  nop
    ctx->pc = 0x20be64u;
    // NOP
    ctx->pc = 0x20be68u;
}
