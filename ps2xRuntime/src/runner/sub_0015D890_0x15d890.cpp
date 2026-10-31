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

// Function: sub_0015D890
// Address: 0x15d890 - 0x15db68
void sub_0015D890_0x15d890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D890_0x15d890");
#endif

    switch (ctx->pc) {
        case 0x15d890u: goto label_15d890;
        case 0x15d894u: goto label_15d894;
        case 0x15d898u: goto label_15d898;
        case 0x15d89cu: goto label_15d89c;
        case 0x15d8a0u: goto label_15d8a0;
        case 0x15d8a4u: goto label_15d8a4;
        case 0x15d8a8u: goto label_15d8a8;
        case 0x15d8acu: goto label_15d8ac;
        case 0x15d8b0u: goto label_15d8b0;
        case 0x15d8b4u: goto label_15d8b4;
        case 0x15d8b8u: goto label_15d8b8;
        case 0x15d8bcu: goto label_15d8bc;
        case 0x15d8c0u: goto label_15d8c0;
        case 0x15d8c4u: goto label_15d8c4;
        case 0x15d8c8u: goto label_15d8c8;
        case 0x15d8ccu: goto label_15d8cc;
        case 0x15d8d0u: goto label_15d8d0;
        case 0x15d8d4u: goto label_15d8d4;
        case 0x15d8d8u: goto label_15d8d8;
        case 0x15d8dcu: goto label_15d8dc;
        case 0x15d8e0u: goto label_15d8e0;
        case 0x15d8e4u: goto label_15d8e4;
        case 0x15d8e8u: goto label_15d8e8;
        case 0x15d8ecu: goto label_15d8ec;
        case 0x15d8f0u: goto label_15d8f0;
        case 0x15d8f4u: goto label_15d8f4;
        case 0x15d8f8u: goto label_15d8f8;
        case 0x15d8fcu: goto label_15d8fc;
        case 0x15d900u: goto label_15d900;
        case 0x15d904u: goto label_15d904;
        case 0x15d908u: goto label_15d908;
        case 0x15d90cu: goto label_15d90c;
        case 0x15d910u: goto label_15d910;
        case 0x15d914u: goto label_15d914;
        case 0x15d918u: goto label_15d918;
        case 0x15d91cu: goto label_15d91c;
        case 0x15d920u: goto label_15d920;
        case 0x15d924u: goto label_15d924;
        case 0x15d928u: goto label_15d928;
        case 0x15d92cu: goto label_15d92c;
        case 0x15d930u: goto label_15d930;
        case 0x15d934u: goto label_15d934;
        case 0x15d938u: goto label_15d938;
        case 0x15d93cu: goto label_15d93c;
        case 0x15d940u: goto label_15d940;
        case 0x15d944u: goto label_15d944;
        case 0x15d948u: goto label_15d948;
        case 0x15d94cu: goto label_15d94c;
        case 0x15d950u: goto label_15d950;
        case 0x15d954u: goto label_15d954;
        case 0x15d958u: goto label_15d958;
        case 0x15d95cu: goto label_15d95c;
        case 0x15d960u: goto label_15d960;
        case 0x15d964u: goto label_15d964;
        case 0x15d968u: goto label_15d968;
        case 0x15d96cu: goto label_15d96c;
        case 0x15d970u: goto label_15d970;
        case 0x15d974u: goto label_15d974;
        case 0x15d978u: goto label_15d978;
        case 0x15d97cu: goto label_15d97c;
        case 0x15d980u: goto label_15d980;
        case 0x15d984u: goto label_15d984;
        case 0x15d988u: goto label_15d988;
        case 0x15d98cu: goto label_15d98c;
        case 0x15d990u: goto label_15d990;
        case 0x15d994u: goto label_15d994;
        case 0x15d998u: goto label_15d998;
        case 0x15d99cu: goto label_15d99c;
        case 0x15d9a0u: goto label_15d9a0;
        case 0x15d9a4u: goto label_15d9a4;
        case 0x15d9a8u: goto label_15d9a8;
        case 0x15d9acu: goto label_15d9ac;
        case 0x15d9b0u: goto label_15d9b0;
        case 0x15d9b4u: goto label_15d9b4;
        case 0x15d9b8u: goto label_15d9b8;
        case 0x15d9bcu: goto label_15d9bc;
        case 0x15d9c0u: goto label_15d9c0;
        case 0x15d9c4u: goto label_15d9c4;
        case 0x15d9c8u: goto label_15d9c8;
        case 0x15d9ccu: goto label_15d9cc;
        case 0x15d9d0u: goto label_15d9d0;
        case 0x15d9d4u: goto label_15d9d4;
        case 0x15d9d8u: goto label_15d9d8;
        case 0x15d9dcu: goto label_15d9dc;
        case 0x15d9e0u: goto label_15d9e0;
        case 0x15d9e4u: goto label_15d9e4;
        case 0x15d9e8u: goto label_15d9e8;
        case 0x15d9ecu: goto label_15d9ec;
        case 0x15d9f0u: goto label_15d9f0;
        case 0x15d9f4u: goto label_15d9f4;
        case 0x15d9f8u: goto label_15d9f8;
        case 0x15d9fcu: goto label_15d9fc;
        case 0x15da00u: goto label_15da00;
        case 0x15da04u: goto label_15da04;
        case 0x15da08u: goto label_15da08;
        case 0x15da0cu: goto label_15da0c;
        case 0x15da10u: goto label_15da10;
        case 0x15da14u: goto label_15da14;
        case 0x15da18u: goto label_15da18;
        case 0x15da1cu: goto label_15da1c;
        case 0x15da20u: goto label_15da20;
        case 0x15da24u: goto label_15da24;
        case 0x15da28u: goto label_15da28;
        case 0x15da2cu: goto label_15da2c;
        case 0x15da30u: goto label_15da30;
        case 0x15da34u: goto label_15da34;
        case 0x15da38u: goto label_15da38;
        case 0x15da3cu: goto label_15da3c;
        case 0x15da40u: goto label_15da40;
        case 0x15da44u: goto label_15da44;
        case 0x15da48u: goto label_15da48;
        case 0x15da4cu: goto label_15da4c;
        case 0x15da50u: goto label_15da50;
        case 0x15da54u: goto label_15da54;
        case 0x15da58u: goto label_15da58;
        case 0x15da5cu: goto label_15da5c;
        case 0x15da60u: goto label_15da60;
        case 0x15da64u: goto label_15da64;
        case 0x15da68u: goto label_15da68;
        case 0x15da6cu: goto label_15da6c;
        case 0x15da70u: goto label_15da70;
        case 0x15da74u: goto label_15da74;
        case 0x15da78u: goto label_15da78;
        case 0x15da7cu: goto label_15da7c;
        case 0x15da80u: goto label_15da80;
        case 0x15da84u: goto label_15da84;
        case 0x15da88u: goto label_15da88;
        case 0x15da8cu: goto label_15da8c;
        case 0x15da90u: goto label_15da90;
        case 0x15da94u: goto label_15da94;
        case 0x15da98u: goto label_15da98;
        case 0x15da9cu: goto label_15da9c;
        case 0x15daa0u: goto label_15daa0;
        case 0x15daa4u: goto label_15daa4;
        case 0x15daa8u: goto label_15daa8;
        case 0x15daacu: goto label_15daac;
        case 0x15dab0u: goto label_15dab0;
        case 0x15dab4u: goto label_15dab4;
        case 0x15dab8u: goto label_15dab8;
        case 0x15dabcu: goto label_15dabc;
        case 0x15dac0u: goto label_15dac0;
        case 0x15dac4u: goto label_15dac4;
        case 0x15dac8u: goto label_15dac8;
        case 0x15daccu: goto label_15dacc;
        case 0x15dad0u: goto label_15dad0;
        case 0x15dad4u: goto label_15dad4;
        case 0x15dad8u: goto label_15dad8;
        case 0x15dadcu: goto label_15dadc;
        case 0x15dae0u: goto label_15dae0;
        case 0x15dae4u: goto label_15dae4;
        case 0x15dae8u: goto label_15dae8;
        case 0x15daecu: goto label_15daec;
        case 0x15daf0u: goto label_15daf0;
        case 0x15daf4u: goto label_15daf4;
        case 0x15daf8u: goto label_15daf8;
        case 0x15dafcu: goto label_15dafc;
        case 0x15db00u: goto label_15db00;
        case 0x15db04u: goto label_15db04;
        case 0x15db08u: goto label_15db08;
        case 0x15db0cu: goto label_15db0c;
        case 0x15db10u: goto label_15db10;
        case 0x15db14u: goto label_15db14;
        case 0x15db18u: goto label_15db18;
        case 0x15db1cu: goto label_15db1c;
        case 0x15db20u: goto label_15db20;
        case 0x15db24u: goto label_15db24;
        case 0x15db28u: goto label_15db28;
        case 0x15db2cu: goto label_15db2c;
        case 0x15db30u: goto label_15db30;
        case 0x15db34u: goto label_15db34;
        case 0x15db38u: goto label_15db38;
        case 0x15db3cu: goto label_15db3c;
        case 0x15db40u: goto label_15db40;
        case 0x15db44u: goto label_15db44;
        case 0x15db48u: goto label_15db48;
        case 0x15db4cu: goto label_15db4c;
        case 0x15db50u: goto label_15db50;
        case 0x15db54u: goto label_15db54;
        case 0x15db58u: goto label_15db58;
        case 0x15db5cu: goto label_15db5c;
        case 0x15db60u: goto label_15db60;
        case 0x15db64u: goto label_15db64;
        default: break;
    }

    ctx->pc = 0x15d890u;

label_15d890:
    // 0x15d890: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x15d890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_15d894:
    // 0x15d894: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15d894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15d898:
    // 0x15d898: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x15d898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_15d89c:
    // 0x15d89c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d8a0:
    // 0x15d8a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15d8a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15d8a4:
    // 0x15d8a4: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x15d8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_15d8a8:
    // 0x15d8a8: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x15d8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_15d8ac:
    // 0x15d8ac: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15d8acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15d8b0:
    // 0x15d8b0: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x15d8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_15d8b4:
    // 0x15d8b4: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x15d8b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_15d8b8:
    // 0x15d8b8: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x15d8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_15d8bc:
    // 0x15d8bc: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x15d8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_15d8c0:
    // 0x15d8c0: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x15d8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_15d8c4:
    // 0x15d8c4: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x15d8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_15d8c8:
    // 0x15d8c8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15d8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_15d8cc:
    // 0x15d8cc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15d8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_15d8d0:
    // 0x15d8d0: 0xc0517d8  jal         func_145F60
label_15d8d4:
    if (ctx->pc == 0x15D8D4u) {
        ctx->pc = 0x15D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D8D0u;
        // 0x15d8d4: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D8D8u;
        goto label_15d8d8;
    }
    ctx->pc = 0x15D8D0u;
    SET_GPR_U32(ctx, 31, 0x15D8D8u);
    ctx->pc = 0x15D8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D8D0u;
    // 0x15d8d4: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F60u, 0x15D8D0u, 0x15D8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D8D8u;
label_15d8d8:
    // 0x15d8d8: 0xc05587e  jal         func_1561F8
label_15d8dc:
    if (ctx->pc == 0x15D8DCu) {
        ctx->pc = 0x15D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D8D8u;
        // 0x15d8dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D8E0u;
        goto label_15d8e0;
    }
    ctx->pc = 0x15D8D8u;
    SET_GPR_U32(ctx, 31, 0x15D8E0u);
    ctx->pc = 0x15D8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D8D8u;
    // 0x15d8dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1561F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1561F8u, 0x15D8D8u, 0x15D8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D8E0u;
label_15d8e0:
    // 0x15d8e0: 0xc055888  jal         func_156220
label_15d8e4:
    if (ctx->pc == 0x15D8E4u) {
        ctx->pc = 0x15D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D8E0u;
        // 0x15d8e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D8E8u;
        goto label_15d8e8;
    }
    ctx->pc = 0x15D8E0u;
    SET_GPR_U32(ctx, 31, 0x15D8E8u);
    ctx->pc = 0x15D8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D8E0u;
    // 0x15d8e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156220u, 0x15D8E0u, 0x15D8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D8E8u;
label_15d8e8:
    // 0x15d8e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15d8ec:
    // 0x15d8ec: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15d8ecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_15d8f0:
    // 0x15d8f0: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x15d8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_15d8f4:
    // 0x15d8f4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x15d8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15d8f8:
    // 0x15d8f8: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x15d8f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_15d8fc:
    // 0x15d8fc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x15d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_15d900:
    // 0x15d900: 0x40f809  jalr        $v0
label_15d904:
    if (ctx->pc == 0x15D904u) {
        ctx->pc = 0x15D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D900u;
        // 0x15d904: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D908u;
        goto label_15d908;
    }
    ctx->pc = 0x15D900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15D908u);
        ctx->pc = 0x15D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D900u;
        // 0x15d904: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D900u, 0x15D908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D908u;
label_15d908:
    // 0x15d908: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x15d908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_15d90c:
    // 0x15d90c: 0xc0e8c52  jal         func_3A3148
label_15d910:
    if (ctx->pc == 0x15D910u) {
        ctx->pc = 0x15D910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D90Cu;
        // 0x15d910: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D914u;
        goto label_15d914;
    }
    ctx->pc = 0x15D90Cu;
    SET_GPR_U32(ctx, 31, 0x15D914u);
    ctx->pc = 0x15D910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D90Cu;
    // 0x15d910: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3148u, 0x15D90Cu, 0x15D914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D914u;
label_15d914:
    // 0x15d914: 0xc0558b2  jal         func_1562C8
label_15d918:
    if (ctx->pc == 0x15D918u) {
        ctx->pc = 0x15D918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D914u;
        // 0x15d918: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D91Cu;
        goto label_15d91c;
    }
    ctx->pc = 0x15D914u;
    SET_GPR_U32(ctx, 31, 0x15D91Cu);
    ctx->pc = 0x15D918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D914u;
    // 0x15d918: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1562C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1562C8u, 0x15D914u, 0x15D91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D91Cu;
label_15d91c:
    // 0x15d91c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x15d91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_15d920:
    // 0x15d920: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15d920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d924:
    // 0x15d924: 0x8c62536c  lw          $v0, 0x536C($v1)
    ctx->pc = 0x15d924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21356)));
label_15d928:
    // 0x15d928: 0x54440009  bnel        $v0, $a0, . + 4 + (0x9 << 2)
label_15d92c:
    if (ctx->pc == 0x15D92Cu) {
        ctx->pc = 0x15D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D928u;
        // 0x15d92c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D930u;
        goto label_15d930;
    }
    ctx->pc = 0x15D928u;
    {
        const bool branch_taken_0x15d928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x15d928) {
            ctx->pc = 0x15D92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D928u;
            // 0x15d92c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D950u;
            goto label_15d950;
        }
    }
    ctx->pc = 0x15D930u;
label_15d930:
    // 0x15d930: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x15d930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_15d934:
    // 0x15d934: 0xc0e8c6a  jal         func_3A31A8
label_15d938:
    if (ctx->pc == 0x15D938u) {
        ctx->pc = 0x15D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D934u;
        // 0x15d938: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D93Cu;
        goto label_15d93c;
    }
    ctx->pc = 0x15D934u;
    SET_GPR_U32(ctx, 31, 0x15D93Cu);
    ctx->pc = 0x15D938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D934u;
    // 0x15d938: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A31A8u, 0x15D934u, 0x15D93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D93Cu;
label_15d93c:
    // 0x15d93c: 0x8e8347c4  lw          $v1, 0x47C4($s4)
    ctx->pc = 0x15d93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18372)));
label_15d940:
    // 0x15d940: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x15d940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_15d944:
    // 0x15d944: 0xc0d4456  jal         func_351158
label_15d948:
    if (ctx->pc == 0x15D948u) {
        ctx->pc = 0x15D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D944u;
        // 0x15d948: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D94Cu;
        goto label_15d94c;
    }
    ctx->pc = 0x15D944u;
    SET_GPR_U32(ctx, 31, 0x15D94Cu);
    ctx->pc = 0x15D948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D944u;
    // 0x15d948: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351158u, 0x15D944u, 0x15D94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D94Cu;
label_15d94c:
    // 0x15d94c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15d94cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15d950:
    // 0x15d950: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x15d950u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_15d954:
    // 0x15d954: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x15d954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
label_15d958:
    // 0x15d958: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x15d958u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15d95c:
    // 0x15d95c: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x15d95cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15d960:
    // 0x15d960: 0xc062a60  jal         func_18A980
label_15d964:
    if (ctx->pc == 0x15D964u) {
        ctx->pc = 0x15D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D960u;
        // 0x15d964: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D968u;
        goto label_15d968;
    }
    ctx->pc = 0x15D960u;
    SET_GPR_U32(ctx, 31, 0x15D968u);
    ctx->pc = 0x15D964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D960u;
    // 0x15d964: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A980u, 0x15D960u, 0x15D968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D968u;
label_15d968:
    // 0x15d968: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x15d968u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_15d96c:
    // 0x15d96c: 0x8e25cdb4  lw          $a1, -0x324C($s1)
    ctx->pc = 0x15d96cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954420)));
label_15d970:
    // 0x15d970: 0x26510020  addiu       $s1, $s2, 0x20
    ctx->pc = 0x15d970u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_15d974:
    // 0x15d974: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15d974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15d978:
    // 0x15d978: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x15d978u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_15d97c:
    // 0x15d97c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x15d97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_15d980:
    // 0x15d980: 0x60f809  jalr        $v1
label_15d984:
    if (ctx->pc == 0x15D984u) {
        ctx->pc = 0x15D984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D980u;
        // 0x15d984: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D988u;
        goto label_15d988;
    }
    ctx->pc = 0x15D980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D988u);
        ctx->pc = 0x15D984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D980u;
        // 0x15d984: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D980u, 0x15D988u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D988u;
label_15d988:
    // 0x15d988: 0xc103e28  jal         func_40F8A0
label_15d98c:
    if (ctx->pc == 0x15D98Cu) {
        ctx->pc = 0x15D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D988u;
        // 0x15d98c: 0x8e8447c4  lw          $a0, 0x47C4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D990u;
        goto label_15d990;
    }
    ctx->pc = 0x15D988u;
    SET_GPR_U32(ctx, 31, 0x15D990u);
    ctx->pc = 0x15D98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D988u;
    // 0x15d98c: 0x8e8447c4  lw          $a0, 0x47C4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F8A0u, 0x15D988u, 0x15D990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D990u;
label_15d990:
    // 0x15d990: 0xc06181a  jal         func_186068
label_15d994:
    if (ctx->pc == 0x15D994u) {
        ctx->pc = 0x15D994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D990u;
        // 0x15d994: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D998u;
        goto label_15d998;
    }
    ctx->pc = 0x15D990u;
    SET_GPR_U32(ctx, 31, 0x15D998u);
    ctx->pc = 0x15D994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D990u;
    // 0x15d994: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186068u, 0x15D990u, 0x15D998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D998u;
label_15d998:
    // 0x15d998: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x15d998u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_15d99c:
    // 0x15d99c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x15d99cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15d9a0:
    // 0x15d9a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15d9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d9a4:
    // 0x15d9a4: 0xc047e6c  jal         func_11F9B0
label_15d9a8:
    if (ctx->pc == 0x15D9A8u) {
        ctx->pc = 0x15D9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D9A4u;
        // 0x15d9a8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D9ACu;
        goto label_15d9ac;
    }
    ctx->pc = 0x15D9A4u;
    SET_GPR_U32(ctx, 31, 0x15D9ACu);
    ctx->pc = 0x15D9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D9A4u;
    // 0x15d9a8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x15D9A4u, 0x15D9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D9ACu;
label_15d9ac:
    // 0x15d9ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15d9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15d9b0:
    // 0x15d9b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15d9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15d9b4:
    // 0x15d9b4: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x15d9b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_15d9b8:
    // 0x15d9b8: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x15d9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_15d9bc:
    // 0x15d9bc: 0xc0f809  jalr        $a2
label_15d9c0:
    if (ctx->pc == 0x15D9C0u) {
        ctx->pc = 0x15D9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D9BCu;
        // 0x15d9c0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D9C4u;
        goto label_15d9c4;
    }
    ctx->pc = 0x15D9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x15D9C4u);
        ctx->pc = 0x15D9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D9BCu;
        // 0x15d9c0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D9BCu, 0x15D9C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D9C4u;
label_15d9c4:
    // 0x15d9c4: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x15d9c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15d9c8:
    // 0x15d9c8: 0x2e640002  sltiu       $a0, $s3, 0x2
    ctx->pc = 0x15d9c8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_15d9cc:
    // 0x15d9cc: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x15d9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_15d9d0:
    // 0x15d9d0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x15d9d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15d9d4:
    // 0x15d9d4: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x15d9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_15d9d8:
    // 0x15d9d8: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
label_15d9dc:
    if (ctx->pc == 0x15D9DCu) {
        ctx->pc = 0x15D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D9D8u;
        // 0x15d9dc: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D9E0u;
        goto label_15d9e0;
    }
    ctx->pc = 0x15D9D8u;
    {
        const bool branch_taken_0x15d9d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D9D8u;
        // 0x15d9dc: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d9d8) {
            ctx->pc = 0x15D9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d9a0;
        }
    }
    ctx->pc = 0x15D9E0u;
label_15d9e0:
    // 0x15d9e0: 0x8ec4aa84  lw          $a0, -0x557C($s6)
    ctx->pc = 0x15d9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945412)));
label_15d9e4:
    // 0x15d9e4: 0xc043e04  jal         func_10F810
label_15d9e8:
    if (ctx->pc == 0x15D9E8u) {
        ctx->pc = 0x15D9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D9E4u;
        // 0x15d9e8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D9ECu;
        goto label_15d9ec;
    }
    ctx->pc = 0x15D9E4u;
    SET_GPR_U32(ctx, 31, 0x15D9ECu);
    ctx->pc = 0x15D9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D9E4u;
    // 0x15d9e8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F810u, 0x15D9E4u, 0x15D9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D9ECu;
label_15d9ec:
    // 0x15d9ec: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x15d9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_15d9f0:
    // 0x15d9f0: 0xc06ba0a  jal         func_1AE828
label_15d9f4:
    if (ctx->pc == 0x15D9F4u) {
        ctx->pc = 0x15D9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D9F0u;
        // 0x15d9f4: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D9F8u;
        goto label_15d9f8;
    }
    ctx->pc = 0x15D9F0u;
    SET_GPR_U32(ctx, 31, 0x15D9F8u);
    ctx->pc = 0x15D9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D9F0u;
    // 0x15d9f4: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x15D9F0u, 0x15D9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D9F8u;
label_15d9f8:
    // 0x15d9f8: 0xc06f5ba  jal         func_1BD6E8
label_15d9fc:
    if (ctx->pc == 0x15D9FCu) {
        ctx->pc = 0x15D9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D9F8u;
        // 0x15d9fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DA00u;
        goto label_15da00;
    }
    ctx->pc = 0x15D9F8u;
    SET_GPR_U32(ctx, 31, 0x15DA00u);
    ctx->pc = 0x15D9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D9F8u;
    // 0x15d9fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD6E8u, 0x15D9F8u, 0x15DA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA00u;
label_15da00:
    // 0x15da00: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_15da04:
    if (ctx->pc == 0x15DA04u) {
        ctx->pc = 0x15DA08u;
        goto label_15da08;
    }
    ctx->pc = 0x15DA00u;
    {
        const bool branch_taken_0x15da00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15da00) {
            ctx->pc = 0x15DA28u;
            goto label_15da28;
        }
    }
    ctx->pc = 0x15DA08u;
label_15da08:
    // 0x15da08: 0x8e4206d4  lw          $v0, 0x6D4($s2)
    ctx->pc = 0x15da08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1748)));
label_15da0c:
    // 0x15da0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_15da10:
    if (ctx->pc == 0x15DA10u) {
        ctx->pc = 0x15DA14u;
        goto label_15da14;
    }
    ctx->pc = 0x15DA0Cu;
    {
        const bool branch_taken_0x15da0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15da0c) {
            ctx->pc = 0x15DA28u;
            goto label_15da28;
        }
    }
    ctx->pc = 0x15DA14u;
label_15da14:
    // 0x15da14: 0xae4006d4  sw          $zero, 0x6D4($s2)
    ctx->pc = 0x15da14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1748), GPR_U32(ctx, 0));
label_15da18:
    // 0x15da18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15da18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_15da1c:
    // 0x15da1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x15da1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15da20:
    // 0x15da20: 0xc062c5a  jal         func_18B168
label_15da24:
    if (ctx->pc == 0x15DA24u) {
        ctx->pc = 0x15DA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA20u;
        // 0x15da24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DA28u;
        goto label_15da28;
    }
    ctx->pc = 0x15DA20u;
    SET_GPR_U32(ctx, 31, 0x15DA28u);
    ctx->pc = 0x15DA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DA20u;
    // 0x15da24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B168u, 0x15DA20u, 0x15DA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA28u;
label_15da28:
    // 0x15da28: 0xc06f866  jal         func_1BE198
label_15da2c:
    if (ctx->pc == 0x15DA2Cu) {
        ctx->pc = 0x15DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA28u;
        // 0x15da2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DA30u;
        goto label_15da30;
    }
    ctx->pc = 0x15DA28u;
    SET_GPR_U32(ctx, 31, 0x15DA30u);
    ctx->pc = 0x15DA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DA28u;
    // 0x15da2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE198u, 0x15DA28u, 0x15DA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA30u;
label_15da30:
    // 0x15da30: 0xc06fa12  jal         func_1BE848
label_15da34:
    if (ctx->pc == 0x15DA34u) {
        ctx->pc = 0x15DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA30u;
        // 0x15da34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DA38u;
        goto label_15da38;
    }
    ctx->pc = 0x15DA30u;
    SET_GPR_U32(ctx, 31, 0x15DA38u);
    ctx->pc = 0x15DA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DA30u;
    // 0x15da34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE848u, 0x15DA30u, 0x15DA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA38u;
label_15da38:
    // 0x15da38: 0xc061748  jal         func_185D20
label_15da3c:
    if (ctx->pc == 0x15DA3Cu) {
        ctx->pc = 0x15DA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA38u;
        // 0x15da3c: 0x8ee4cd4c  lw          $a0, -0x32B4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DA40u;
        goto label_15da40;
    }
    ctx->pc = 0x15DA38u;
    SET_GPR_U32(ctx, 31, 0x15DA40u);
    ctx->pc = 0x15DA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DA38u;
    // 0x15da3c: 0x8ee4cd4c  lw          $a0, -0x32B4($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185D20u, 0x15DA38u, 0x15DA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA40u;
label_15da40:
    // 0x15da40: 0x8ea5cdb4  lw          $a1, -0x324C($s5)
    ctx->pc = 0x15da40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954420)));
label_15da44:
    // 0x15da44: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15da44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_15da48:
    // 0x15da48: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15da48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15da4c:
    // 0x15da4c: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x15da4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_15da50:
    // 0x15da50: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x15da50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_15da54:
    // 0x15da54: 0x60f809  jalr        $v1
label_15da58:
    if (ctx->pc == 0x15DA58u) {
        ctx->pc = 0x15DA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA54u;
        // 0x15da58: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DA5Cu;
        goto label_15da5c;
    }
    ctx->pc = 0x15DA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15DA5Cu);
        ctx->pc = 0x15DA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA54u;
        // 0x15da58: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DA54u, 0x15DA5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15DA5Cu;
label_15da5c:
    // 0x15da5c: 0x8ea5cdb4  lw          $a1, -0x324C($s5)
    ctx->pc = 0x15da5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954420)));
label_15da60:
    // 0x15da60: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15da60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15da64:
    // 0x15da64: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x15da64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_15da68:
    // 0x15da68: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x15da68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_15da6c:
    // 0x15da6c: 0x60f809  jalr        $v1
label_15da70:
    if (ctx->pc == 0x15DA70u) {
        ctx->pc = 0x15DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA6Cu;
        // 0x15da70: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DA74u;
        goto label_15da74;
    }
    ctx->pc = 0x15DA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15DA74u);
        ctx->pc = 0x15DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA6Cu;
        // 0x15da70: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DA6Cu, 0x15DA74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15DA74u;
label_15da74:
    // 0x15da74: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15da74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_15da78:
    // 0x15da78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15da78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15da7c:
    // 0x15da7c: 0xc0552b8  jal         func_154AE0
label_15da80:
    if (ctx->pc == 0x15DA80u) {
        ctx->pc = 0x15DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA7Cu;
        // 0x15da80: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DA84u;
        goto label_15da84;
    }
    ctx->pc = 0x15DA7Cu;
    SET_GPR_U32(ctx, 31, 0x15DA84u);
    ctx->pc = 0x15DA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DA7Cu;
    // 0x15da80: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x15DA7Cu, 0x15DA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA84u;
label_15da84:
    // 0x15da84: 0xc055880  jal         func_156200
label_15da88:
    if (ctx->pc == 0x15DA88u) {
        ctx->pc = 0x15DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA84u;
        // 0x15da88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DA8Cu;
        goto label_15da8c;
    }
    ctx->pc = 0x15DA84u;
    SET_GPR_U32(ctx, 31, 0x15DA8Cu);
    ctx->pc = 0x15DA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DA84u;
    // 0x15da88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156200u, 0x15DA84u, 0x15DA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA8Cu;
label_15da8c:
    // 0x15da8c: 0xc055a70  jal         func_1569C0
label_15da90:
    if (ctx->pc == 0x15DA90u) {
        ctx->pc = 0x15DA94u;
        goto label_15da94;
    }
    ctx->pc = 0x15DA8Cu;
    SET_GPR_U32(ctx, 31, 0x15DA94u);
    ctx->pc = 0x1569C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569C0u, 0x15DA8Cu, 0x15DA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA94u;
label_15da94:
    // 0x15da94: 0xc05756c  jal         func_15D5B0
label_15da98:
    if (ctx->pc == 0x15DA98u) {
        ctx->pc = 0x15DA9Cu;
        goto label_15da9c;
    }
    ctx->pc = 0x15DA94u;
    SET_GPR_U32(ctx, 31, 0x15DA9Cu);
    ctx->pc = 0x15D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D5B0u, 0x15DA94u, 0x15DA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA9Cu;
label_15da9c:
    // 0x15da9c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_15daa0:
    if (ctx->pc == 0x15DAA0u) {
        ctx->pc = 0x15DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA9Cu;
        // 0x15daa0: 0x8e4206d0  lw          $v0, 0x6D0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1744)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DAA4u;
        goto label_15daa4;
    }
    ctx->pc = 0x15DA9Cu;
    {
        const bool branch_taken_0x15da9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA9Cu;
        // 0x15daa0: 0x8e4206d0  lw          $v0, 0x6D0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15da9c) {
            ctx->pc = 0x15DAF8u;
            goto label_15daf8;
        }
    }
    ctx->pc = 0x15DAA4u;
label_15daa4:
    // 0x15daa4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_15daa8:
    if (ctx->pc == 0x15DAA8u) {
        ctx->pc = 0x15DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DAA4u;
        // 0x15daa8: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DAACu;
        goto label_15daac;
    }
    ctx->pc = 0x15DAA4u;
    {
        const bool branch_taken_0x15daa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DAA4u;
        // 0x15daa8: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15daa4) {
            ctx->pc = 0x15DB00u;
            goto label_15db00;
        }
    }
    ctx->pc = 0x15DAACu;
label_15daac:
    // 0x15daac: 0xc05755c  jal         func_15D570
label_15dab0:
    if (ctx->pc == 0x15DAB0u) {
        ctx->pc = 0x15DAB4u;
        goto label_15dab4;
    }
    ctx->pc = 0x15DAACu;
    SET_GPR_U32(ctx, 31, 0x15DAB4u);
    ctx->pc = 0x15D570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D570u, 0x15DAACu, 0x15DAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DAB4u;
label_15dab4:
    // 0x15dab4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_15dab8:
    if (ctx->pc == 0x15DAB8u) {
        ctx->pc = 0x15DABCu;
        goto label_15dabc;
    }
    ctx->pc = 0x15DAB4u;
    {
        const bool branch_taken_0x15dab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15dab4) {
            ctx->pc = 0x15DADCu;
            goto label_15dadc;
        }
    }
    ctx->pc = 0x15DABCu;
label_15dabc:
    // 0x15dabc: 0xc04414a  jal         func_110528
label_15dac0:
    if (ctx->pc == 0x15DAC0u) {
        ctx->pc = 0x15DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DABCu;
        // 0x15dac0: 0x8ec4aa84  lw          $a0, -0x557C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DAC4u;
        goto label_15dac4;
    }
    ctx->pc = 0x15DABCu;
    SET_GPR_U32(ctx, 31, 0x15DAC4u);
    ctx->pc = 0x15DAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DABCu;
    // 0x15dac0: 0x8ec4aa84  lw          $a0, -0x557C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110528u, 0x15DABCu, 0x15DAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DAC4u;
label_15dac4:
    // 0x15dac4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x15dac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_15dac8:
    // 0x15dac8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x15dac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15dacc:
    // 0x15dacc: 0xc062c5a  jal         func_18B168
label_15dad0:
    if (ctx->pc == 0x15DAD0u) {
        ctx->pc = 0x15DAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DACCu;
        // 0x15dad0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DAD4u;
        goto label_15dad4;
    }
    ctx->pc = 0x15DACCu;
    SET_GPR_U32(ctx, 31, 0x15DAD4u);
    ctx->pc = 0x15DAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DACCu;
    // 0x15dad0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B168u, 0x15DACCu, 0x15DAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DAD4u;
label_15dad4:
    // 0x15dad4: 0x10000006  b           . + 4 + (0x6 << 2)
label_15dad8:
    if (ctx->pc == 0x15DAD8u) {
        ctx->pc = 0x15DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DAD4u;
        // 0x15dad8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DADCu;
        goto label_15dadc;
    }
    ctx->pc = 0x15DAD4u;
    {
        const bool branch_taken_0x15dad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DAD4u;
        // 0x15dad8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dad4) {
            ctx->pc = 0x15DAF0u;
            goto label_15daf0;
        }
    }
    ctx->pc = 0x15DADCu;
label_15dadc:
    // 0x15dadc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15dadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_15dae0:
    // 0x15dae0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x15dae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15dae4:
    // 0x15dae4: 0xc062c5a  jal         func_18B168
label_15dae8:
    if (ctx->pc == 0x15DAE8u) {
        ctx->pc = 0x15DAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DAE4u;
        // 0x15dae8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DAECu;
        goto label_15daec;
    }
    ctx->pc = 0x15DAE4u;
    SET_GPR_U32(ctx, 31, 0x15DAECu);
    ctx->pc = 0x15DAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DAE4u;
    // 0x15dae8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B168u, 0x15DAE4u, 0x15DAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DAECu;
label_15daec:
    // 0x15daec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15daecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15daf0:
    // 0x15daf0: 0x10000007  b           . + 4 + (0x7 << 2)
label_15daf4:
    if (ctx->pc == 0x15DAF4u) {
        ctx->pc = 0x15DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DAF0u;
        // 0x15daf4: 0xae4206d0  sw          $v0, 0x6D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1744), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DAF8u;
        goto label_15daf8;
    }
    ctx->pc = 0x15DAF0u;
    {
        const bool branch_taken_0x15daf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DAF0u;
        // 0x15daf4: 0xae4206d0  sw          $v0, 0x6D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1744), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15daf0) {
            ctx->pc = 0x15DB10u;
            goto label_15db10;
        }
    }
    ctx->pc = 0x15DAF8u;
label_15daf8:
    // 0x15daf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_15dafc:
    if (ctx->pc == 0x15DAFCu) {
        ctx->pc = 0x15DAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DAF8u;
        // 0x15dafc: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DB00u;
        goto label_15db00;
    }
    ctx->pc = 0x15DAF8u;
    {
        const bool branch_taken_0x15daf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DAF8u;
        // 0x15dafc: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15daf8) {
            ctx->pc = 0x15DB10u;
            goto label_15db10;
        }
    }
    ctx->pc = 0x15DB00u;
label_15db00:
    // 0x15db00: 0x8c43deb8  lw          $v1, -0x2148($v0)
    ctx->pc = 0x15db00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958776)));
label_15db04:
    // 0x15db04: 0x8c6401d4  lw          $a0, 0x1D4($v1)
    ctx->pc = 0x15db04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 468)));
label_15db08:
    // 0x15db08: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_15db0c:
    if (ctx->pc == 0x15DB0Cu) {
        ctx->pc = 0x15DB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB08u;
        // 0x15db0c: 0xae4006d0  sw          $zero, 0x6D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1744), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DB10u;
        goto label_15db10;
    }
    ctx->pc = 0x15DB08u;
    {
        const bool branch_taken_0x15db08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15db08) {
            ctx->pc = 0x15DB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15DB08u;
            // 0x15db0c: 0xae4006d0  sw          $zero, 0x6D0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 1744), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15DB10u;
            goto label_15db10;
        }
    }
    ctx->pc = 0x15DB10u;
label_15db10:
    // 0x15db10: 0xc05756c  jal         func_15D5B0
label_15db14:
    if (ctx->pc == 0x15DB14u) {
        ctx->pc = 0x15DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB10u;
        // 0x15db14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DB18u;
        goto label_15db18;
    }
    ctx->pc = 0x15DB10u;
    SET_GPR_U32(ctx, 31, 0x15DB18u);
    ctx->pc = 0x15DB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DB10u;
    // 0x15db14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D5B0u, 0x15DB10u, 0x15DB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DB18u;
label_15db18:
    // 0x15db18: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_15db1c:
    if (ctx->pc == 0x15DB1Cu) {
        ctx->pc = 0x15DB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB18u;
        // 0x15db1c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DB20u;
        goto label_15db20;
    }
    ctx->pc = 0x15DB18u;
    {
        const bool branch_taken_0x15db18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15db18) {
            ctx->pc = 0x15DB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15DB18u;
            // 0x15db1c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15DB30u;
            goto label_15db30;
        }
    }
    ctx->pc = 0x15DB20u;
label_15db20:
    // 0x15db20: 0x8e4206d0  lw          $v0, 0x6D0($s2)
    ctx->pc = 0x15db20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1744)));
label_15db24:
    // 0x15db24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15db28:
    if (ctx->pc == 0x15DB28u) {
        ctx->pc = 0x15DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB24u;
        // 0x15db28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DB2Cu;
        goto label_15db2c;
    }
    ctx->pc = 0x15DB24u;
    {
        const bool branch_taken_0x15db24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB24u;
        // 0x15db28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15db24) {
            ctx->pc = 0x15DB34u;
            goto label_15db34;
        }
    }
    ctx->pc = 0x15DB2Cu;
label_15db2c:
    // 0x15db2c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x15db2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15db30:
    // 0x15db30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15db30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15db34:
    // 0x15db34: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x15db34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_15db38:
    // 0x15db38: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x15db38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_15db3c:
    // 0x15db3c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x15db3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_15db40:
    // 0x15db40: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x15db40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_15db44:
    // 0x15db44: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x15db44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_15db48:
    // 0x15db48: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x15db48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_15db4c:
    // 0x15db4c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x15db4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_15db50:
    // 0x15db50: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15db50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15db54:
    // 0x15db54: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15db54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_15db58:
    // 0x15db58: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x15db58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_15db5c:
    // 0x15db5c: 0x3e00008  jr          $ra
label_15db60:
    if (ctx->pc == 0x15DB60u) {
        ctx->pc = 0x15DB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB5Cu;
        // 0x15db60: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DB64u;
        goto label_15db64;
    }
    ctx->pc = 0x15DB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB5Cu;
        // 0x15db60: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15DB64u;
label_15db64:
    // 0x15db64: 0x0  nop
    ctx->pc = 0x15db64u;
    // NOP
    ctx->pc = 0x15db68u;
}
