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

// Function: sub_001EECC0
// Address: 0x1eecc0 - 0x1ef000
void sub_001EECC0_0x1eecc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EECC0_0x1eecc0");
#endif

    switch (ctx->pc) {
        case 0x1eecc0u: goto label_1eecc0;
        case 0x1eecc4u: goto label_1eecc4;
        case 0x1eecc8u: goto label_1eecc8;
        case 0x1eecccu: goto label_1eeccc;
        case 0x1eecd0u: goto label_1eecd0;
        case 0x1eecd4u: goto label_1eecd4;
        case 0x1eecd8u: goto label_1eecd8;
        case 0x1eecdcu: goto label_1eecdc;
        case 0x1eece0u: goto label_1eece0;
        case 0x1eece4u: goto label_1eece4;
        case 0x1eece8u: goto label_1eece8;
        case 0x1eececu: goto label_1eecec;
        case 0x1eecf0u: goto label_1eecf0;
        case 0x1eecf4u: goto label_1eecf4;
        case 0x1eecf8u: goto label_1eecf8;
        case 0x1eecfcu: goto label_1eecfc;
        case 0x1eed00u: goto label_1eed00;
        case 0x1eed04u: goto label_1eed04;
        case 0x1eed08u: goto label_1eed08;
        case 0x1eed0cu: goto label_1eed0c;
        case 0x1eed10u: goto label_1eed10;
        case 0x1eed14u: goto label_1eed14;
        case 0x1eed18u: goto label_1eed18;
        case 0x1eed1cu: goto label_1eed1c;
        case 0x1eed20u: goto label_1eed20;
        case 0x1eed24u: goto label_1eed24;
        case 0x1eed28u: goto label_1eed28;
        case 0x1eed2cu: goto label_1eed2c;
        case 0x1eed30u: goto label_1eed30;
        case 0x1eed34u: goto label_1eed34;
        case 0x1eed38u: goto label_1eed38;
        case 0x1eed3cu: goto label_1eed3c;
        case 0x1eed40u: goto label_1eed40;
        case 0x1eed44u: goto label_1eed44;
        case 0x1eed48u: goto label_1eed48;
        case 0x1eed4cu: goto label_1eed4c;
        case 0x1eed50u: goto label_1eed50;
        case 0x1eed54u: goto label_1eed54;
        case 0x1eed58u: goto label_1eed58;
        case 0x1eed5cu: goto label_1eed5c;
        case 0x1eed60u: goto label_1eed60;
        case 0x1eed64u: goto label_1eed64;
        case 0x1eed68u: goto label_1eed68;
        case 0x1eed6cu: goto label_1eed6c;
        case 0x1eed70u: goto label_1eed70;
        case 0x1eed74u: goto label_1eed74;
        case 0x1eed78u: goto label_1eed78;
        case 0x1eed7cu: goto label_1eed7c;
        case 0x1eed80u: goto label_1eed80;
        case 0x1eed84u: goto label_1eed84;
        case 0x1eed88u: goto label_1eed88;
        case 0x1eed8cu: goto label_1eed8c;
        case 0x1eed90u: goto label_1eed90;
        case 0x1eed94u: goto label_1eed94;
        case 0x1eed98u: goto label_1eed98;
        case 0x1eed9cu: goto label_1eed9c;
        case 0x1eeda0u: goto label_1eeda0;
        case 0x1eeda4u: goto label_1eeda4;
        case 0x1eeda8u: goto label_1eeda8;
        case 0x1eedacu: goto label_1eedac;
        case 0x1eedb0u: goto label_1eedb0;
        case 0x1eedb4u: goto label_1eedb4;
        case 0x1eedb8u: goto label_1eedb8;
        case 0x1eedbcu: goto label_1eedbc;
        case 0x1eedc0u: goto label_1eedc0;
        case 0x1eedc4u: goto label_1eedc4;
        case 0x1eedc8u: goto label_1eedc8;
        case 0x1eedccu: goto label_1eedcc;
        case 0x1eedd0u: goto label_1eedd0;
        case 0x1eedd4u: goto label_1eedd4;
        case 0x1eedd8u: goto label_1eedd8;
        case 0x1eeddcu: goto label_1eeddc;
        case 0x1eede0u: goto label_1eede0;
        case 0x1eede4u: goto label_1eede4;
        case 0x1eede8u: goto label_1eede8;
        case 0x1eedecu: goto label_1eedec;
        case 0x1eedf0u: goto label_1eedf0;
        case 0x1eedf4u: goto label_1eedf4;
        case 0x1eedf8u: goto label_1eedf8;
        case 0x1eedfcu: goto label_1eedfc;
        case 0x1eee00u: goto label_1eee00;
        case 0x1eee04u: goto label_1eee04;
        case 0x1eee08u: goto label_1eee08;
        case 0x1eee0cu: goto label_1eee0c;
        case 0x1eee10u: goto label_1eee10;
        case 0x1eee14u: goto label_1eee14;
        case 0x1eee18u: goto label_1eee18;
        case 0x1eee1cu: goto label_1eee1c;
        case 0x1eee20u: goto label_1eee20;
        case 0x1eee24u: goto label_1eee24;
        case 0x1eee28u: goto label_1eee28;
        case 0x1eee2cu: goto label_1eee2c;
        case 0x1eee30u: goto label_1eee30;
        case 0x1eee34u: goto label_1eee34;
        case 0x1eee38u: goto label_1eee38;
        case 0x1eee3cu: goto label_1eee3c;
        case 0x1eee40u: goto label_1eee40;
        case 0x1eee44u: goto label_1eee44;
        case 0x1eee48u: goto label_1eee48;
        case 0x1eee4cu: goto label_1eee4c;
        case 0x1eee50u: goto label_1eee50;
        case 0x1eee54u: goto label_1eee54;
        case 0x1eee58u: goto label_1eee58;
        case 0x1eee5cu: goto label_1eee5c;
        case 0x1eee60u: goto label_1eee60;
        case 0x1eee64u: goto label_1eee64;
        case 0x1eee68u: goto label_1eee68;
        case 0x1eee6cu: goto label_1eee6c;
        case 0x1eee70u: goto label_1eee70;
        case 0x1eee74u: goto label_1eee74;
        case 0x1eee78u: goto label_1eee78;
        case 0x1eee7cu: goto label_1eee7c;
        case 0x1eee80u: goto label_1eee80;
        case 0x1eee84u: goto label_1eee84;
        case 0x1eee88u: goto label_1eee88;
        case 0x1eee8cu: goto label_1eee8c;
        case 0x1eee90u: goto label_1eee90;
        case 0x1eee94u: goto label_1eee94;
        case 0x1eee98u: goto label_1eee98;
        case 0x1eee9cu: goto label_1eee9c;
        case 0x1eeea0u: goto label_1eeea0;
        case 0x1eeea4u: goto label_1eeea4;
        case 0x1eeea8u: goto label_1eeea8;
        case 0x1eeeacu: goto label_1eeeac;
        case 0x1eeeb0u: goto label_1eeeb0;
        case 0x1eeeb4u: goto label_1eeeb4;
        case 0x1eeeb8u: goto label_1eeeb8;
        case 0x1eeebcu: goto label_1eeebc;
        case 0x1eeec0u: goto label_1eeec0;
        case 0x1eeec4u: goto label_1eeec4;
        case 0x1eeec8u: goto label_1eeec8;
        case 0x1eeeccu: goto label_1eeecc;
        case 0x1eeed0u: goto label_1eeed0;
        case 0x1eeed4u: goto label_1eeed4;
        case 0x1eeed8u: goto label_1eeed8;
        case 0x1eeedcu: goto label_1eeedc;
        case 0x1eeee0u: goto label_1eeee0;
        case 0x1eeee4u: goto label_1eeee4;
        case 0x1eeee8u: goto label_1eeee8;
        case 0x1eeeecu: goto label_1eeeec;
        case 0x1eeef0u: goto label_1eeef0;
        case 0x1eeef4u: goto label_1eeef4;
        case 0x1eeef8u: goto label_1eeef8;
        case 0x1eeefcu: goto label_1eeefc;
        case 0x1eef00u: goto label_1eef00;
        case 0x1eef04u: goto label_1eef04;
        case 0x1eef08u: goto label_1eef08;
        case 0x1eef0cu: goto label_1eef0c;
        case 0x1eef10u: goto label_1eef10;
        case 0x1eef14u: goto label_1eef14;
        case 0x1eef18u: goto label_1eef18;
        case 0x1eef1cu: goto label_1eef1c;
        case 0x1eef20u: goto label_1eef20;
        case 0x1eef24u: goto label_1eef24;
        case 0x1eef28u: goto label_1eef28;
        case 0x1eef2cu: goto label_1eef2c;
        case 0x1eef30u: goto label_1eef30;
        case 0x1eef34u: goto label_1eef34;
        case 0x1eef38u: goto label_1eef38;
        case 0x1eef3cu: goto label_1eef3c;
        case 0x1eef40u: goto label_1eef40;
        case 0x1eef44u: goto label_1eef44;
        case 0x1eef48u: goto label_1eef48;
        case 0x1eef4cu: goto label_1eef4c;
        case 0x1eef50u: goto label_1eef50;
        case 0x1eef54u: goto label_1eef54;
        case 0x1eef58u: goto label_1eef58;
        case 0x1eef5cu: goto label_1eef5c;
        case 0x1eef60u: goto label_1eef60;
        case 0x1eef64u: goto label_1eef64;
        case 0x1eef68u: goto label_1eef68;
        case 0x1eef6cu: goto label_1eef6c;
        case 0x1eef70u: goto label_1eef70;
        case 0x1eef74u: goto label_1eef74;
        case 0x1eef78u: goto label_1eef78;
        case 0x1eef7cu: goto label_1eef7c;
        case 0x1eef80u: goto label_1eef80;
        case 0x1eef84u: goto label_1eef84;
        case 0x1eef88u: goto label_1eef88;
        case 0x1eef8cu: goto label_1eef8c;
        case 0x1eef90u: goto label_1eef90;
        case 0x1eef94u: goto label_1eef94;
        case 0x1eef98u: goto label_1eef98;
        case 0x1eef9cu: goto label_1eef9c;
        case 0x1eefa0u: goto label_1eefa0;
        case 0x1eefa4u: goto label_1eefa4;
        case 0x1eefa8u: goto label_1eefa8;
        case 0x1eefacu: goto label_1eefac;
        case 0x1eefb0u: goto label_1eefb0;
        case 0x1eefb4u: goto label_1eefb4;
        case 0x1eefb8u: goto label_1eefb8;
        case 0x1eefbcu: goto label_1eefbc;
        case 0x1eefc0u: goto label_1eefc0;
        case 0x1eefc4u: goto label_1eefc4;
        case 0x1eefc8u: goto label_1eefc8;
        case 0x1eefccu: goto label_1eefcc;
        case 0x1eefd0u: goto label_1eefd0;
        case 0x1eefd4u: goto label_1eefd4;
        case 0x1eefd8u: goto label_1eefd8;
        case 0x1eefdcu: goto label_1eefdc;
        case 0x1eefe0u: goto label_1eefe0;
        case 0x1eefe4u: goto label_1eefe4;
        case 0x1eefe8u: goto label_1eefe8;
        case 0x1eefecu: goto label_1eefec;
        case 0x1eeff0u: goto label_1eeff0;
        case 0x1eeff4u: goto label_1eeff4;
        case 0x1eeff8u: goto label_1eeff8;
        case 0x1eeffcu: goto label_1eeffc;
        default: break;
    }

    ctx->pc = 0x1eecc0u;

label_1eecc0:
    // 0x1eecc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1eecc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1eecc4:
    // 0x1eecc4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1eecc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1eecc8:
    // 0x1eecc8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1eecc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1eeccc:
    // 0x1eeccc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1eecccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eecd0:
    // 0x1eecd0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1eecd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1eecd4:
    // 0x1eecd4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1eecd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1eecd8:
    // 0x1eecd8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1eecd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_1eecdc:
    // 0x1eecdc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1eecdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_1eece0:
    // 0x1eece0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1eece0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_1eece4:
    // 0x1eece4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eece4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1eece8:
    // 0x1eece8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1eece8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1eecec:
    // 0x1eecec: 0x104000cf  beqz        $v0, . + 4 + (0xCF << 2)
label_1eecf0:
    if (ctx->pc == 0x1EECF0u) {
        ctx->pc = 0x1EECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECECu;
        // 0x1eecf0: 0x3c100055  lui         $s0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EECF4u;
        goto label_1eecf4;
    }
    ctx->pc = 0x1EECECu;
    {
        const bool branch_taken_0x1eecec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECECu;
        // 0x1eecf0: 0x3c100055  lui         $s0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eecec) {
            ctx->pc = 0x1EF02Cu;
            return;
        }
    }
    ctx->pc = 0x1EECF4u;
label_1eecf4:
    // 0x1eecf4: 0x8e640090  lw          $a0, 0x90($s3)
    ctx->pc = 0x1eecf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_1eecf8:
    // 0x1eecf8: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x1eecf8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eecfc:
    // 0x1eecfc: 0x240602cf  addiu       $a2, $zero, 0x2CF
    ctx->pc = 0x1eecfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 719));
label_1eed00:
    // 0x1eed00: 0x26106f20  addiu       $s0, $s0, 0x6F20
    ctx->pc = 0x1eed00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28448));
label_1eed04:
    // 0x1eed04: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1eed04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eed08:
    // 0x1eed08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eed08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eed0c:
    // 0x1eed0c: 0xc13a718  jal         func_4E9C60
label_1eed10:
    if (ctx->pc == 0x1EED10u) {
        ctx->pc = 0x1EED10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED0Cu;
        // 0x1eed10: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED14u;
        goto label_1eed14;
    }
    ctx->pc = 0x1EED0Cu;
    SET_GPR_U32(ctx, 31, 0x1EED14u);
    ctx->pc = 0x1EED10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED0Cu;
    // 0x1eed10: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9C60u, 0x1EED0Cu, 0x1EED14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED14u;
label_1eed14:
    // 0x1eed14: 0x267201a8  addiu       $s2, $s3, 0x1A8
    ctx->pc = 0x1eed14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 424));
label_1eed18:
    // 0x1eed18: 0x8e64017c  lw          $a0, 0x17C($s3)
    ctx->pc = 0x1eed18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 380)));
label_1eed1c:
    // 0x1eed1c: 0xc073462  jal         func_1CD188
label_1eed20:
    if (ctx->pc == 0x1EED20u) {
        ctx->pc = 0x1EED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED1Cu;
        // 0x1eed20: 0x26710198  addiu       $s1, $s3, 0x198 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED24u;
        goto label_1eed24;
    }
    ctx->pc = 0x1EED1Cu;
    SET_GPR_U32(ctx, 31, 0x1EED24u);
    ctx->pc = 0x1EED20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED1Cu;
    // 0x1eed20: 0x26710198  addiu       $s1, $s3, 0x198 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1EED1Cu, 0x1EED24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED24u;
label_1eed24:
    // 0x1eed24: 0x8e64017c  lw          $a0, 0x17C($s3)
    ctx->pc = 0x1eed24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 380)));
label_1eed28:
    // 0x1eed28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eed28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eed2c:
    // 0x1eed2c: 0xc139138  jal         func_4E44E0
label_1eed30:
    if (ctx->pc == 0x1EED30u) {
        ctx->pc = 0x1EED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED2Cu;
        // 0x1eed30: 0x240602d2  addiu       $a2, $zero, 0x2D2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 722));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED34u;
        goto label_1eed34;
    }
    ctx->pc = 0x1EED2Cu;
    SET_GPR_U32(ctx, 31, 0x1EED34u);
    ctx->pc = 0x1EED30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED2Cu;
    // 0x1eed30: 0x240602d2  addiu       $a2, $zero, 0x2D2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 722));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E44E0u, 0x1EED2Cu, 0x1EED34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED34u;
label_1eed34:
    // 0x1eed34: 0x8e640190  lw          $a0, 0x190($s3)
    ctx->pc = 0x1eed34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 400)));
label_1eed38:
    // 0x1eed38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eed38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eed3c:
    // 0x1eed3c: 0xc13a5a0  jal         func_4E9680
label_1eed40:
    if (ctx->pc == 0x1EED40u) {
        ctx->pc = 0x1EED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED3Cu;
        // 0x1eed40: 0x240602d7  addiu       $a2, $zero, 0x2D7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 727));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED44u;
        goto label_1eed44;
    }
    ctx->pc = 0x1EED3Cu;
    SET_GPR_U32(ctx, 31, 0x1EED44u);
    ctx->pc = 0x1EED40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED3Cu;
    // 0x1eed40: 0x240602d7  addiu       $a2, $zero, 0x2D7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 727));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9680u, 0x1EED3Cu, 0x1EED44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED44u;
label_1eed44:
    // 0x1eed44: 0x8e640194  lw          $a0, 0x194($s3)
    ctx->pc = 0x1eed44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 404)));
label_1eed48:
    // 0x1eed48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eed48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eed4c:
    // 0x1eed4c: 0xc13a5a0  jal         func_4E9680
label_1eed50:
    if (ctx->pc == 0x1EED50u) {
        ctx->pc = 0x1EED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED4Cu;
        // 0x1eed50: 0x240602d8  addiu       $a2, $zero, 0x2D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED54u;
        goto label_1eed54;
    }
    ctx->pc = 0x1EED4Cu;
    SET_GPR_U32(ctx, 31, 0x1EED54u);
    ctx->pc = 0x1EED50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED4Cu;
    // 0x1eed50: 0x240602d8  addiu       $a2, $zero, 0x2D8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9680u, 0x1EED4Cu, 0x1EED54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED54u;
label_1eed54:
    // 0x1eed54: 0x8e650184  lw          $a1, 0x184($s3)
    ctx->pc = 0x1eed54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 388)));
label_1eed58:
    // 0x1eed58: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1eed58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1eed5c:
    // 0x1eed5c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1eed5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1eed60:
    // 0x1eed60: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1eed60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1eed64:
    // 0x1eed64: 0x60f809  jalr        $v1
label_1eed68:
    if (ctx->pc == 0x1EED68u) {
        ctx->pc = 0x1EED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED64u;
        // 0x1eed68: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED6Cu;
        goto label_1eed6c;
    }
    ctx->pc = 0x1EED64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EED6Cu);
        ctx->pc = 0x1EED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED64u;
        // 0x1eed68: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EED64u, 0x1EED6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EED6Cu;
label_1eed6c:
    // 0x1eed6c: 0x8e640184  lw          $a0, 0x184($s3)
    ctx->pc = 0x1eed6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 388)));
label_1eed70:
    // 0x1eed70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eed70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eed74:
    // 0x1eed74: 0xc139fc8  jal         func_4E7F20
label_1eed78:
    if (ctx->pc == 0x1EED78u) {
        ctx->pc = 0x1EED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED74u;
        // 0x1eed78: 0x240602de  addiu       $a2, $zero, 0x2DE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 734));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED7Cu;
        goto label_1eed7c;
    }
    ctx->pc = 0x1EED74u;
    SET_GPR_U32(ctx, 31, 0x1EED7Cu);
    ctx->pc = 0x1EED78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED74u;
    // 0x1eed78: 0x240602de  addiu       $a2, $zero, 0x2DE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 734));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7F20u, 0x1EED74u, 0x1EED7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED7Cu;
label_1eed7c:
    // 0x1eed7c: 0x8e650180  lw          $a1, 0x180($s3)
    ctx->pc = 0x1eed7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 384)));
label_1eed80:
    // 0x1eed80: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1eed80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1eed84:
    // 0x1eed84: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1eed84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1eed88:
    // 0x1eed88: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1eed88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1eed8c:
    // 0x1eed8c: 0x60f809  jalr        $v1
label_1eed90:
    if (ctx->pc == 0x1EED90u) {
        ctx->pc = 0x1EED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED8Cu;
        // 0x1eed90: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED94u;
        goto label_1eed94;
    }
    ctx->pc = 0x1EED8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EED94u);
        ctx->pc = 0x1EED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED8Cu;
        // 0x1eed90: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EED8Cu, 0x1EED94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EED94u;
label_1eed94:
    // 0x1eed94: 0x8e640180  lw          $a0, 0x180($s3)
    ctx->pc = 0x1eed94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 384)));
label_1eed98:
    // 0x1eed98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eed98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eed9c:
    // 0x1eed9c: 0xc139fe8  jal         func_4E7FA0
label_1eeda0:
    if (ctx->pc == 0x1EEDA0u) {
        ctx->pc = 0x1EEDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED9Cu;
        // 0x1eeda0: 0x240602e1  addiu       $a2, $zero, 0x2E1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 737));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEDA4u;
        goto label_1eeda4;
    }
    ctx->pc = 0x1EED9Cu;
    SET_GPR_U32(ctx, 31, 0x1EEDA4u);
    ctx->pc = 0x1EEDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED9Cu;
    // 0x1eeda0: 0x240602e1  addiu       $a2, $zero, 0x2E1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 737));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7FA0u, 0x1EED9Cu, 0x1EEDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEDA4u;
label_1eeda4:
    // 0x1eeda4: 0x8e6401b8  lw          $a0, 0x1B8($s3)
    ctx->pc = 0x1eeda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 440)));
label_1eeda8:
    // 0x1eeda8: 0x8c8200d0  lw          $v0, 0xD0($a0)
    ctx->pc = 0x1eeda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_1eedac:
    // 0x1eedac: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x1eedacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_1eedb0:
    // 0x1eedb0: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x1eedb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1eedb4:
    // 0x1eedb4: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x1eedb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1eedb8:
    // 0x1eedb8: 0xa0f809  jalr        $a1
label_1eedbc:
    if (ctx->pc == 0x1EEDBCu) {
        ctx->pc = 0x1EEDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEDB8u;
        // 0x1eedbc: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEDC0u;
        goto label_1eedc0;
    }
    ctx->pc = 0x1EEDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1EEDC0u);
        ctx->pc = 0x1EEDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEDB8u;
        // 0x1eedbc: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEDB8u, 0x1EEDC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EEDC0u;
label_1eedc0:
    // 0x1eedc0: 0x8e6401b8  lw          $a0, 0x1B8($s3)
    ctx->pc = 0x1eedc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 440)));
label_1eedc4:
    // 0x1eedc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eedc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eedc8:
    // 0x1eedc8: 0xc13a72a  jal         func_4E9CA8
label_1eedcc:
    if (ctx->pc == 0x1EEDCCu) {
        ctx->pc = 0x1EEDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEDC8u;
        // 0x1eedcc: 0x240602e4  addiu       $a2, $zero, 0x2E4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 740));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEDD0u;
        goto label_1eedd0;
    }
    ctx->pc = 0x1EEDC8u;
    SET_GPR_U32(ctx, 31, 0x1EEDD0u);
    ctx->pc = 0x1EEDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEDC8u;
    // 0x1eedcc: 0x240602e4  addiu       $a2, $zero, 0x2E4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 740));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9CA8u, 0x1EEDC8u, 0x1EEDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEDD0u;
label_1eedd0:
    // 0x1eedd0: 0x8e6501c4  lw          $a1, 0x1C4($s3)
    ctx->pc = 0x1eedd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 452)));
label_1eedd4:
    // 0x1eedd4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1eedd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1eedd8:
    // 0x1eedd8: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1eedd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1eeddc:
    // 0x1eeddc: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1eeddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1eede0:
    // 0x1eede0: 0x60f809  jalr        $v1
label_1eede4:
    if (ctx->pc == 0x1EEDE4u) {
        ctx->pc = 0x1EEDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEDE0u;
        // 0x1eede4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEDE8u;
        goto label_1eede8;
    }
    ctx->pc = 0x1EEDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EEDE8u);
        ctx->pc = 0x1EEDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEDE0u;
        // 0x1eede4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEDE0u, 0x1EEDE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EEDE8u;
label_1eede8:
    // 0x1eede8: 0x8e6401c4  lw          $a0, 0x1C4($s3)
    ctx->pc = 0x1eede8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 452)));
label_1eedec:
    // 0x1eedec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eedecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eedf0:
    // 0x1eedf0: 0xc138e72  jal         func_4E39C8
label_1eedf4:
    if (ctx->pc == 0x1EEDF4u) {
        ctx->pc = 0x1EEDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEDF0u;
        // 0x1eedf4: 0x240602e7  addiu       $a2, $zero, 0x2E7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 743));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEDF8u;
        goto label_1eedf8;
    }
    ctx->pc = 0x1EEDF0u;
    SET_GPR_U32(ctx, 31, 0x1EEDF8u);
    ctx->pc = 0x1EEDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEDF0u;
    // 0x1eedf4: 0x240602e7  addiu       $a2, $zero, 0x2E7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 743));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x1EEDF0u, 0x1EEDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEDF8u;
label_1eedf8:
    // 0x1eedf8: 0x8e6401cc  lw          $a0, 0x1CC($s3)
    ctx->pc = 0x1eedf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 460)));
label_1eedfc:
    // 0x1eedfc: 0x8c8200d0  lw          $v0, 0xD0($a0)
    ctx->pc = 0x1eedfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_1eee00:
    // 0x1eee00: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x1eee00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_1eee04:
    // 0x1eee04: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x1eee04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1eee08:
    // 0x1eee08: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x1eee08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1eee0c:
    // 0x1eee0c: 0xa0f809  jalr        $a1
label_1eee10:
    if (ctx->pc == 0x1EEE10u) {
        ctx->pc = 0x1EEE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE0Cu;
        // 0x1eee10: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE14u;
        goto label_1eee14;
    }
    ctx->pc = 0x1EEE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1EEE14u);
        ctx->pc = 0x1EEE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE0Cu;
        // 0x1eee10: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEE0Cu, 0x1EEE14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EEE14u;
label_1eee14:
    // 0x1eee14: 0x8e6401cc  lw          $a0, 0x1CC($s3)
    ctx->pc = 0x1eee14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 460)));
label_1eee18:
    // 0x1eee18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eee18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eee1c:
    // 0x1eee1c: 0xc13a72a  jal         func_4E9CA8
label_1eee20:
    if (ctx->pc == 0x1EEE20u) {
        ctx->pc = 0x1EEE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE1Cu;
        // 0x1eee20: 0x240602ea  addiu       $a2, $zero, 0x2EA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 746));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE24u;
        goto label_1eee24;
    }
    ctx->pc = 0x1EEE1Cu;
    SET_GPR_U32(ctx, 31, 0x1EEE24u);
    ctx->pc = 0x1EEE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEE1Cu;
    // 0x1eee20: 0x240602ea  addiu       $a2, $zero, 0x2EA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 746));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9CA8u, 0x1EEE1Cu, 0x1EEE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEE24u;
label_1eee24:
    // 0x1eee24: 0x8e6401bc  lw          $a0, 0x1BC($s3)
    ctx->pc = 0x1eee24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 444)));
label_1eee28:
    // 0x1eee28: 0x8c8200d0  lw          $v0, 0xD0($a0)
    ctx->pc = 0x1eee28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_1eee2c:
    // 0x1eee2c: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x1eee2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_1eee30:
    // 0x1eee30: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x1eee30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1eee34:
    // 0x1eee34: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x1eee34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1eee38:
    // 0x1eee38: 0xa0f809  jalr        $a1
label_1eee3c:
    if (ctx->pc == 0x1EEE3Cu) {
        ctx->pc = 0x1EEE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE38u;
        // 0x1eee3c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE40u;
        goto label_1eee40;
    }
    ctx->pc = 0x1EEE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1EEE40u);
        ctx->pc = 0x1EEE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE38u;
        // 0x1eee3c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEE38u, 0x1EEE40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EEE40u;
label_1eee40:
    // 0x1eee40: 0x8e6401bc  lw          $a0, 0x1BC($s3)
    ctx->pc = 0x1eee40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 444)));
label_1eee44:
    // 0x1eee44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eee44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eee48:
    // 0x1eee48: 0xc13a72a  jal         func_4E9CA8
label_1eee4c:
    if (ctx->pc == 0x1EEE4Cu) {
        ctx->pc = 0x1EEE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE48u;
        // 0x1eee4c: 0x240602ed  addiu       $a2, $zero, 0x2ED (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 749));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE50u;
        goto label_1eee50;
    }
    ctx->pc = 0x1EEE48u;
    SET_GPR_U32(ctx, 31, 0x1EEE50u);
    ctx->pc = 0x1EEE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEE48u;
    // 0x1eee4c: 0x240602ed  addiu       $a2, $zero, 0x2ED (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 749));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9CA8u, 0x1EEE48u, 0x1EEE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEE50u;
label_1eee50:
    // 0x1eee50: 0x8e6501c8  lw          $a1, 0x1C8($s3)
    ctx->pc = 0x1eee50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 456)));
label_1eee54:
    // 0x1eee54: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1eee54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1eee58:
    // 0x1eee58: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1eee58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1eee5c:
    // 0x1eee5c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1eee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1eee60:
    // 0x1eee60: 0x60f809  jalr        $v1
label_1eee64:
    if (ctx->pc == 0x1EEE64u) {
        ctx->pc = 0x1EEE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE60u;
        // 0x1eee64: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE68u;
        goto label_1eee68;
    }
    ctx->pc = 0x1EEE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EEE68u);
        ctx->pc = 0x1EEE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE60u;
        // 0x1eee64: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEE60u, 0x1EEE68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EEE68u;
label_1eee68:
    // 0x1eee68: 0x8e6401c8  lw          $a0, 0x1C8($s3)
    ctx->pc = 0x1eee68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 456)));
label_1eee6c:
    // 0x1eee6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eee6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eee70:
    // 0x1eee70: 0xc138e72  jal         func_4E39C8
label_1eee74:
    if (ctx->pc == 0x1EEE74u) {
        ctx->pc = 0x1EEE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE70u;
        // 0x1eee74: 0x240602f0  addiu       $a2, $zero, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE78u;
        goto label_1eee78;
    }
    ctx->pc = 0x1EEE70u;
    SET_GPR_U32(ctx, 31, 0x1EEE78u);
    ctx->pc = 0x1EEE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEE70u;
    // 0x1eee74: 0x240602f0  addiu       $a2, $zero, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x1EEE70u, 0x1EEE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEE78u;
label_1eee78:
    // 0x1eee78: 0x8e6501d0  lw          $a1, 0x1D0($s3)
    ctx->pc = 0x1eee78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 464)));
label_1eee7c:
    // 0x1eee7c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1eee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1eee80:
    // 0x1eee80: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1eee80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1eee84:
    // 0x1eee84: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1eee84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1eee88:
    // 0x1eee88: 0x60f809  jalr        $v1
label_1eee8c:
    if (ctx->pc == 0x1EEE8Cu) {
        ctx->pc = 0x1EEE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE88u;
        // 0x1eee8c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE90u;
        goto label_1eee90;
    }
    ctx->pc = 0x1EEE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EEE90u);
        ctx->pc = 0x1EEE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE88u;
        // 0x1eee8c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEE88u, 0x1EEE90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EEE90u;
label_1eee90:
    // 0x1eee90: 0x8e6401d0  lw          $a0, 0x1D0($s3)
    ctx->pc = 0x1eee90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 464)));
label_1eee94:
    // 0x1eee94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eee94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eee98:
    // 0x1eee98: 0xc138e72  jal         func_4E39C8
label_1eee9c:
    if (ctx->pc == 0x1EEE9Cu) {
        ctx->pc = 0x1EEE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE98u;
        // 0x1eee9c: 0x240602f3  addiu       $a2, $zero, 0x2F3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 755));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEEA0u;
        goto label_1eeea0;
    }
    ctx->pc = 0x1EEE98u;
    SET_GPR_U32(ctx, 31, 0x1EEEA0u);
    ctx->pc = 0x1EEE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEE98u;
    // 0x1eee9c: 0x240602f3  addiu       $a2, $zero, 0x2F3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 755));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x1EEE98u, 0x1EEEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEEA0u;
label_1eeea0:
    // 0x1eeea0: 0x8e6501d4  lw          $a1, 0x1D4($s3)
    ctx->pc = 0x1eeea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 468)));
label_1eeea4:
    // 0x1eeea4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1eeea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1eeea8:
    // 0x1eeea8: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1eeea8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1eeeac:
    // 0x1eeeac: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1eeeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1eeeb0:
    // 0x1eeeb0: 0x60f809  jalr        $v1
label_1eeeb4:
    if (ctx->pc == 0x1EEEB4u) {
        ctx->pc = 0x1EEEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEEB0u;
        // 0x1eeeb4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEEB8u;
        goto label_1eeeb8;
    }
    ctx->pc = 0x1EEEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EEEB8u);
        ctx->pc = 0x1EEEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEEB0u;
        // 0x1eeeb4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEEB0u, 0x1EEEB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EEEB8u;
label_1eeeb8:
    // 0x1eeeb8: 0x8e6401d4  lw          $a0, 0x1D4($s3)
    ctx->pc = 0x1eeeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 468)));
label_1eeebc:
    // 0x1eeebc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eeebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eeec0:
    // 0x1eeec0: 0xc138e72  jal         func_4E39C8
label_1eeec4:
    if (ctx->pc == 0x1EEEC4u) {
        ctx->pc = 0x1EEEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEEC0u;
        // 0x1eeec4: 0x240602f5  addiu       $a2, $zero, 0x2F5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 757));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEEC8u;
        goto label_1eeec8;
    }
    ctx->pc = 0x1EEEC0u;
    SET_GPR_U32(ctx, 31, 0x1EEEC8u);
    ctx->pc = 0x1EEEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEEC0u;
    // 0x1eeec4: 0x240602f5  addiu       $a2, $zero, 0x2F5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 757));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x1EEEC0u, 0x1EEEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEEC8u;
label_1eeec8:
    // 0x1eeec8: 0x8e6501d8  lw          $a1, 0x1D8($s3)
    ctx->pc = 0x1eeec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 472)));
label_1eeecc:
    // 0x1eeecc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1eeeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1eeed0:
    // 0x1eeed0: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1eeed0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1eeed4:
    // 0x1eeed4: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1eeed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1eeed8:
    // 0x1eeed8: 0x60f809  jalr        $v1
label_1eeedc:
    if (ctx->pc == 0x1EEEDCu) {
        ctx->pc = 0x1EEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEED8u;
        // 0x1eeedc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEEE0u;
        goto label_1eeee0;
    }
    ctx->pc = 0x1EEED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EEEE0u);
        ctx->pc = 0x1EEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEED8u;
        // 0x1eeedc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEED8u, 0x1EEEE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EEEE0u;
label_1eeee0:
    // 0x1eeee0: 0x8e6401d8  lw          $a0, 0x1D8($s3)
    ctx->pc = 0x1eeee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 472)));
label_1eeee4:
    // 0x1eeee4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eeee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eeee8:
    // 0x1eeee8: 0xc138e72  jal         func_4E39C8
label_1eeeec:
    if (ctx->pc == 0x1EEEECu) {
        ctx->pc = 0x1EEEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEEE8u;
        // 0x1eeeec: 0x240602f7  addiu       $a2, $zero, 0x2F7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 759));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEEF0u;
        goto label_1eeef0;
    }
    ctx->pc = 0x1EEEE8u;
    SET_GPR_U32(ctx, 31, 0x1EEEF0u);
    ctx->pc = 0x1EEEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEEE8u;
    // 0x1eeeec: 0x240602f7  addiu       $a2, $zero, 0x2F7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 759));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x1EEEE8u, 0x1EEEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEEF0u;
label_1eeef0:
    // 0x1eeef0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1eeef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1eeef4:
    // 0x1eeef4: 0x0  nop
    ctx->pc = 0x1eeef4u;
    // NOP
label_1eeef8:
    // 0x1eeef8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1eeef8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1eeefc:
    // 0x1eeefc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1eeefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1eef00:
    // 0x1eef00: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1eef00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1eef04:
    // 0x1eef04: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1eef04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1eef08:
    // 0x1eef08: 0x60f809  jalr        $v1
label_1eef0c:
    if (ctx->pc == 0x1EEF0Cu) {
        ctx->pc = 0x1EEF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF08u;
        // 0x1eef0c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEF10u;
        goto label_1eef10;
    }
    ctx->pc = 0x1EEF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EEF10u);
        ctx->pc = 0x1EEF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF08u;
        // 0x1eef0c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEF08u, 0x1EEF10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EEF10u;
label_1eef10:
    // 0x1eef10: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1eef10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1eef14:
    // 0x1eef14: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1eef14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1eef18:
    // 0x1eef18: 0x240602fb  addiu       $a2, $zero, 0x2FB
    ctx->pc = 0x1eef18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 763));
label_1eef1c:
    // 0x1eef1c: 0xc138e72  jal         func_4E39C8
label_1eef20:
    if (ctx->pc == 0x1EEF20u) {
        ctx->pc = 0x1EEF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF1Cu;
        // 0x1eef20: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEF24u;
        goto label_1eef24;
    }
    ctx->pc = 0x1EEF1Cu;
    SET_GPR_U32(ctx, 31, 0x1EEF24u);
    ctx->pc = 0x1EEF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEF1Cu;
    // 0x1eef20: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x1EEF1Cu, 0x1EEF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEF24u;
label_1eef24:
    // 0x1eef24: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1eef24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1eef28:
    // 0x1eef28: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1eef28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1eef2c:
    // 0x1eef2c: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1eef2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1eef30:
    // 0x1eef30: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1eef30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1eef34:
    // 0x1eef34: 0x60f809  jalr        $v1
label_1eef38:
    if (ctx->pc == 0x1EEF38u) {
        ctx->pc = 0x1EEF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF34u;
        // 0x1eef38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEF3Cu;
        goto label_1eef3c;
    }
    ctx->pc = 0x1EEF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EEF3Cu);
        ctx->pc = 0x1EEF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF34u;
        // 0x1eef38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEF34u, 0x1EEF3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EEF3Cu;
label_1eef3c:
    // 0x1eef3c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1eef3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1eef40:
    // 0x1eef40: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1eef40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1eef44:
    // 0x1eef44: 0x240602fd  addiu       $a2, $zero, 0x2FD
    ctx->pc = 0x1eef44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 765));
label_1eef48:
    // 0x1eef48: 0xc138e72  jal         func_4E39C8
label_1eef4c:
    if (ctx->pc == 0x1EEF4Cu) {
        ctx->pc = 0x1EEF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF48u;
        // 0x1eef4c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEF50u;
        goto label_1eef50;
    }
    ctx->pc = 0x1EEF48u;
    SET_GPR_U32(ctx, 31, 0x1EEF50u);
    ctx->pc = 0x1EEF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEF48u;
    // 0x1eef4c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x1EEF48u, 0x1EEF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEF50u;
label_1eef50:
    // 0x1eef50: 0x2e820004  sltiu       $v0, $s4, 0x4
    ctx->pc = 0x1eef50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1eef54:
    // 0x1eef54: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
label_1eef58:
    if (ctx->pc == 0x1EEF58u) {
        ctx->pc = 0x1EEF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF54u;
        // 0x1eef58: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEF5Cu;
        goto label_1eef5c;
    }
    ctx->pc = 0x1EEF54u;
    {
        const bool branch_taken_0x1eef54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eef54) {
            ctx->pc = 0x1EEF58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEF54u;
            // 0x1eef58: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eeef8;
        }
    }
    ctx->pc = 0x1EEF5Cu;
label_1eef5c:
    // 0x1eef5c: 0x8e6201e0  lw          $v0, 0x1E0($s3)
    ctx->pc = 0x1eef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 480)));
label_1eef60:
    // 0x1eef60: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1eef64:
    if (ctx->pc == 0x1EEF64u) {
        ctx->pc = 0x1EEF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF60u;
        // 0x1eef64: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEF68u;
        goto label_1eef68;
    }
    ctx->pc = 0x1EEF60u;
    {
        const bool branch_taken_0x1eef60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF60u;
        // 0x1eef64: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef60) {
            ctx->pc = 0x1EEF9Cu;
            goto label_1eef9c;
        }
    }
    ctx->pc = 0x1EEF68u;
label_1eef68:
    // 0x1eef68: 0x26700094  addiu       $s0, $s3, 0x94
    ctx->pc = 0x1eef68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 148));
label_1eef6c:
    // 0x1eef6c: 0x0  nop
    ctx->pc = 0x1eef6cu;
    // NOP
label_1eef70:
    // 0x1eef70: 0xc0e4060  jal         func_390180
label_1eef74:
    if (ctx->pc == 0x1EEF74u) {
        ctx->pc = 0x1EEF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF70u;
        // 0x1eef74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEF78u;
        goto label_1eef78;
    }
    ctx->pc = 0x1EEF70u;
    SET_GPR_U32(ctx, 31, 0x1EEF78u);
    ctx->pc = 0x1EEF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEF70u;
    // 0x1eef74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1EEF70u, 0x1EEF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEF78u;
label_1eef78:
    // 0x1eef78: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1eef7c:
    if (ctx->pc == 0x1EEF7Cu) {
        ctx->pc = 0x1EEF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF78u;
        // 0x1eef7c: 0x8e6201e0  lw          $v0, 0x1E0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEF80u;
        goto label_1eef80;
    }
    ctx->pc = 0x1EEF78u;
    {
        const bool branch_taken_0x1eef78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eef78) {
            ctx->pc = 0x1EEF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEF78u;
            // 0x1eef7c: 0x8e6201e0  lw          $v0, 0x1E0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEF8Cu;
            goto label_1eef8c;
        }
    }
    ctx->pc = 0x1EEF80u;
label_1eef80:
    // 0x1eef80: 0xc08cfbc  jal         func_233EF0
label_1eef84:
    if (ctx->pc == 0x1EEF84u) {
        ctx->pc = 0x1EEF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF80u;
        // 0x1eef84: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEF88u;
        goto label_1eef88;
    }
    ctx->pc = 0x1EEF80u;
    SET_GPR_U32(ctx, 31, 0x1EEF88u);
    ctx->pc = 0x1EEF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEF80u;
    // 0x1eef84: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233EF0u, 0x1EEF80u, 0x1EEF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEF88u;
label_1eef88:
    // 0x1eef88: 0x8e6201e0  lw          $v0, 0x1E0($s3)
    ctx->pc = 0x1eef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 480)));
label_1eef8c:
    // 0x1eef8c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1eef8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1eef90:
    // 0x1eef90: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1eef90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1eef94:
    // 0x1eef94: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1eef98:
    if (ctx->pc == 0x1EEF98u) {
        ctx->pc = 0x1EEF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF94u;
        // 0x1eef98: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEF9Cu;
        goto label_1eef9c;
    }
    ctx->pc = 0x1EEF94u;
    {
        const bool branch_taken_0x1eef94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF94u;
        // 0x1eef98: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef94) {
            ctx->pc = 0x1EEF70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eef70;
        }
    }
    ctx->pc = 0x1EEF9Cu;
label_1eef9c:
    // 0x1eef9c: 0xc05a87a  jal         func_16A1E8
label_1eefa0:
    if (ctx->pc == 0x1EEFA0u) {
        ctx->pc = 0x1EEFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF9Cu;
        // 0x1eefa0: 0x86640134  lh          $a0, 0x134($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEFA4u;
        goto label_1eefa4;
    }
    ctx->pc = 0x1EEF9Cu;
    SET_GPR_U32(ctx, 31, 0x1EEFA4u);
    ctx->pc = 0x1EEFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEF9Cu;
    // 0x1eefa0: 0x86640134  lh          $a0, 0x134($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A1E8u, 0x1EEF9Cu, 0x1EEFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEFA4u;
label_1eefa4:
    // 0x1eefa4: 0xc05a87a  jal         func_16A1E8
label_1eefa8:
    if (ctx->pc == 0x1EEFA8u) {
        ctx->pc = 0x1EEFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEFA4u;
        // 0x1eefa8: 0x86640136  lh          $a0, 0x136($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 310)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEFACu;
        goto label_1eefac;
    }
    ctx->pc = 0x1EEFA4u;
    SET_GPR_U32(ctx, 31, 0x1EEFACu);
    ctx->pc = 0x1EEFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEFA4u;
    // 0x1eefa8: 0x86640136  lh          $a0, 0x136($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 310)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A1E8u, 0x1EEFA4u, 0x1EEFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEFACu;
label_1eefac:
    // 0x1eefac: 0x8e62008c  lw          $v0, 0x8C($s3)
    ctx->pc = 0x1eefacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_1eefb0:
    // 0x1eefb0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1eefb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1eefb4:
    // 0x1eefb4: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1eefb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1eefb8:
    // 0x1eefb8: 0x5203000c  beql        $s0, $v1, . + 4 + (0xC << 2)
label_1eefbc:
    if (ctx->pc == 0x1EEFBCu) {
        ctx->pc = 0x1EEFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEFB8u;
        // 0x1eefbc: 0x8e71008c  lw          $s1, 0x8C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEFC0u;
        goto label_1eefc0;
    }
    ctx->pc = 0x1EEFB8u;
    {
        const bool branch_taken_0x1eefb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1eefb8) {
            ctx->pc = 0x1EEFBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEFB8u;
            // 0x1eefbc: 0x8e71008c  lw          $s1, 0x8C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEFECu;
            goto label_1eefec;
        }
    }
    ctx->pc = 0x1EEFC0u;
label_1eefc0:
    // 0x1eefc0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1eefc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eefc4:
    // 0x1eefc4: 0x0  nop
    ctx->pc = 0x1eefc4u;
    // NOP
label_1eefc8:
    // 0x1eefc8: 0x26c56f20  addiu       $a1, $s6, 0x6F20
    ctx->pc = 0x1eefc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 28448));
label_1eefcc:
    // 0x1eefcc: 0x2406030b  addiu       $a2, $zero, 0x30B
    ctx->pc = 0x1eefccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 779));
label_1eefd0:
    // 0x1eefd0: 0xc13a74a  jal         func_4E9D28
label_1eefd4:
    if (ctx->pc == 0x1EEFD4u) {
        ctx->pc = 0x1EEFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEFD0u;
        // 0x1eefd4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEFD8u;
        goto label_1eefd8;
    }
    ctx->pc = 0x1EEFD0u;
    SET_GPR_U32(ctx, 31, 0x1EEFD8u);
    ctx->pc = 0x1EEFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEFD0u;
    // 0x1eefd4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9D28u, 0x1EEFD0u, 0x1EEFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEFD8u;
label_1eefd8:
    // 0x1eefd8: 0x8e62008c  lw          $v0, 0x8C($s3)
    ctx->pc = 0x1eefd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_1eefdc:
    // 0x1eefdc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1eefdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1eefe0:
    // 0x1eefe0: 0x5603fff9  bnel        $s0, $v1, . + 4 + (-0x7 << 2)
label_1eefe4:
    if (ctx->pc == 0x1EEFE4u) {
        ctx->pc = 0x1EEFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEFE0u;
        // 0x1eefe4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEFE8u;
        goto label_1eefe8;
    }
    ctx->pc = 0x1EEFE0u;
    {
        const bool branch_taken_0x1eefe0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1eefe0) {
            ctx->pc = 0x1EEFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEFE0u;
            // 0x1eefe4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eefc8;
        }
    }
    ctx->pc = 0x1EEFE8u;
label_1eefe8:
    // 0x1eefe8: 0x8e71008c  lw          $s1, 0x8C($s3)
    ctx->pc = 0x1eefe8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_1eefec:
    // 0x1eefec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eefecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eeff0:
    // 0x1eeff0: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x1eeff0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1eeff4:
    // 0x1eeff4: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x1eeff4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1eeff8:
    // 0x1eeff8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1eeff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1eeffc:
    // 0x1eeffc: 0xc10c1bb  jal         func_4306EC
    ctx->pc = 0x1EEFFCu;
    SET_GPR_U32(ctx, 31, 0x1EF004u);
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x1EEFFCu, 0x1EF004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF004u;
}
