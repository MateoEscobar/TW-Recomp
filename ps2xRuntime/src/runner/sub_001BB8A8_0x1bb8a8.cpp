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

// Function: sub_001BB8A8
// Address: 0x1bb8a8 - 0x1bbbb0
void sub_001BB8A8_0x1bb8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB8A8_0x1bb8a8");
#endif

    switch (ctx->pc) {
        case 0x1bb8a8u: goto label_1bb8a8;
        case 0x1bb8acu: goto label_1bb8ac;
        case 0x1bb8b0u: goto label_1bb8b0;
        case 0x1bb8b4u: goto label_1bb8b4;
        case 0x1bb8b8u: goto label_1bb8b8;
        case 0x1bb8bcu: goto label_1bb8bc;
        case 0x1bb8c0u: goto label_1bb8c0;
        case 0x1bb8c4u: goto label_1bb8c4;
        case 0x1bb8c8u: goto label_1bb8c8;
        case 0x1bb8ccu: goto label_1bb8cc;
        case 0x1bb8d0u: goto label_1bb8d0;
        case 0x1bb8d4u: goto label_1bb8d4;
        case 0x1bb8d8u: goto label_1bb8d8;
        case 0x1bb8dcu: goto label_1bb8dc;
        case 0x1bb8e0u: goto label_1bb8e0;
        case 0x1bb8e4u: goto label_1bb8e4;
        case 0x1bb8e8u: goto label_1bb8e8;
        case 0x1bb8ecu: goto label_1bb8ec;
        case 0x1bb8f0u: goto label_1bb8f0;
        case 0x1bb8f4u: goto label_1bb8f4;
        case 0x1bb8f8u: goto label_1bb8f8;
        case 0x1bb8fcu: goto label_1bb8fc;
        case 0x1bb900u: goto label_1bb900;
        case 0x1bb904u: goto label_1bb904;
        case 0x1bb908u: goto label_1bb908;
        case 0x1bb90cu: goto label_1bb90c;
        case 0x1bb910u: goto label_1bb910;
        case 0x1bb914u: goto label_1bb914;
        case 0x1bb918u: goto label_1bb918;
        case 0x1bb91cu: goto label_1bb91c;
        case 0x1bb920u: goto label_1bb920;
        case 0x1bb924u: goto label_1bb924;
        case 0x1bb928u: goto label_1bb928;
        case 0x1bb92cu: goto label_1bb92c;
        case 0x1bb930u: goto label_1bb930;
        case 0x1bb934u: goto label_1bb934;
        case 0x1bb938u: goto label_1bb938;
        case 0x1bb93cu: goto label_1bb93c;
        case 0x1bb940u: goto label_1bb940;
        case 0x1bb944u: goto label_1bb944;
        case 0x1bb948u: goto label_1bb948;
        case 0x1bb94cu: goto label_1bb94c;
        case 0x1bb950u: goto label_1bb950;
        case 0x1bb954u: goto label_1bb954;
        case 0x1bb958u: goto label_1bb958;
        case 0x1bb95cu: goto label_1bb95c;
        case 0x1bb960u: goto label_1bb960;
        case 0x1bb964u: goto label_1bb964;
        case 0x1bb968u: goto label_1bb968;
        case 0x1bb96cu: goto label_1bb96c;
        case 0x1bb970u: goto label_1bb970;
        case 0x1bb974u: goto label_1bb974;
        case 0x1bb978u: goto label_1bb978;
        case 0x1bb97cu: goto label_1bb97c;
        case 0x1bb980u: goto label_1bb980;
        case 0x1bb984u: goto label_1bb984;
        case 0x1bb988u: goto label_1bb988;
        case 0x1bb98cu: goto label_1bb98c;
        case 0x1bb990u: goto label_1bb990;
        case 0x1bb994u: goto label_1bb994;
        case 0x1bb998u: goto label_1bb998;
        case 0x1bb99cu: goto label_1bb99c;
        case 0x1bb9a0u: goto label_1bb9a0;
        case 0x1bb9a4u: goto label_1bb9a4;
        case 0x1bb9a8u: goto label_1bb9a8;
        case 0x1bb9acu: goto label_1bb9ac;
        case 0x1bb9b0u: goto label_1bb9b0;
        case 0x1bb9b4u: goto label_1bb9b4;
        case 0x1bb9b8u: goto label_1bb9b8;
        case 0x1bb9bcu: goto label_1bb9bc;
        case 0x1bb9c0u: goto label_1bb9c0;
        case 0x1bb9c4u: goto label_1bb9c4;
        case 0x1bb9c8u: goto label_1bb9c8;
        case 0x1bb9ccu: goto label_1bb9cc;
        case 0x1bb9d0u: goto label_1bb9d0;
        case 0x1bb9d4u: goto label_1bb9d4;
        case 0x1bb9d8u: goto label_1bb9d8;
        case 0x1bb9dcu: goto label_1bb9dc;
        case 0x1bb9e0u: goto label_1bb9e0;
        case 0x1bb9e4u: goto label_1bb9e4;
        case 0x1bb9e8u: goto label_1bb9e8;
        case 0x1bb9ecu: goto label_1bb9ec;
        case 0x1bb9f0u: goto label_1bb9f0;
        case 0x1bb9f4u: goto label_1bb9f4;
        case 0x1bb9f8u: goto label_1bb9f8;
        case 0x1bb9fcu: goto label_1bb9fc;
        case 0x1bba00u: goto label_1bba00;
        case 0x1bba04u: goto label_1bba04;
        case 0x1bba08u: goto label_1bba08;
        case 0x1bba0cu: goto label_1bba0c;
        case 0x1bba10u: goto label_1bba10;
        case 0x1bba14u: goto label_1bba14;
        case 0x1bba18u: goto label_1bba18;
        case 0x1bba1cu: goto label_1bba1c;
        case 0x1bba20u: goto label_1bba20;
        case 0x1bba24u: goto label_1bba24;
        case 0x1bba28u: goto label_1bba28;
        case 0x1bba2cu: goto label_1bba2c;
        case 0x1bba30u: goto label_1bba30;
        case 0x1bba34u: goto label_1bba34;
        case 0x1bba38u: goto label_1bba38;
        case 0x1bba3cu: goto label_1bba3c;
        case 0x1bba40u: goto label_1bba40;
        case 0x1bba44u: goto label_1bba44;
        case 0x1bba48u: goto label_1bba48;
        case 0x1bba4cu: goto label_1bba4c;
        case 0x1bba50u: goto label_1bba50;
        case 0x1bba54u: goto label_1bba54;
        case 0x1bba58u: goto label_1bba58;
        case 0x1bba5cu: goto label_1bba5c;
        case 0x1bba60u: goto label_1bba60;
        case 0x1bba64u: goto label_1bba64;
        case 0x1bba68u: goto label_1bba68;
        case 0x1bba6cu: goto label_1bba6c;
        case 0x1bba70u: goto label_1bba70;
        case 0x1bba74u: goto label_1bba74;
        case 0x1bba78u: goto label_1bba78;
        case 0x1bba7cu: goto label_1bba7c;
        case 0x1bba80u: goto label_1bba80;
        case 0x1bba84u: goto label_1bba84;
        case 0x1bba88u: goto label_1bba88;
        case 0x1bba8cu: goto label_1bba8c;
        case 0x1bba90u: goto label_1bba90;
        case 0x1bba94u: goto label_1bba94;
        case 0x1bba98u: goto label_1bba98;
        case 0x1bba9cu: goto label_1bba9c;
        case 0x1bbaa0u: goto label_1bbaa0;
        case 0x1bbaa4u: goto label_1bbaa4;
        case 0x1bbaa8u: goto label_1bbaa8;
        case 0x1bbaacu: goto label_1bbaac;
        case 0x1bbab0u: goto label_1bbab0;
        case 0x1bbab4u: goto label_1bbab4;
        case 0x1bbab8u: goto label_1bbab8;
        case 0x1bbabcu: goto label_1bbabc;
        case 0x1bbac0u: goto label_1bbac0;
        case 0x1bbac4u: goto label_1bbac4;
        case 0x1bbac8u: goto label_1bbac8;
        case 0x1bbaccu: goto label_1bbacc;
        case 0x1bbad0u: goto label_1bbad0;
        case 0x1bbad4u: goto label_1bbad4;
        case 0x1bbad8u: goto label_1bbad8;
        case 0x1bbadcu: goto label_1bbadc;
        case 0x1bbae0u: goto label_1bbae0;
        case 0x1bbae4u: goto label_1bbae4;
        case 0x1bbae8u: goto label_1bbae8;
        case 0x1bbaecu: goto label_1bbaec;
        case 0x1bbaf0u: goto label_1bbaf0;
        case 0x1bbaf4u: goto label_1bbaf4;
        case 0x1bbaf8u: goto label_1bbaf8;
        case 0x1bbafcu: goto label_1bbafc;
        case 0x1bbb00u: goto label_1bbb00;
        case 0x1bbb04u: goto label_1bbb04;
        case 0x1bbb08u: goto label_1bbb08;
        case 0x1bbb0cu: goto label_1bbb0c;
        case 0x1bbb10u: goto label_1bbb10;
        case 0x1bbb14u: goto label_1bbb14;
        case 0x1bbb18u: goto label_1bbb18;
        case 0x1bbb1cu: goto label_1bbb1c;
        case 0x1bbb20u: goto label_1bbb20;
        case 0x1bbb24u: goto label_1bbb24;
        case 0x1bbb28u: goto label_1bbb28;
        case 0x1bbb2cu: goto label_1bbb2c;
        case 0x1bbb30u: goto label_1bbb30;
        case 0x1bbb34u: goto label_1bbb34;
        case 0x1bbb38u: goto label_1bbb38;
        case 0x1bbb3cu: goto label_1bbb3c;
        case 0x1bbb40u: goto label_1bbb40;
        case 0x1bbb44u: goto label_1bbb44;
        case 0x1bbb48u: goto label_1bbb48;
        case 0x1bbb4cu: goto label_1bbb4c;
        case 0x1bbb50u: goto label_1bbb50;
        case 0x1bbb54u: goto label_1bbb54;
        case 0x1bbb58u: goto label_1bbb58;
        case 0x1bbb5cu: goto label_1bbb5c;
        case 0x1bbb60u: goto label_1bbb60;
        case 0x1bbb64u: goto label_1bbb64;
        case 0x1bbb68u: goto label_1bbb68;
        case 0x1bbb6cu: goto label_1bbb6c;
        case 0x1bbb70u: goto label_1bbb70;
        case 0x1bbb74u: goto label_1bbb74;
        case 0x1bbb78u: goto label_1bbb78;
        case 0x1bbb7cu: goto label_1bbb7c;
        case 0x1bbb80u: goto label_1bbb80;
        case 0x1bbb84u: goto label_1bbb84;
        case 0x1bbb88u: goto label_1bbb88;
        case 0x1bbb8cu: goto label_1bbb8c;
        case 0x1bbb90u: goto label_1bbb90;
        case 0x1bbb94u: goto label_1bbb94;
        case 0x1bbb98u: goto label_1bbb98;
        case 0x1bbb9cu: goto label_1bbb9c;
        case 0x1bbba0u: goto label_1bbba0;
        case 0x1bbba4u: goto label_1bbba4;
        case 0x1bbba8u: goto label_1bbba8;
        case 0x1bbbacu: goto label_1bbbac;
        default: break;
    }

    ctx->pc = 0x1bb8a8u;

label_1bb8a8:
    // 0x1bb8a8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1bb8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_1bb8ac:
    // 0x1bb8ac: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1bb8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_1bb8b0:
    // 0x1bb8b0: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1bb8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_1bb8b4:
    // 0x1bb8b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1bb8b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bb8b8:
    // 0x1bb8b8: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1bb8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_1bb8bc:
    // 0x1bb8bc: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1bb8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_1bb8c0:
    // 0x1bb8c0: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1bb8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_1bb8c4:
    // 0x1bb8c4: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1bb8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1bb8c8:
    // 0x1bb8c8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1bb8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1bb8cc:
    // 0x1bb8cc: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1bb8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_1bb8d0:
    // 0x1bb8d0: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1bb8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_1bb8d4:
    // 0x1bb8d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1bb8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1bb8d8:
    // 0x1bb8d8: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x1bb8d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1bb8dc:
    // 0x1bb8dc: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1bb8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1bb8e0:
    // 0x1bb8e0: 0x104000a6  beqz        $v0, . + 4 + (0xA6 << 2)
label_1bb8e4:
    if (ctx->pc == 0x1BB8E4u) {
        ctx->pc = 0x1BB8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB8E0u;
        // 0x1bb8e4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB8E8u;
        goto label_1bb8e8;
    }
    ctx->pc = 0x1BB8E0u;
    {
        const bool branch_taken_0x1bb8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB8E0u;
        // 0x1bb8e4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb8e0) {
            ctx->pc = 0x1BBB7Cu;
            goto label_1bbb7c;
        }
    }
    ctx->pc = 0x1BB8E8u;
label_1bb8e8:
    // 0x1bb8e8: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1bb8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1bb8ec:
    // 0x1bb8ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1bb8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1bb8f0:
    // 0x1bb8f0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1bb8f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1bb8f4:
    // 0x1bb8f4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1bb8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1bb8f8:
    // 0x1bb8f8: 0x40f809  jalr        $v0
label_1bb8fc:
    if (ctx->pc == 0x1BB8FCu) {
        ctx->pc = 0x1BB8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB8F8u;
        // 0x1bb8fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB900u;
        goto label_1bb900;
    }
    ctx->pc = 0x1BB8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BB900u);
        ctx->pc = 0x1BB8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB8F8u;
        // 0x1bb8fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB8F8u, 0x1BB900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BB900u;
label_1bb900:
    // 0x1bb900: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1bb900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1bb904:
    // 0x1bb904: 0x8c66e774  lw          $a2, -0x188C($v1)
    ctx->pc = 0x1bb904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961012)));
label_1bb908:
    // 0x1bb908: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1bb908u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1bb90c:
    // 0x1bb90c: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x1bb90cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1bb910:
    // 0x1bb910: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_1bb914:
    if (ctx->pc == 0x1BB914u) {
        ctx->pc = 0x1BB914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB910u;
        // 0x1bb914: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB918u;
        goto label_1bb918;
    }
    ctx->pc = 0x1BB910u;
    {
        const bool branch_taken_0x1bb910 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb910) {
            ctx->pc = 0x1BB914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB910u;
            // 0x1bb914: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB918u;
            goto label_1bb918;
        }
    }
    ctx->pc = 0x1BB918u;
label_1bb918:
    // 0x1bb918: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bb918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bb91c:
    // 0x1bb91c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1bb91cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1bb920:
    // 0x1bb920: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1bb920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1bb924:
    // 0x1bb924: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1bb924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1bb928:
    // 0x1bb928: 0x3810  mfhi        $a3
    ctx->pc = 0x1bb928u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_1bb92c:
    // 0x1bb92c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1bb92cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1bb930:
    // 0x1bb930: 0xd3302b  sltu        $a2, $a2, $s3
    ctx->pc = 0x1bb930u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_1bb934:
    // 0x1bb934: 0xb32823  subu        $a1, $a1, $s3
    ctx->pc = 0x1bb934u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_1bb938:
    // 0x1bb938: 0x40f809  jalr        $v0
label_1bb93c:
    if (ctx->pc == 0x1BB93Cu) {
        ctx->pc = 0x1BB93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB938u;
        // 0x1bb93c: 0xa6980b  movn        $s3, $a1, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB940u;
        goto label_1bb940;
    }
    ctx->pc = 0x1BB938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BB940u);
        ctx->pc = 0x1BB93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB938u;
        // 0x1bb93c: 0xa6980b  movn        $s3, $a1, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB938u, 0x1BB940u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BB940u;
label_1bb940:
    // 0x1bb940: 0x1040008f  beqz        $v0, . + 4 + (0x8F << 2)
label_1bb944:
    if (ctx->pc == 0x1BB944u) {
        ctx->pc = 0x1BB944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB940u;
        // 0x1bb944: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB948u;
        goto label_1bb948;
    }
    ctx->pc = 0x1BB940u;
    {
        const bool branch_taken_0x1bb940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB940u;
        // 0x1bb944: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb940) {
            ctx->pc = 0x1BBB80u;
            goto label_1bbb80;
        }
    }
    ctx->pc = 0x1BB948u;
label_1bb948:
    // 0x1bb948: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bb948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bb94c:
    // 0x1bb94c: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1bb94cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1bb950:
    // 0x1bb950: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1bb950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1bb954:
    // 0x1bb954: 0x40f809  jalr        $v0
label_1bb958:
    if (ctx->pc == 0x1BB958u) {
        ctx->pc = 0x1BB958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB954u;
        // 0x1bb958: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB95Cu;
        goto label_1bb95c;
    }
    ctx->pc = 0x1BB954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BB95Cu);
        ctx->pc = 0x1BB958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB954u;
        // 0x1bb958: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB954u, 0x1BB95Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BB95Cu;
label_1bb95c:
    // 0x1bb95c: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
label_1bb960:
    if (ctx->pc == 0x1BB960u) {
        ctx->pc = 0x1BB960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB95Cu;
        // 0x1bb960: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB964u;
        goto label_1bb964;
    }
    ctx->pc = 0x1BB95Cu;
    {
        const bool branch_taken_0x1bb95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB95Cu;
        // 0x1bb960: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb95c) {
            ctx->pc = 0x1BBB7Cu;
            goto label_1bbb7c;
        }
    }
    ctx->pc = 0x1BB964u;
label_1bb964:
    // 0x1bb964: 0x24030430  addiu       $v1, $zero, 0x430
    ctx->pc = 0x1bb964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1072));
label_1bb968:
    // 0x1bb968: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x1bb968u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1bb96c:
    // 0x1bb96c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bb96cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1bb970:
    // 0x1bb970: 0xafb00034  sw          $s0, 0x34($sp)
    ctx->pc = 0x1bb970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 16));
label_1bb974:
    // 0x1bb974: 0x548821  addu        $s1, $v0, $s4
    ctx->pc = 0x1bb974u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1bb978:
    // 0x1bb978: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x1bb978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1bb97c:
    // 0x1bb97c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1bb97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1bb980:
    // 0x1bb980: 0x2828021  addu        $s0, $s4, $v0
    ctx->pc = 0x1bb980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1bb984:
    // 0x1bb984: 0x26320040  addiu       $s2, $s1, 0x40
    ctx->pc = 0x1bb984u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1bb988:
    // 0x1bb988: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1bb988u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1bb98c:
    // 0x1bb98c: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1bb98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1bb990:
    // 0x1bb990: 0x40f809  jalr        $v0
label_1bb994:
    if (ctx->pc == 0x1BB994u) {
        ctx->pc = 0x1BB994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB990u;
        // 0x1bb994: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB998u;
        goto label_1bb998;
    }
    ctx->pc = 0x1BB990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BB998u);
        ctx->pc = 0x1BB994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB990u;
        // 0x1bb994: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB990u, 0x1BB998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BB998u;
label_1bb998:
    // 0x1bb998: 0x50400075  beql        $v0, $zero, . + 4 + (0x75 << 2)
label_1bb99c:
    if (ctx->pc == 0x1BB99Cu) {
        ctx->pc = 0x1BB99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB998u;
        // 0x1bb99c: 0x8fb00034  lw          $s0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB9A0u;
        goto label_1bb9a0;
    }
    ctx->pc = 0x1BB998u;
    {
        const bool branch_taken_0x1bb998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb998) {
            ctx->pc = 0x1BB99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB998u;
            // 0x1bb99c: 0x8fb00034  lw          $s0, 0x34($sp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BBB70u;
            goto label_1bbb70;
        }
    }
    ctx->pc = 0x1BB9A0u;
label_1bb9a0:
    // 0x1bb9a0: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x1bb9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1bb9a4:
    // 0x1bb9a4: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1bb9a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1bb9a8:
    // 0x1bb9a8: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1bb9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1bb9ac:
    // 0x1bb9ac: 0x60f809  jalr        $v1
label_1bb9b0:
    if (ctx->pc == 0x1BB9B0u) {
        ctx->pc = 0x1BB9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB9ACu;
        // 0x1bb9b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB9B4u;
        goto label_1bb9b4;
    }
    ctx->pc = 0x1BB9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BB9B4u);
        ctx->pc = 0x1BB9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB9ACu;
        // 0x1bb9b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB9ACu, 0x1BB9B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BB9B4u;
label_1bb9b4:
    // 0x1bb9b4: 0x8e420428  lw          $v0, 0x428($s2)
    ctx->pc = 0x1bb9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1064)));
label_1bb9b8:
    // 0x1bb9b8: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
label_1bb9bc:
    if (ctx->pc == 0x1BB9BCu) {
        ctx->pc = 0x1BB9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB9B8u;
        // 0x1bb9bc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB9C0u;
        goto label_1bb9c0;
    }
    ctx->pc = 0x1BB9B8u;
    {
        const bool branch_taken_0x1bb9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB9B8u;
        // 0x1bb9bc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb9b8) {
            ctx->pc = 0x1BBB6Cu;
            goto label_1bbb6c;
        }
    }
    ctx->pc = 0x1BB9C0u;
label_1bb9c0:
    // 0x1bb9c0: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x1bb9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_1bb9c4:
    // 0x1bb9c4: 0x2455e700  addiu       $s5, $v0, -0x1900
    ctx->pc = 0x1bb9c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960896));
label_1bb9c8:
    // 0x1bb9c8: 0x220f02d  daddu       $fp, $s1, $zero
    ctx->pc = 0x1bb9c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bb9cc:
    // 0x1bb9cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bb9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1bb9d0:
    // 0x1bb9d0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1bb9d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1bb9d4:
    // 0x1bb9d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bb9d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb9d8:
    // 0x1bb9d8: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x1bb9d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1bb9dc:
    // 0x1bb9dc: 0x26901100  addiu       $s0, $s4, 0x1100
    ctx->pc = 0x1bb9dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4352));
label_1bb9e0:
    // 0x1bb9e0: 0x26b10030  addiu       $s1, $s5, 0x30
    ctx->pc = 0x1bb9e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_1bb9e4:
    // 0x1bb9e4: 0x13b042  srl         $s6, $s3, 1
    ctx->pc = 0x1bb9e4u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
label_1bb9e8:
    // 0x1bb9e8: 0xc6ac0070  lwc1        $f12, 0x70($s5)
    ctx->pc = 0x1bb9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bb9ec:
    // 0x1bb9ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bb9f0:
    // 0x1bb9f0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1bb9f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1bb9f4:
    // 0x1bb9f4: 0xc068848  jal         func_1A2120
label_1bb9f8:
    if (ctx->pc == 0x1BB9F8u) {
        ctx->pc = 0x1BB9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB9F4u;
        // 0x1bb9f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB9FCu;
        goto label_1bb9fc;
    }
    ctx->pc = 0x1BB9F4u;
    SET_GPR_U32(ctx, 31, 0x1BB9FCu);
    ctx->pc = 0x1BB9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB9F4u;
    // 0x1bb9f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1BB9F4u, 0x1BB9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB9FCu;
label_1bb9fc:
    // 0x1bb9fc: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
label_1bba00:
    if (ctx->pc == 0x1BBA00u) {
        ctx->pc = 0x1BBA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB9FCu;
        // 0x1bba00: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBA04u;
        goto label_1bba04;
    }
    ctx->pc = 0x1BB9FCu;
    {
        const bool branch_taken_0x1bb9fc = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x1BBA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB9FCu;
        // 0x1bba00: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb9fc) {
            ctx->pc = 0x1BBA18u;
            goto label_1bba18;
        }
    }
    ctx->pc = 0x1BBA04u;
label_1bba04:
    // 0x1bba04: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1bba04u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bba08:
    // 0x1bba08: 0x0  nop
    ctx->pc = 0x1bba08u;
    // NOP
label_1bba0c:
    // 0x1bba0c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1bba0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1bba10:
    // 0x1bba10: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bba14:
    if (ctx->pc == 0x1BBA14u) {
        ctx->pc = 0x1BBA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA10u;
        // 0x1bba14: 0x8ea20074  lw          $v0, 0x74($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBA18u;
        goto label_1bba18;
    }
    ctx->pc = 0x1BBA10u;
    {
        const bool branch_taken_0x1bba10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA10u;
        // 0x1bba14: 0x8ea20074  lw          $v0, 0x74($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba10) {
            ctx->pc = 0x1BBA30u;
            goto label_1bba30;
        }
    }
    ctx->pc = 0x1BBA18u;
label_1bba18:
    // 0x1bba18: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x1bba18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
label_1bba1c:
    // 0x1bba1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bba1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bba20:
    // 0x1bba20: 0x0  nop
    ctx->pc = 0x1bba20u;
    // NOP
label_1bba24:
    // 0x1bba24: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1bba24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1bba28:
    // 0x1bba28: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1bba28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1bba2c:
    // 0x1bba2c: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x1bba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_1bba30:
    // 0x1bba30: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1bba34:
    if (ctx->pc == 0x1BBA34u) {
        ctx->pc = 0x1BBA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA30u;
        // 0x1bba34: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBA38u;
        goto label_1bba38;
    }
    ctx->pc = 0x1BBA30u;
    {
        const bool branch_taken_0x1bba30 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BBA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA30u;
        // 0x1bba34: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba30) {
            ctx->pc = 0x1BBA4Cu;
            goto label_1bba4c;
        }
    }
    ctx->pc = 0x1BBA38u;
label_1bba38:
    // 0x1bba38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bba38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bba3c:
    // 0x1bba3c: 0x0  nop
    ctx->pc = 0x1bba3cu;
    // NOP
label_1bba40:
    // 0x1bba40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bba40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1bba44:
    // 0x1bba44: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bba48:
    if (ctx->pc == 0x1BBA48u) {
        ctx->pc = 0x1BBA4Cu;
        goto label_1bba4c;
    }
    ctx->pc = 0x1BBA44u;
    {
        const bool branch_taken_0x1bba44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bba44) {
            ctx->pc = 0x1BBA64u;
            goto label_1bba64;
        }
    }
    ctx->pc = 0x1BBA4Cu;
label_1bba4c:
    // 0x1bba4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bba4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1bba50:
    // 0x1bba50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bba50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1bba54:
    // 0x1bba54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bba54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bba58:
    // 0x1bba58: 0x0  nop
    ctx->pc = 0x1bba58u;
    // NOP
label_1bba5c:
    // 0x1bba5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bba5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1bba60:
    // 0x1bba60: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1bba60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1bba64:
    // 0x1bba64: 0x0  nop
    ctx->pc = 0x1bba64u;
    // NOP
label_1bba68:
    // 0x1bba68: 0x0  nop
    ctx->pc = 0x1bba68u;
    // NOP
label_1bba6c:
    // 0x1bba6c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1bba6cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1bba70:
    // 0x1bba70: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x1bba70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_1bba74:
    // 0x1bba74: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1bba74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1bba78:
    // 0x1bba78: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1bba78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1bba7c:
    // 0x1bba7c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1bba7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1bba80:
    // 0x1bba80: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1bba80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1bba84:
    // 0x1bba84: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1bba84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1bba88:
    // 0x1bba88: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1bba88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1bba8c:
    // 0x1bba8c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1bba8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1bba90:
    // 0x1bba90: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x1bba90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_1bba94:
    // 0x1bba94: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1bba94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1bba98:
    // 0x1bba98: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1bba98u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_1bba9c:
    // 0x1bba9c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1bba9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_1bbaa0:
    // 0x1bbaa0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1bbaa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1bbaa4:
    // 0x1bbaa4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1bbaa4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1bbaa8:
    // 0x1bbaa8: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x1bbaa8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_1bbaac:
    // 0x1bbaac: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1bbaacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1bbab0:
    // 0x1bbab0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1bbab0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_1bbab4:
    // 0x1bbab4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1bbab4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1bbab8:
    // 0x1bbab8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1bbab8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1bbabc:
    // 0x1bbabc: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1bbabcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1bbac0:
    // 0x1bbac0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1bbac0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1bbac4:
    // 0x1bbac4: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x1bbac4u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
label_1bbac8:
    // 0x1bbac8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1bbac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1bbacc:
    // 0x1bbacc: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x1bbaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
label_1bbad0:
    // 0x1bbad0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1bbad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1bbad4:
    // 0x1bbad4: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1bbad4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1bbad8:
    // 0x1bbad8: 0x8fc60040  lw          $a2, 0x40($fp)
    ctx->pc = 0x1bbad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
label_1bbadc:
    // 0x1bbadc: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1bbadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_1bbae0:
    // 0x1bbae0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1bbae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1bbae4:
    // 0x1bbae4: 0x84c50018  lh          $a1, 0x18($a2)
    ctx->pc = 0x1bbae4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
label_1bbae8:
    // 0x1bbae8: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x1bbae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_1bbaec:
    // 0x1bbaec: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x1bbaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
label_1bbaf0:
    // 0x1bbaf0: 0x40f809  jalr        $v0
label_1bbaf4:
    if (ctx->pc == 0x1BBAF4u) {
        ctx->pc = 0x1BBAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBAF0u;
        // 0x1bbaf4: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBAF8u;
        goto label_1bbaf8;
    }
    ctx->pc = 0x1BBAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BBAF8u);
        ctx->pc = 0x1BBAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBAF0u;
        // 0x1bbaf4: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBAF0u, 0x1BBAF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BBAF8u;
label_1bbaf8:
    // 0x1bbaf8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1bbaf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bbafc:
    // 0x1bbafc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bbafcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bbb00:
    // 0x1bbb00: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x1bbb00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bbb04:
    // 0x1bbb04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1bbb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bbb08:
    // 0x1bbb08: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1bbb08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bbb0c:
    // 0x1bbb0c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1bbb0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1bbb10:
    // 0x1bbb10: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1bbb10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1bbb14:
    // 0x1bbb14: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1bbb14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1bbb18:
    // 0x1bbb18: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1bbb18u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1bbb1c:
    // 0x1bbb1c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1bbb1cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_1bbb20:
    // 0x1bbb20: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1bbb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1bbb24:
    // 0x1bbb24: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1bbb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1bbb28:
    // 0x1bbb28: 0x84e40008  lh          $a0, 0x8($a3)
    ctx->pc = 0x1bbb28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
label_1bbb2c:
    // 0x1bbb2c: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x1bbb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1bbb30:
    // 0x1bbb30: 0x60f809  jalr        $v1
label_1bbb34:
    if (ctx->pc == 0x1BBB34u) {
        ctx->pc = 0x1BBB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB30u;
        // 0x1bbb34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBB38u;
        goto label_1bbb38;
    }
    ctx->pc = 0x1BBB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BBB38u);
        ctx->pc = 0x1BBB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB30u;
        // 0x1bbb34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBB30u, 0x1BBB38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BBB38u;
label_1bbb38:
    // 0x1bbb38: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bbb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bbb3c:
    // 0x1bbb3c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1bbb3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1bbb40:
    // 0x1bbb40: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1bbb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1bbb44:
    // 0x1bbb44: 0x60f809  jalr        $v1
label_1bbb48:
    if (ctx->pc == 0x1BBB48u) {
        ctx->pc = 0x1BBB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB44u;
        // 0x1bbb48: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBB4Cu;
        goto label_1bbb4c;
    }
    ctx->pc = 0x1BBB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BBB4Cu);
        ctx->pc = 0x1BBB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB44u;
        // 0x1bbb48: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBB44u, 0x1BBB4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BBB4Cu;
label_1bbb4c:
    // 0x1bbb4c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bbb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bbb50:
    // 0x1bbb50: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1bbb50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1bbb54:
    // 0x1bbb54: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1bbb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1bbb58:
    // 0x1bbb58: 0x60f809  jalr        $v1
label_1bbb5c:
    if (ctx->pc == 0x1BBB5Cu) {
        ctx->pc = 0x1BBB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB58u;
        // 0x1bbb5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBB60u;
        goto label_1bbb60;
    }
    ctx->pc = 0x1BBB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BBB60u);
        ctx->pc = 0x1BBB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB58u;
        // 0x1bbb5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBB58u, 0x1BBB60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BBB60u;
label_1bbb60:
    // 0x1bbb60: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x1bbb60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1bbb64:
    // 0x1bbb64: 0x1440ffa0  bnez        $v0, . + 4 + (-0x60 << 2)
label_1bbb68:
    if (ctx->pc == 0x1BBB68u) {
        ctx->pc = 0x1BBB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB64u;
        // 0x1bbb68: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBB6Cu;
        goto label_1bbb6c;
    }
    ctx->pc = 0x1BBB64u;
    {
        const bool branch_taken_0x1bbb64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB64u;
        // 0x1bbb68: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbb64) {
            ctx->pc = 0x1BB9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb9e8;
        }
    }
    ctx->pc = 0x1BBB6Cu;
label_1bbb6c:
    // 0x1bbb6c: 0x8fb00034  lw          $s0, 0x34($sp)
    ctx->pc = 0x1bbb6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_1bbb70:
    // 0x1bbb70: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x1bbb70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1bbb74:
    // 0x1bbb74: 0x1440ff7c  bnez        $v0, . + 4 + (-0x84 << 2)
label_1bbb78:
    if (ctx->pc == 0x1BBB78u) {
        ctx->pc = 0x1BBB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB74u;
        // 0x1bbb78: 0x24030430  addiu       $v1, $zero, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBB7Cu;
        goto label_1bbb7c;
    }
    ctx->pc = 0x1BBB74u;
    {
        const bool branch_taken_0x1bbb74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB74u;
        // 0x1bbb78: 0x24030430  addiu       $v1, $zero, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbb74) {
            ctx->pc = 0x1BB968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb968;
        }
    }
    ctx->pc = 0x1BBB7Cu;
label_1bbb7c:
    // 0x1bbb7c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1bbb7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1bbb80:
    // 0x1bbb80: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1bbb80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1bbb84:
    // 0x1bbb84: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1bbb84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1bbb88:
    // 0x1bbb88: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1bbb88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1bbb8c:
    // 0x1bbb8c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1bbb8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1bbb90:
    // 0x1bbb90: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1bbb90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1bbb94:
    // 0x1bbb94: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1bbb94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1bbb98:
    // 0x1bbb98: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x1bbb98u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1bbb9c:
    // 0x1bbb9c: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x1bbb9cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1bbba0:
    // 0x1bbba0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1bbba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1bbba4:
    // 0x1bbba4: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x1bbba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1bbba8:
    // 0x1bbba8: 0x3e00008  jr          $ra
label_1bbbac:
    if (ctx->pc == 0x1BBBACu) {
        ctx->pc = 0x1BBBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBBA8u;
        // 0x1bbbac: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBBB0u;
        goto label_fallthrough_0x1bbba8;
    }
    ctx->pc = 0x1BBBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBBA8u;
        // 0x1bbbac: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bbba8:
    ctx->pc = 0x1BBBB0u;
}
